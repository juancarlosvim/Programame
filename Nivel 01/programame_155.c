#include <stdio.h>

int main()
{
    int c1, c2, suma;

    do{
        scanf("%d%d", &c1, &c2);

        suma = c1 *2 + c2 *2;

        printf("%d\n", suma);
    }
    while(c1>0 && c2>0);
return 0;
}
