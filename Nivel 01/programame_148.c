#include <stdio.h>

int main()
{
    int h, m, minutos;

    do{

        
        scanf("%d:%d", &h, &m);
        if(h==0 && m==0){
            break;
        }
        minutos = (24 * 60) - (m+60*h);
        printf("%d\n", minutos);

    }
    while(1);

return 0;
}
