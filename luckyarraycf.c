//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int min_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if (arr[i]==min){
            min_count++;
        }
    }
    if(min_count%2!=0){
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }
}