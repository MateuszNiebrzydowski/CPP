#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int suma=0;
    for(int i=2; i<=2000000000; i++){
        for(int j=1; j<i; j++){
            if (i%j==0){
                suma+=j;
            }
        }
        if(suma==i){
            printf("%d", &i);
                }
    }*/

    /*int z;
    scanf("Podaj gorny zakres: %d", &z);
    for (int i=2; i<=z; i++){
        for (int j=2; j<z; j++){
            if (i%j==0){
                printf("To nie jest liczba pierwsza");
            }
            else {
                printf("To jest liczba pierwsza");
            }
        }
    }*/

    int n;
    scanf("%d", &n);
    for(int i=2; n=1; i++){
        if(n%i==0){
            n=n/i;
            printf("%d", n);
        }
    }

    return 0;
}
