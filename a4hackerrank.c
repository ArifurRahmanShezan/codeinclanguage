//https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/n-kites
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=N-1;i>=1;i--){
        for(int j=N-1;j>=i;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}