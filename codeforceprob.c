#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int pri_diag=0;
    int sec_diag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                pri_diag+=arr[i][j];
            }
            if(i+j==n-1){
                sec_diag+=arr[i][j];
            }
        }
    }
    int diff=abs(pri_diag-sec_diag);
    printf("%d",diff);

}