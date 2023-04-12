/* 
OGÓLNIE

    printf("%d %f", x, y)   wypisze nam dwie liczby, pierwsza całkowita, druga zmiennoprzecinkowa
    scanf("%d", &n)         zapisuje wpisaną przez użytkownika liczbę do zainicjowanej wcześniej zmiennej n (typy te same co przy printf)
    static int zmienna = 5; tej zmiennej nie zmienisz

    Biblioteki:
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>(i co teraz panie piojas)
        pow(x, y)   x^y
        sqrt(x)     pierwiastek 2 stopnia z x
        fabs(x)     wartość bezwzględna z x

INSTRUKCJE WARUNKOWE IF

    if (a == 0)
    {
        *działanie*
    }
    else if (a == 1)
    {
        *działanie*
    }
    else
    {
        *działanie*
    }

PĘTLE FOR ORAZ WHILE

    for (int i = 0; i < x; i++)    pętla zaczyna z i=0, wykona się x razy
    {
        *działanie*
    }

    int i = 0;
    while (i <= x)  tutaj w odróżnieniu od pętli for musimy opisać warunek na wcześniej zainicjowanej zmiennej
    {
        *działanie*
    }

FUNKCJE

    DEFINIOWANIE FUNCKJI:
    typ_funkcji nazwa_funkcji (*parametry używane w funkcji*)
    {
        *działanie*
    }

    PRZYKŁAD:
    int dodaj (int a, int b)
    {
        return a + b;
    }

    Typy funkcji uzależnione są od efektów, jakie chcemy otrzymać. Przykładowo używając typu int jesteśmy w stanie zwrócić liczbę całkowitą,
      typ double z kolei zwróci wartość zmiennoprzecinkową. Przyda się także typ void. Ten typ nie zwraca żadnej wartości, natomiast będzie
      pomocny na przykład przy wypisaniu wartości z tablicy:

      void wypisz (int tab[], int rozmiar)
      {
        for (int i = 0; i < rozmiar; i++)
        {
            printf("%d, ", tab[i]);
        }
      }

    Funkcję typu void możemy wywołać "na sucho", natomiast typy int lub double będą wymagały już odpowiedniego użycia printf.

REKURENCJE te kurwy jebane

    Rekurencje są śmiesznym (zjebanym) typem funkcji odwołującym się do samej siebie. Możemy za ich pomocą wyliczać różne ciągi, np Fibonacciego:

    int fibonacci (int n)
    {
        int c;
        if (n == 0)
        {
            c = 0;
        }
        else if (n == 1 || n == 2)
        {
            c = 1;
        }
        else if (n > 2)
        {
            c = fibonacci(n-2) + fibonacci(n-1);
        }
        return c;
    }

WSKAŹNIKI jeszcze większe kurwy

    symbol	    znaczenie	                        użycie
    *	        weź wartość x	                    *x
    *	        deklaracja wskaźnika do wartości	int *x;
    &	        weź adres	                        &x

    TU COŚ KONDZIU M NASKROBAŁ BO JA NIE UMIE TEGO

    void change(int* x, int* y) //do funkcji podajemy dwa wskaźniki zmiennych (int* x oznacza, że jest to adres zmiennej, 
                                                                                dzięki któremy możemy zmienić wartości tam przechowywane)
    {
        int temp = *x; //tworzymy pomocniczą zmienną do przechowania zapominanej wartości
        *x = *y; //zamieniamy wartości pierwszej zmiennej po wskaźnikach
        *y = temp; //zamieniamy wartości drugiej zmiennej po wskaźnikach
    }   

    int main()
    {
        int x = 32, y = 543;
        printf("Before: x = %d, y = %d\n", x, y);
        change(&x, &y);
        printf("After: x = %d, y = %d\n", x, y);
        // Before: x=32, y=543
        // After: x=543, y=32
        return 0;
    }

TABLICE

    int nazwa[rozmiar] = {element1, element2...}
    int tab[3] = {1, 2, 3};
    int tab[2] = 4;
*/