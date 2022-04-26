#include <stdio.h>
#include <stdlib.h> //dla exit
#include <string.h> //dla strlen

int main()
{
 char tab[21],znak='a';int licznik =0;
FILE * wskfile = fopen("input33.txt","w");//tworzymy zmiennną plikową
if(wskfile==NULL)//sprawdzamy czy da się otworzyć plik jeśli nie to exit
{
    printf("Blad w otwarciu pliku\n");
    exit(-1);
}

while((licznik<20)&&(znak!='q'&&znak!='Q'))
{
    printf("podaj znak\n");
    scanf(" %c",&znak);//spacja zwby nie wczytywac znakow nowej lini
    tab[licznik]=znak;
 
licznik++;
}
tab[licznik]='\0';
printf("%s\n",tab);
printf("%d\n",licznik);
     fputs(tab,wskfile);
    

 
    
       
    
 

if(fclose(wskfile)!=0)//zamykamy plik i w razie bledy przerywamy program
{
    printf("nie udalo sie zamknac pliku\n");
    exit(-1);
}
    return 0;
}