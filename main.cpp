#include <iostream>
#include <cstdio>
#include <unistd.h>


int main() {

    int stan = 1;

    if  (stan == 1)
        puts("1\n");
    else
        if  (stan==2)
            puts("2\n");
        else
            puts("3\n");

    switch  (stan)
    {
        case 1 :
            {
                puts("1\n");
                break;
            }
        case 2:
        {
            puts("2\n");
            break;
        }
        default:
            puts("3\n");
    }

    for (int i = 4; i >= 0; --i) {
        printf("%d\n",i);
    }

    int x = 0;
    printf("\n");
    while (x<5){
        printf("%d\n",x);
        x=x+1;
    }

    printf("\n");
    x=0;
    do{
        printf("%d\n",x);
        x++;
    }while (x<10);

    int tab[5];
    int tab1[5] = {0,1,2,3,4};

    int tab2[]={0,1,2,3};


    int tabliczkaMnozenia[11][11];

    for (int j = 1; j < 11; ++j) {
        for (int i = 1; i < 11; ++i) {
            tabliczkaMnozenia[j-1][i-1] = j*i;
        }
    }
    printf("\n");

    for (int k = 0; k < 10 ; ++k) {
        for (int i = 0; i < 10; ++i) {
            printf("%d\t | \t",tabliczkaMnozenia[k][i]);
        }
        printf("\n ");
    }


    int a = 1;
    int b = 1;
    int c = 0;
    int sum = a + b;

    int ileLiczbWyswietlic = 10;

    printf("%d,",a);
    printf("%d,",b);

    for (int l = 0; l < ileLiczbWyswietlic-2; ++l) {
        c = a+b;
        a = b;
        b = c;
        printf("%d,",c);
        sum += c;
    }

    printf("\nsuma =  %d ", sum);


    return 0;
}