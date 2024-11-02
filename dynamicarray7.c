//https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/dynamic-array-7
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(1*sizeof(int));
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr=realloc(arr,(i+1)*sizeof(int));
        arr[i]=x;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
}