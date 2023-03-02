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
