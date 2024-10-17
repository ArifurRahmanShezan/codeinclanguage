//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=2){
        for(int i=2;i<=n;i++){
            int prime=1;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    prime=0;
                    break;
                }
            }
            if(prime==1){
                printf("%d ",i);
            
            }
        }
        
    }
    
}