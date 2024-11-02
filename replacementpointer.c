//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *arr;
    arr=(int *)calloc(n,sizeof(int));
    if(n<=10){
        arr=(int *)malloc(10*sizeof(int));
    }
    else if(n<=50){
        arr=(int *)realloc(arr,50*sizeof(int));
    }
    else if(n<=100){
        arr=(int *)realloc(arr,100*sizeof(int));
    }
    else if(n<=500){
        arr=(int *)realloc(arr,500*sizeof(int));
    }
    else{
        arr=(int *)realloc(arr,n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    if(arr==NULL){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(*ptr>0){
            printf("1 ");
        }
        else if(*ptr<0){
            printf("2 ");
        }
        else{
            printf("0 ");
        }
        ptr++;
    }
    free(arr);

}