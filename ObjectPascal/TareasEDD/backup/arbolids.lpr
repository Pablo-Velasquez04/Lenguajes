program arbolids;

{$mode objfpc}{$H+}

uses
  Classes, SysUtils;

type
  //Nodo de la lista enlazada para nombres y apellidos
  PNodoLista = ^TNodoLista;
  TNodoLista = record
    nombre: string;
    apellido: string;
    siguiente: PNodoLista;
  end;

  //Nodo del árbol binario
  PNodoArbol = ^TNodoArbol;
  TNodoArbol = record
    id: Integer;
    listaNombres: PNodoLista;
    izquierda: PNodoArbol;
    derecha: PNodoArbol;
  end;

  //Clase para manejar el árbol
  TArbolIDs = class
  private
    raiz: PNodoArbol;

    function CrearNodoArbol(id: Integer): PNodoArbol;
    function CrearNodoLista(nombre, apellido: string): PNodoLista;
    procedure InsertarEnArbolRec(var nodo: PNodoArbol; id: Integer);
    function BuscarNodoRec(nodo: PNodoArbol; id: Integer): PNodoArbol;
    procedure MostrarArbolRec(nodo: PNodoArbol; nivel: Integer);
    procedure LiberarListaRec(nodo: PNodoLista);
    procedure LiberarArbolRec(nodo: PNodoArbol);

  public
    constructor Create;
    destructor Destroy; override;

    procedure InsertarID(id: Integer);
    procedure AgregarNombre(id: Integer; nombre, apellido: string);
    function BuscarID(id: Integer): Boolean;
    procedure MostrarArbol;
    procedure MostrarNombresDeID(id: Integer);
    procedure CargarDatosEjemplo;
  end;


function TArbolIDs.CrearNodoArbol(id: Integer): PNodoArbol;
begin
  New(Result);
  Result^.id := id;
  Result^.listaNombres := nil;
  Result^.izquierda := nil;
  Result^.derecha := nil;
end;

function TArbolIDs.CrearNodoLista(nombre, apellido: string): PNodoLista;
begin
  New(Result);
  Result^.nombre := nombre;
  Result^.apellido := apellido;
  Result^.siguiente := nil;
end;

procedure TArbolIDs.InsertarEnArbolRec(var nodo: PNodoArbol; id: Integer);
begin
  if nodo = nil then
    nodo := CrearNodoArbol(id)
  else if id < nodo^.id then
    InsertarEnArbolRec(nodo^.izquierda, id)
  else if id > nodo^.id then
    InsertarEnArbolRec(nodo^.derecha, id);
  //Si id = nodo^.id, no insertamos duplicados
end;

function TArbolIDs.BuscarNodoRec(nodo: PNodoArbol; id: Integer): PNodoArbol;
begin
  if (nodo = nil) or (nodo^.id = id) then
    Result := nodo
  else if id < nodo^.id then
    Result := BuscarNodoRec(nodo^.izquierda, id)
  else
    Result := BuscarNodoRec(nodo^.derecha, id);
end;

procedure TArbolIDs.MostrarArbolRec(nodo: PNodoArbol; nivel: Integer);
var
  i: Integer;
  actual: PNodoLista;
begin
  if nodo <> nil then
  begin
    //Mostrar subárbol derecho
    MostrarArbolRec(nodo^.derecha, nivel + 1);

    //Mostrar nodo actual con indentación
    for i := 1 to nivel do
      Write('    ');
    Write('ID: ', nodo^.id, ' -> ');

    //Mostrar lista de nombres
    actual := nodo^.listaNombres;
    if actual = nil then
      WriteLn('(sin nombres)')
    else
    begin
      while actual <> nil do
      begin
        Write('[', actual^.nombre, ' ', actual^.apellido, ']');
        actual := actual^.siguiente;
        if actual <> nil then
          Write(' -> ');
      end;
      WriteLn;
    end;

    //Mostrar subárbol izquierdo
    MostrarArbolRec(nodo^.izquierda, nivel + 1);
  end;
end;

procedure TArbolIDs.LiberarListaRec(nodo: PNodoLista);
begin
  if nodo <> nil then
  begin
    LiberarListaRec(nodo^.siguiente);
    Dispose(nodo);
  end;
end;

procedure TArbolIDs.LiberarArbolRec(nodo: PNodoArbol);
begin
  if nodo <> nil then
  begin
    LiberarArbolRec(nodo^.izquierda);
    LiberarArbolRec(nodo^.derecha);
    LiberarListaRec(nodo^.listaNombres);
    Dispose(nodo);
  end;
end;

//Implementación de métodos públicos
constructor TArbolIDs.Create;
begin
  inherited Create;
  raiz := nil;
end;

destructor TArbolIDs.Destroy;
begin
  LiberarArbolRec(raiz);
  inherited Destroy;
end;

procedure TArbolIDs.InsertarID(id: Integer);
begin
  InsertarEnArbolRec(raiz, id);
end;

procedure TArbolIDs.AgregarNombre(id: Integer; nombre, apellido: string);
var
  nodoArbol: PNodoArbol;
  nuevoNodo, actual: PNodoLista;
begin
  nodoArbol := BuscarNodoRec(raiz, id);
  if nodoArbol <> nil then
  begin
    nuevoNodo := CrearNodoLista(nombre, apellido);

    //Insertar al inicio de la lista
    if nodoArbol^.listaNombres = nil then
      nodoArbol^.listaNombres := nuevoNodo
    else
    begin
      nuevoNodo^.siguiente := nodoArbol^.listaNombres;
      nodoArbol^.listaNombres := nuevoNodo;
    end;
  end
  else
    WriteLn('Error: ID ', id, ' no encontrado en el árbol');
end;

function TArbolIDs.BuscarID(id: Integer): Boolean;
begin
  Result := BuscarNodoRec(raiz, id) <> nil;
end;

procedure TArbolIDs.MostrarArbol;
begin
  WriteLn('=== ESTRUCTURA DEL ÁRBOL ===');
  if raiz = nil then
    WriteLn('Árbol vacío')
  else
    MostrarArbolRec(raiz, 0);
  WriteLn;
end;

procedure TArbolIDs.MostrarNombresDeID(id: Integer);
var
  nodo: PNodoArbol;
  actual: PNodoLista;
begin
  nodo := BuscarNodoRec(raiz, id);
  if nodo <> nil then
  begin
    WriteLn('Nombres para ID ', id, ':');
    actual := nodo^.listaNombres;
    if actual = nil then
      WriteLn('  (sin nombres)')
    else
    begin
      while actual <> nil do
      begin
        WriteLn('  - ', actual^.nombre, ' ', actual^.apellido);
        actual := actual^.siguiente;
      end;
    end;
  end
  else
    WriteLn('ID ', id, ' no encontrado');
  WriteLn;
end;

procedure TArbolIDs.CargarDatosEjemplo;
begin
  //Cargar los datos del diagrama
  WriteLn('Cargando datos del diagrama...');

  // Insertar IDs en el árbol
  InsertarID(25);
  InsertarID(5);
  InsertarID(41);
  InsertarID(10);

  // Agregar nombres según el diagrama
  AgregarNombre(25, 'SANTIAGO', 'FERNANDEZ');
  AgregarNombre(5, 'KARLA', 'LEMUS');
  AgregarNombre(10, 'ANGEL', 'CABRERA');
  AgregarNombre(41, 'CARLOS', 'GONZALEZ');

  WriteLn('Datos cargados correctamente.');
  WriteLn;
end;

//Programa principal
var
  arbol: TArbolIDs;
  opcion: Integer;
  id: Integer;
  nombre, apellido: string;

begin
  arbol := TArbolIDs.Create;
  try
    WriteLn('======= ARBOL DE IDs CON LISTA DE NOMBRES =======');
    WriteLn;

    repeat
      WriteLn('MENÚ:');
      WriteLn('1. Cargar datos del diagrama');
      WriteLn('2. Insertar nuevo ID');
      WriteLn('3. Agregar nombre a un ID');
      WriteLn('4. Buscar ID');
      WriteLn('5. Mostrar arbol completo');
      WriteLn('6. Mostrar nombres de un ID especifico');
      WriteLn('0. Salir');
      Write('Seleccione una opcion: ');
      ReadLn(opcion);
      WriteLn;

      case opcion of
        1: begin
             arbol.CargarDatosEjemplo;
           end;

        2: begin
             Write('Ingrese el ID a insertar: ');
             ReadLn(id);
             arbol.InsertarID(id);
             WriteLn('ID ', id, ' insertado.');
             WriteLn;
           end;

        3: begin
             Write('Ingrese el ID: ');
             ReadLn(id);
             Write('Ingrese el nombre: ');
             ReadLn(nombre);
             Write('Ingrese el apellido: ');
             ReadLn(apellido);
             arbol.AgregarNombre(id, nombre, apellido);
             WriteLn;
           end;

        4: begin
             Write('Ingrese el ID a buscar: ');
             ReadLn(id);
             if arbol.BuscarID(id) then
               WriteLn('ID ', id, ' encontrado.')
             else
               WriteLn('ID ', id, ' no encontrado.');
             WriteLn;
           end;

        5: begin
             arbol.MostrarArbol;
           end;

        6: begin
             Write('Ingrese el ID: ');
             ReadLn(id);
             arbol.MostrarNombresDeID(id);
           end;

        0: WriteLn('Salindo...');

        else
          WriteLn('Opcion invalida.');
          WriteLn;
      end;

    until opcion = 0;

  finally
    arbol.Free;
  end;
end.
