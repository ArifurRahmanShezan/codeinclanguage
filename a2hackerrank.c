//https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/zeroes-and-ones-1-1/problem
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count0=0,count1=0;
    for(int i=0;i<N;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
    }
    printf("%d %d",count0,count1);
    
}