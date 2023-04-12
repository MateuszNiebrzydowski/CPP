//1


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d, e, f;
    float x, y, w, wx, wy;
    printf("Podaj wspolczynniki do rownan ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    printf("Zdefiniowales uklad rownan: \n%dx+%dy=%d \n%dx+%dy=%d", a, b, c, d, e, f);
    w=a*e-d*b;
    wx=c*e-f*b;
    wy=a*f-d*c;
    if (w!=0){
        x=wx/w;
        y=wy/w;
        printf("\nx = %d \ny = %d", x, y);
    }
    else {
        if (wx==0&&wy==0){
            printf("Uklad ma nieskonczenie wiele rozwiazan");
        }
        else{
            printf("Uklad jest sprzeczny");
        }
    }




    return 0;
}


//2


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   /* int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for (int i=n; i<k; i=i+n){
        if (i>m){
            printf("%d ", i);
        }
    }*/

    /*int n, m;
    scanf("%d %d", &n, &m);
    for (int i=1; i<=m; i++){
        printf("%d ", n*i);
    }*/

    /*int n, m = 1;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        if (i%2==0){
            m*=i;
        }
    }
    printf("%d", m);*/

    /*int n, p=1, d=1, s;
    scanf("%d", &n);
    if (n==1 || n==2){
        s=1;
    }
    for (int i=1; i<n; i++){
        s+=i;
    }
    printf("%d", s);*/

    int n, m, d, i;
    scanf("%d %d", &n, &m);
    for(i=1; i<=m && i<=n; i++){
        if(m%i==0&&n%i==0){
            d=i;
        }
    }
    printf("NWD %d i %d wynosi %d", n, m, d);

    return 0;
}


//3 (4)


#include <stdio.h>
#include <stdlib.h>

void zlicz(int x){
    static int ile = 0;
    ile+=x;
    printf("Funkcja zostala wywolana %d razy\n", ile);
}
int ciag(int n){
    if (n==0 || n==1){
        return 1;
    }
    return ciag(n-1)+2*ciag(n-2)+3;
}
int fib(int n){
    if (n==0 || n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int ciag1(int n){
    if (n<3){
        return 1;
    }
    return ciag1(n-1)+ciag1(n-2)+ciag1(n-3);
}
int podciag(int n){
    if (ciag1(n)%3==0){
        return ciag1(n);
    }
}
int ciag2(int n){
    if(n==0 || n==1){
        return 1;
    }
    if (n%2==0){
        return ciag2(n-1)+n;
    }
    return ciag2(n-1)*n;
}
int ciag3(int n){
    for (int i=0; i<10; i++){
        if (n%2==0){
            return ciag3((n-1)/2);
        }
        else{
            return ()
        }
    }
}
int main()
{
    for (int i=0; i<10; i++){
        printf("%d ", ciag2(i));
    }

    return 0;
}



//5


#include <stdio.h>
#include <stdlib.h>

int zad1(int *x, int *y){
    if (*x < *y){
        return *x;
    }
    return *y;
}

int* zad2(int *x, int *y){
    if (*x < *y){
        return x;
    }
    return y;
}

void zad3(int *x, int *y){
    int z = *x;
    *x = *y;
    *y = z;
    printf("%d %d", *x, *y);
    return;
}

void zad4(int *x, int *y){
    if (*y < *x){
        int z = *x;
        *x = *y;
        *y = z;
    }
    printf("%d %d", *x, *y);
    return;
}

int zad5(const int *a, const int *b){
    return *a + *b;
}

void zad6(int n, int *w){
    *w = n;
    return;
}

int* zad10(){
    return malloc(sizeof(int));
}

//zad13

double f(int x){
    return x * x;
}

double g(double (*f)(int), int n){
    return f(n);
}

int main()
{
    //int x = 20, y = 5;
    //printf("%d %d\n", &x, &y);
    //printf("%d ", zad3(&x, &y));
    //zad4(&x, &y);
    //const int a = 10, b = 15;
    //printf("%d", zad5(&a, &b));
    //int m = 10;
    //zad6(7, &m);
    //printf("%d", m);

    int* a = zad10();
    printf("%p\n", a);
    *a = 9;
    printf("%d", *a);

    printf("%d", g(&f, 7));

    return 0;
}


//6


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


//7


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