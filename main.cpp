#include <QCoreApplication>
#include <comandomkdisk.h>
#include <string>
int main(int argc, char *argv[])
{
    comandomkdisk *disco=new comandomkdisk();

    //------NOTA, CAMBIAR LA RUTA DEL PATH A ALGUNA RUTA DE SU COMPUTADORA PARA PODER EJECUTARLO

    disco->path="/home/alan/Escritorio/intento.dk";
    disco->unit="m"; //asigno megas en este caso
    disco->size=100; //tendria que pesar 100 mb, pueden probar con diferentes tamaños

    disco->crearfichero(disco);
    printf("Disco creado en %s con tamaño %i\n\n  ",disco->path.c_str(),disco->size);
}
