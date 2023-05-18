#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element *next;
};

struct element *utworz() {
    return NULL;
};

void wyczysc(struct element *Lista) {
    struct element *wsk=Lista;
    while (Lista!=NULL) {
        Lista = Lista->next;
        free(wsk);
        wsk = Lista;
    }
}

struct element *dodajk(struct element *Lista, int a) {
    struct element *wsk;
    if (Lista==NULL) {
        Lista = wsk = malloc(sizeof(struct element));
    }
    else {
        wsk = Lista;
        while (wsk->next!=NULL) {
            wsk = wsk->next;
        }
        wsk->next = malloc(sizeof(struct element));
        wsk = wsk->next;
    }
    wsk->i = a;
    wsk->next = NULL;

    return Lista;
};

struct element *dodajw(struct element *Lista, struct element *elem, int a) {
    struct element *wsk = malloc(sizeof(struct element));
    wsk->i = a;
    if (elem==NULL){
        wsk->next = Lista;
        Lista = wsk;
    }
    else {
        wsk->next = elem->next;
        elem->next = wsk;
    }
    return Lista;
};

struct element *znajdz(struct element *Lista, int a) {
    while ((Lista!=NULL) && (Lista->i!=a)) {
        Lista = Lista->next;
    }
    return Lista;
};

struct element *usun(struct element *Lista, int a) {
    struct element *wsk, *wsk2;
    if (Lista==NULL) {
        return Lista;
    }
    wsk = Lista;
    if (Lista->i = a) {
        Lista = Lista->next;
        free(wsk);
    }
    else {
        while ((wsk->next!=NULL) && (wsk->next->i!=a)) {
            wsk = wsk->next;
        }
        if (wsk->next!=NULL) {
            wsk2 = wsk->next;
            wsk->next = wsk2->next;
            free(wsk2);
        }
    }
    return Lista;
};

struct element *suma(struct element *Lista, int a) {
    struct element *wsk;
    wsk = Lista->i;

};

int minimum(struct element *Lista) {
    int min = Lista->i;
    while (Lista!=NULL) {
        if (Lista->i<min) {
            min = Lista->i;
        }
        Lista = Lista->next;
    }
    return min;
}

void wypisz(struct element *Lista) {
    while (Lista!=NULL) {
        printf("%d\n", Lista->i);
        Lista = Lista->next;
    }
    printf("\n");
}

struct element *odwroc(struct element *Lista) {

};

int main()
{
    printf("Hello world!\n");

    return 0;
}
