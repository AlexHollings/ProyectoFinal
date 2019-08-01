#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

char date[20];
char uname[20];
char iname[20];
char mno[15];

int cost;
int n,i;

    char dat[20];
    char unam[20];
    char inam[20];
    char mn[15];
    int cos;
//Introducir informacion en el FILE
void write()
{
    FILE *fp;

    printf("Introduzca Fecha   ::");
    scanf("%s", dat);
    printf("Introduzca Nombre   ::");
    scanf("%s", unam);
    printf("Introduzca numero de celular  ::");
    scanf("%s", mn);
    printf("Introduzca nombre de instrumento   ::");
    scanf("%s", inam);
    printf("Introduzca costo    ::");
    scanf("%d", &cos);

    fp=fopen( "instrumento.txt", "a");
    fprintf(fp,"%s %s %s %s %d\n",dat,unam,mn,inam,cos);

    fclose(fp);

   // getch();

}

//Funcion para demostrar informacion

void demostrar(char da[])
  {

    FILE *fp;
    int res;
    fp=fopen("‪instrumento.txt", "r");
    res=strcmp(date,da);
    if(res==0)
            {
                printf("\n Nombre del cliente= %s", unam);
                printf("\n Numero de celular  = %s", mn);
                printf("\n Nombre de instrumento = %s", inam);
                printf("\n Costo del instrumento  = %d", cos);
            }

            if(res==1)
            {

                printf("\n No encontrado");
            }


        fclose(fp);
   // getch();
}

    void main (){

    char ch;
    char lm[20];


    do
    {
        printf("\n \n *******Instrumentos de Alex*******\n");
        printf("presione(1) para crear una entada para el instrumento\n");
        printf("presione(2) para demostrar en una fecha especifica\n");
        printf("presione(0) para salir");
        printf("\n\nSeleccione su opcion");

        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                {
                    write();
                    printf("Informacion introducido exitosamente. \n");
                    break;
                }
            case 2:
                {
                    printf("\nIntroduzca la fecha ::");
                    scanf("%s", &date);
                    demostrar(date);
                    printf(" \n ya sali");
                    break;
                }
            case 0:
                {
                    exit(0);
                }
                default:
                    printf("\nSeleccion invalido");
        }

    }
    while(ch!=0);
    //
}







