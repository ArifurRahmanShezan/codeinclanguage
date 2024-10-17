//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int foundlucky=0;
    for(int i=x;i<=y;i++){
        int num=i;
        int luckynum=1;
        while(num>0){
            int digit=num%10;
            if(digit!=4 && digit!=7){
            luckynum=0;
            break;
            }
            num=num/10;
        }
        if(luckynum==1){
            printf("%d ",i);
            foundlucky=1;
        } 
        
    }  
    if(foundlucky==0){
            printf("-1");
        }
}