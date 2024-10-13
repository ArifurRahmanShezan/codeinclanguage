//https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/salami-again
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<N;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<N;i++){
        arr[i]=max-arr[i];
        printf("%d ",arr[i]);
    }

}