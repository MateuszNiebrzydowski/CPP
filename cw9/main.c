#include <stdio.h>
#include <stdlib.h>

void wyczysc(char *napis){
    napis[0]=0;
}

int dlugosc(char *napis){
    int i=0;
    while(napis[i]!=0){
        i++;
    }
    return i;
}

int porownaj(char *napis1, char *napis2){
    int i=0;
    while(napis1[i]!=0 || napis2[i]!=0){
        if (napis1[i]!=napis2[i]){
            return 0;
        }
        i++;
    }
    return 1;
}

void przepisz(char *napis1, char *napis2){
    int size=malloc(20*(sizeof(char)));
    for(int i=0; i<size; i++){
        napis2[i]=napis1[i];
    }
    printf("%s", napis2);
}

void kopiujn(char *nap1, char *nap2, int n){
    for(int i=0; i<n; i++){
        nap2[i]=nap1[i];
    }
}

void sklejpizde(char *nap1, char *nap2, char *nap3){

}
void zamien(char *napis){

}

int main()
{
    //for(int i=0; i<=127; i++){
        //printf("%d %c \n", i, i);
    //}
    //char *napis="negro";
    //printf(napis);
    //printf("\n");
    //wyczysc(napis);
    //printf(napis);
    //free(napis);
    //printf("%d", dlugosc(napis));
    //printf("%d", porownaj("negro", "nigger"));
   // przepisz("halapeno", "dzalapino");
   char nap1 = "matematyka";
   char nap2 = "informatyka";
   kopiujn(nap1, nap2, 3);
   printf("%s", nap2);


    return 0;
}
