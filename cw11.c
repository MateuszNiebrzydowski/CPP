#include <stdio.h>
#include <stdlib.h>

int suma(int t[][100][100]){
    int sum = 0;
    for (int i=0; i<100; i++){
        for (int j=0; j<100; j++){
            for (int k=0; k<100; k++){
                sum += t[i][j][k];
            }
        }
    }
    return sum;
}

int max_avg(int **t, unsigned int n, unsigned int m){
    int suma, max;
    double wartosc;
    for (int i=0; i<n; i++){
        suma = 0;
        for (int j=0; j<m; j++){
            suma += t[i][j];
        }
        if (((double)suma/m>wartosc) || (i==0)){
            max = i;
            wartosc = (double)suma/m;
        }
    }
    return max;
}

void przepisz(int **t1, int **t2, unsigned int n, unsigned int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            t2[i][j] = t1[i][j];
        }
    }
}

void pom(unsigned int n, int *tab){
    int p;
    for (int i=0; i<n/2; i++){
        p = tab[i];
        tab[i] = tab[n-i-1];
        tab[n-i-1] = p;
    }
}

void odwroc(int **t, unsigned int n, unsigned int m){
    for (int i=0; i<n; i++){
        pom(n, t[i]);
    }
}

int main()
{
    int tab1[2][3] = {{5, 7, 1}, {4, 8, 9}};
    int tab2[2][3] = {{11, 8, 21}, {14, 3, 7}};

    przepisz(tab1, tab2, 2, 3);

    return 0;
}
