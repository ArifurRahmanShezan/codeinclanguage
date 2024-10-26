//https://www.hackerrank.com/contests/mid-term-1729629486/challenges/book-reading-4
#include<stdio.h>
int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<=t){
            count++;
        }
    }
    printf("%d",count);

}