#include <stdio.h>
void kiir(int);
int main() {
    int x=2;
    while(x<=3){
        x++;
    }
    if (x!=3){
        printf("Hiba");
    }
    kiir(x);
    return 0;
}
void kiir(int x){
    printf("%d",x);
}
