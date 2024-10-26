//https://www.hackerrank.com/contests/mid-term-1729629486/challenges/job-application-1
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<1){
            printf("Entry-level candidate\n");
        }
        else if(arr[i]>=1 && arr[i]<=3){
            printf("Junior candidate\n");
        }
        else if(arr[i]>=4 && arr[i]<=7){
            printf("Mid-level candidate\n");
        }
        else if(arr[i]>7 && arr[i]<=20){
            printf("Senior candidate\n");
        }
        else{
            return 0;
        }
    }

}