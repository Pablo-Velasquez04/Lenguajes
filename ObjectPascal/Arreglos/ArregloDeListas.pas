program ArregloDeListas;
{$mode objfpc}{$H+}

uses
  SysUtils, Classes;

type
  TTarea = record
    id: Integer;
    descripcion: string;
  end;

var
  n, i, dia: Integer;
  Tareas: array of TTarea;
  Dias: array[0..4] of TStringList;
  nombresDias: array[0..4] of string = ('Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes');

begin
  WriteLn('===== ORGANIZADOR DE TAREAS POR DIAS =====');
  WriteLn;

  // Solicitar cantidad de tareas
  Write('Ingrese la cantidad de tareas (n): ');
  ReadLn(n);

  // Redimensionar el arreglo dinámico
  SetLength(Tareas, n);

  // Inicializar las listas de días
  for i := 0 to 4 do
    Dias[i] := TStringList.Create;

  try
    // Capturar información de cada tarea
    WriteLn;
    WriteLn('Ingrese los datos de las tareas:');
    for i := 0 to n - 1 do
    begin
      Write('ID de la tarea ', i + 1, ' (numero >= 0): ');
      ReadLn(Tareas[i].id);

      Write('Descripción de la tarea: ');
      ReadLn(Tareas[i].descripcion);

      // Validar que el ID sea >= 0
      while Tareas[i].id < 0 do
      begin
        WriteLn('Error: El ID debe ser >= 0');
        Write('ID de la tarea ', i + 1, ' (numero >= 0): ');
        ReadLn(Tareas[i].id);
      end;
    end;

    // Distribuir tareas por días usando módulo 5
    WriteLn;
    WriteLn('Distribuyendo tareas...');
    for i := 0 to n - 1 do
    begin
      dia := Tareas[i].id mod 5;  // Días 0-4 (Lunes a Viernes)

      Dias[dia].Add(Format('Tarea ID: %d - %s',
                          [Tareas[i].id, Tareas[i].descripcion]));
    end;

    //Mostrar resultados
    WriteLn;
    WriteLn('======= DISTRIBUCION DE TAREAS POR DIA =======');
    for i := 0 to 4 do
    begin
      WriteLn;
      WriteLn(nombresDias[i], ' (Día ', i, '):');

      if Dias[i].Count = 0 then
        WriteLn('  -> Sin tareas asignadas')
      else
      begin
        WriteLn('  -> ', Dias[i].Count, ' tarea(s) asignada(s):');
        for dia := 0 to Dias[i].Count - 1 do
          WriteLn('     ', dia + 1, '. ', Dias[i][dia]);
      end;
    end;

    //Mostrar estadísticas
    WriteLn;
    WriteLn('====== ESTADISTICAS ======');
    WriteLn('Total de tareas procesadas: ', n);
    for i := 0 to 4 do
      WriteLn(nombresDias[i], ': ', Dias[i].Count, ' tareas');

  finally
    //Liberar memoria de las listas
    for i := 0 to 4 do
      Dias[i].Free;
  end;

  WriteLn;
  WriteLn('Programa terminado. Presione Enter para salir...');
  ReadLn;
end.
