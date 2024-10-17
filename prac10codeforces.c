//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++,k+=2){
        for(int l=n-i;l>=1;l--){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        printf("\n");
    }
    k-=2;
    for(int i=n;i>=1;i--,k-=2){
        for(int j=n-i;j>=1;j--){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        printf("\n");
    }
    
}