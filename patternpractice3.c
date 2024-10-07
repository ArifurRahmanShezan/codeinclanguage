#include<stdio.h>
int main(){
    int n=6;
    for(int i=65;i<=n+64;i++){
        char j;
        for(j=65;j<=i;j++){
            printf("%c ",i);
        }
        //printf("%c",j);
        printf("\n");
    }
}