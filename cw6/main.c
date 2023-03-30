#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void zad1a(unsigned int n, int *tab){
    int i;
    for(i=0; i<n; i++){
        tab[i] = 0;
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void zad1b(unsigned int n, int *tab){
    int i;
    for(i=0; i<n; i++){
        tab[i] = i;
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void zad1c(unsigned int n, int *tab){
    int i;
    for(i=0; i<n; i++){
        tab[i] *= 2;
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void zad1d(unsigned int n, int *tab){
    int i;
    for(i=0; i<n; i++){
        if(tab[i] < 0){
            tab[i] = -tab[i];
        }
        printf("%d ", tab[i]);
    }
    printf("\n");
}

float zad2a(unsigned int n, int *tab){
    int i;
    float suma = 0;
    for(i=0; i<n; i++){
        suma += tab[i];
    }
    return suma / n;
}

int zad2b(unsigned int n, int *tab){
    int i, suma = 0;
    for(i=0; i<n; i++){
        suma += tab[i];
    }
    return suma;
}

int zad2c(unsigned int n, int *tab){
    int i, suma = 0;
    for(i=0; i<n; i++){
        suma += tab[i]*tab[i];
    }
    return suma;
}

float zad4(unsigned int n, int *tab){
    int i, iloczyn = 1;
    for(i=0; i<n; i++){
        iloczyn *= tab[i];
    }
    return pow(iloczyn, 1.0/n);
}

int zad5(unsigned int n){
    bool tab[n];
    for(i=0; i<n; i++){
        tab[i] = true;
    }
    int j, k;
    for(j=2; j<n; j++){
        if(tab[i]){
            for(k=2*j; k<n; k+=j){
                tab[k] = false;
            }
        }
    }

}

int main()
{
    int tab[6] = {1, 9, 20, 4, 15};
    //wypisz(6, tab);
    //int tab1[5];
    //zad1a(5, tab);
    //zad1b(5, tab);
    //zad1c(5, tab);
    //zad1d(6, tab);
    //printf("%f", zad2a(6, tab));
    //printf("%d", zad2b(6, tab));
    //printf("%d", zad2c(6, tab));
    printf("%.2f", zad4(5, tab));
    return 0;
}
