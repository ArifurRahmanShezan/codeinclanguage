//https://www.hackerrank.com/contests/mid-term-1729629486/challenges/price-range
#include<stdio.h>
int main(){
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=x && arr[i]<=y){
            count++;
        }
    }
    printf("%d",count);
}