#include<stdio.h>
int main(){
    int sum=0,n=10;
    for (int i=1;i<=n;i++){
        printf("\n%d + %d =",sum,i);
        sum+=i;
        printf("%d",sum);
    }
    printf("Result %d",sum);

return 0;
}