#include <stdio.h>
#include <stdlib.h>


int war_bezwzgl(int n){
    if (n>=0){
        return n;
    }
    else {
        return -n;
    }
}
int silnia(unsigned int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*silnia(n-1);
}
int najw(unsigned int n){
    int k;
    for(int i=n-1; i>=k; i--){
        if (n%i==0){
            k=i;
        }
    }
    return k;
}
float pot(int n){
    float wynik=1;
    if (n<0){
        for (int i=1; i<=n; i++){
            wynik=1/(wynik*=2);
        }
    }
    else{
        for (int i=1; i<=n; i++){
            wynik*=2;
        }
    }
    return wynik;
}
unsigned int podloga(unsigned int n){
    int wynik=0;
    for(int i=0; i<=n; i++){
        wynik+=sqrt(i);
    }
    return wynik;
}
unsigned int wzgl_pierwsze(unsigned int n){

}
int main()
{
    int n;
    printf("Podaj liczbe nieujemna: ");
    scanf("%d", &n);
    printf("%f", podloga(n));

    return 0;
}
