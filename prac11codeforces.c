//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int countp =1;
    if (n>=2){
        for(int i=2;i<n;i++){
            if(n%i==0){
                countp=0; 
                break; 
            }
        }
         if(countp==1){
                printf("YES");
        }
        else{
                printf("NO");
            }
    }
    else{
        printf("NO");
    }
    
}