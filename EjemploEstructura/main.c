#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

typedef struct
{
  int legajo;
  int notaUno;
  int notaDos;
  float promedio;
  char nombre[50];
  int estado;

}eAlumno;

eAlumno pedirAlumno(void);
void mostrarAlumno(eAlumno alumno );
int buscarLugarLibre (eAlumno[], int); // devuelve entero le paso lugar me falta el alumno
int buscarIndiceDelAlumno(eAlumno listado[], int legajo, int cantidad);
int insertarAlumnoEnLaLista(eAlumno[]);
void mostrarListado (eAlumno listado[], int cantidad);
ordenarPorPromedio(eAlumno[], int cantidad);
float calcularPromedio(int, int );
// main menu de usuarios
// completar funciones faltantes

int main()
{

    int i;
    eAlumno listadoAlumnos;

    listadoAlumnos = pedirAlumno();
    mostrarAlumno(listadoAlumnos);
    /*(i=0;i<TAM;i++)
    {
        listadoDelMain[i].estado=0; // inicializo todos los elementos de estado en 0
    }
    eAlumnos aluDelMain;

    aluDelMain= pedirAlumno();

    mostrarAlumno(aluDelMain);*/





    return 0;
}



float calcularPromedio (int nota, int nota2)
{
    float promedio;
    promedio = (float)(nota+nota2)/2;
    return promedio;
}
void mostrarAlumno(eAlumno alumno )
{
    printf("Numero legajo: %d", alumno.legajo);
    printf("\nNombre del Alumno: %s", alumno.nombre);
    printf("\nPrimer Nota: %d", alumno.notaUno);
    printf("\nSegunda Nota: %d", alumno.notaDos);
    printf("\nPromedio Notas: %f", alumno.promedio);
}


/*void mostrarAlumnos(eAlumno listado[], int TAM)
{
    int i;
    for (i = 0; i < c5; i++)
    {
        mostrarAlumno(lista[i]);
    }
}*/

eAlumno pedirAlumno()
{
    eAlumno listadoAlumnos;
    printf("Ingrese Legajo: " );
    scanf("%d", &listadoAlumnos.legajo);
    printf("Ingrese Nombre del Alumno: ");
    fflush(stdin);
    gets(listadoAlumnos.nombre);
    printf("Ingrese Nota Uno: ");
    scanf("%d", &listadoAlumnos.notaUno);
    printf("Ingrese Nota Dos: ");
    scanf("%d", &listadoAlumnos.notaDos);
    // listadoAlumnos.promedio = calcularPromedio(int listadoAlumnos.notaUno, int listadoAlumnos.notaDos);
    return listadoAlumnos;
}
/*
int buscarLugarLibre (eAlumnos listado[], int tam)
{
    int indice = -1;
    int i;
    for (i=0;i<tam;i++)
    {        if (listado[i].estado=0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
*/
