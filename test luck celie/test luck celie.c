#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int b;
    char a;

    printf("effectuer un tirage ? (y/n)\n");
    scanf("%c",&a);
    if (a=='y'){
        b= rand()%101;
        printf("\nvaleur tiree : %d\n",b);
    }
    printf("appuyer sur une lettre pour arreter la tache\n");
    scanf("%d",&a);
    printf("\narret de la tache\n");
    return 0;
}
