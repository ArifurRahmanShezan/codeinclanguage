//https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/no-repeatation
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count[100005]={0};
    for(int i=0;i<100005;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=1 && arr[i]<=100005){
            count[arr[i]-1]++;
        }
    }
    int sum=0;
    for(int i=0;i<100005;i++){
        if(count[i]==1){
            sum+=count[i];
        }
    }
    printf("%d",sum);   
    return 0;
}