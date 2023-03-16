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
