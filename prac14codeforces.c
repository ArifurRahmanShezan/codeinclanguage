//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
#include<stdio.h>
int main(){
    int m,n;
    
    while(1){
        scanf("%d %d",&m,&n);
        if (m<1 || n<1){
            break;
            return 0;
        }
        if(m>n){
            int temp;
            temp=m;
            m=n;
            n=temp;
        }
        int sum =0;
        for(int i=m;i<=n;i++){
            printf("%d ",i);
            sum=sum +i;
            
            
        }
        printf(" sum =%d",sum);
        printf("\n");
    }
}