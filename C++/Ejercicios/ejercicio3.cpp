#include <iostream>
#include <fstream>
int main() {
    std::ofstream file("test.mia", std::ios::binary);
    file << "Hola archivo " << 9;
    file.flush();
    file.close();
    if (file) std::cout << "Archivo creado!\n";
    return 0;
}
