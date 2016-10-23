#include <stdio.h>

int main()
{
    int canal_1, canal_2, resta, resta_2;
    do{
    scanf("%d%d", &canal_1, &canal_2);

    resta = canal_1 - canal_2;
    if(resta<0){
        resta = resta * -1;

    }
    if(canal_1>canal_2)
    {
        resta_2 = canal_2 +(99 - canal_1);
    }
    if(canal_2>canal1){

        resta_2 = canal_1 +(99 - canal_2);
    }
    if(resta<resta_2){
        printf("%d", resta);
    }
    else{
        printf("%d", resta_2);
    }
    }while(canal_1 !=0 && canal_2 !=0);

return 0;
}
