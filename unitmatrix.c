//https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/unit-matrix
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int pos=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            
            if(i==j){
                if(arr[i][j]!=1){
                    pos=1;
                    break;
                }

            }
            if(i!=j){
                if(arr[i][j]!=0){
                    pos=1;
                    break;
                }
            }
        }
        
    }
    if(pos==1){
        printf("NO");
    }
    else{
        printf("YES");
    }

}