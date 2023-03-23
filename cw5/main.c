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
