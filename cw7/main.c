#include <stdio.h>
#include <stdlib.h>

void zad1(int size, int *tab){
    int i = 1;
    for(int j=0; j<size; j+=i){
        int suma = 1;
        while (tab[i]==tab[i-1]){
            suma++;
            i++;
        }
        printf("%d %d ", suma, tab[i-1]);
        i++;
    }

}

void zad7a(unsigned int n, int *tab1, int *tab2, int *tab3){
    for(int i=0; i<n; i++){
        tab3[i]=tab1[i]+tab2[i];
        printf("%d ", tab3[i]);
    }
}

void zad7b(unsigned int n, int *tab1, int *tab2, int *tab3){
    for(int i=0; i<n; i++){
        if(tab1[i]>tab2[i]){
            tab3[i]=tab1[i];
        }
        else {
            tab3[i]=tab2[i];
        }
        printf("%d ", tab3[i]);
    }
}

/*void zad9(unsigned int n, int *tab1, int *tab2, int *tab3){
    for(int i=0; i<n; i++){
        int temp[i]=tab2[i];
        tab2[i]=tab1[i];
        tab1[i]=tab3[i];
        tab3[i]=temp[i];
    }
}*/

int zad10(unsigned int n, int *tab){
    int najwieksza = 0;
    for(int i=0; i<n; i++){
        if((tab[i]>najwieksza) || (najwieksza==0)){
            najwieksza=tab[i];
        }
    }
    return najwieksza;
}
void zad12a(unsigned int n, int *tab){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=i; j--){
            tab[i]=tab[j];
            printf("%d ", tab[i]);
        }
    }
}

int main()
{
    int tab1[5] = {3, 1, 4, 5, 1};
    int tab2[5] = {2, 2, 2, 2, 4};
    int tab3[5];
    zad12a(5, tab1);
    return 0;
}
