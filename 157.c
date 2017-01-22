#include <stdio.h>
void prueba();
int main()
{
    int i;
    int casosDeprueba;
    scanf("%d", &casosDeprueba);
    for(i=1;i<=casosDeprueba;i++)
    {
        prueba();
    }
    return 0;
}

void prueba()
{
    int dia, mes, dia_mes[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int transcurridos=0, resultado;
    int i;
    scanf("%d", &dia);
    do{
        scanf("%d", &mes);

    }while(mes<1 || mes >12);
    for(i=0;i<mes-1;i++)
    {
        transcurridos = transcurridos + dia_mes[i];
    }
    transcurridos = transcurridos +dia;
    resultado = 365 - transcurridos;

    printf("%d\n", resultado);
}
