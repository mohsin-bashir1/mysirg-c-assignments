#include<stdio.h>

int main(){
    int i, j, l, u;
    printf("Enter two number, i will print all prime in between them on screen.:\n");
    scanf("%d%d", &l, &u);
    for(i=l; i<u; i++){
        for(j=2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            printf("%d ", i);
        }
    }
    return 0;
}