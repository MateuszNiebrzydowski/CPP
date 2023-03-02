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
