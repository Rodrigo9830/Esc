#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Datos
{
	char Nombre[30];
	int Edad;
	char Sexo;
	char Direccion[30];
};
int main ()
{
	int costo;
	struct Datos Agenda;
		
	Agenda.Edad = 40;
	Agenda.Sexo = 'H';

	strcpy(Agenda.Nombre, "pepe"); 
	strcpy(Agenda.Direccion, "15 pte"); 


	
	printf("\n\Bienvenido a la base de Datos: \n");

	printf("\n\Dame el nombre: \n");
	gets(Agenda.Nombre);
	printf("\n\Dame la direccion: \n");
	gets(Agenda.Direccion);
	printf("\n\Dame la edad: \n");
	scanf("%d",&Agenda.Edad);
	fflush(stdin);
	printf("\n\Dame el sexo: \n");
	scanf("%c",&Agenda.Sexo);

	
	printf("\n\Alumno: %s\n", Agenda.Nombre);
	printf("\n\Vive en %s,Tiene %d anios, y es de sexo %c \n", Agenda.Direccion, Agenda.Edad, Agenda.Sexo);
	
	printf("El tipo char ocupa %d bytes de Memoria.\n", sizeof(char));
	printf("El tipo int ocupa %d bytes de Memoria.\n", sizeof(int));
	printf("El tipo float ocupa %d bytes de Memoria.\n", sizeof(float));
	printf("El tipo double ocupa %d bytes de Memoria.\n", sizeof(double));
	printf("El tipo struct ocupa %d bytes de Memoria.\n", sizeof(struct Datos));
	system("PAUSE");
	return 0;
}
