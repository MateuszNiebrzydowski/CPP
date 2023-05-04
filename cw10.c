#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <wchar.h>

bool porownaj(char *napis1, char *napis2, int n){
    for(int i=0; (napis1[i]!=0)&&(napis2[i]!=0); i++){
        if(napis1[n+i]!=napis2[i]){
            return false;
        }
        if(napis2[i]==0){
            return true;
        }
    }
    return false;
}

void wytnij2(char *napis1, char *napis2){
    for(int i=0; napis2[i]!=0; i++){
        for(int j=0; napis1[j]!=0; j++){
            if (porownaj(napis1, napis2, i)){
                printf("xd");
            }
        }
    }
}

char *godzina(int godz, int min, int sek){
    char *wyn=malloc(9*sizeof(char));
    sprintf(wyn, "%02d:%02d:%02d", godz, min, sek);
    return wyn;
}

void maleduze(char *nap){
    for(int i=0; nap[i]!=0; i++){
        nap[i] = toupper(nap[i]);
        printf(nap[i]);
    }
}

void zad18(int **t, unsigned int n, unsigned int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d\t", t[i][j]);
        }
    }

}

int main()
{
    char nap1 = "mama ma marmolade";
    char nap2 = "tata robi karr";
    printf(godzina(12, 18, 20));
    maleduze(nap1);

    return 0;
}
