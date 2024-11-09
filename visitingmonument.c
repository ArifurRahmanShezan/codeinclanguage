//https://www.hackerrank.com/contests/b6-final-c/challenges/visiting-monument
#include<stdio.h>
void visit_monument(int x,int i){
    
    printf("%d ",x);
    if(x<i){
        visit_monument(x+1,i);
    }
    else if(x>1){
        visit_monument(x-1,1);    
    }

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for( i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
        visit_monument(1,arr[i]);
        printf("\n");
    }
    
}