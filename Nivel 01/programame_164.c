#include <stdio.h>

int miFuncion(void);

int main()
{
     while(miFuncion());
return 0;
}

int miFuncion(){
    long a1, a2, b1, b2, base, altura;
    scanf("%ld%ld%ld%ld", &a1, &a2, &b1, &b2);
    base = b1 - a1;
    altura = b2 - a2;
    if((base < 0)|| (altura <0))
        return 0;

    printf("%ld\n", base * altura);
    return 1;
}
