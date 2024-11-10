//https://www.hackerrank.com/contests/b6-final-c/challenges/find-the-missing-number-11-3
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        long long m;
        scanf("%lld %d %d %d",&m,&a,&b,&c);
        //printf("%lld %d %d %d\n",m,a,b,c);
        long long res=(a*b*c);
        if(m%res==0){
            long long d=m/res;
            printf("%lld\n",d);
        }
        else{
            printf("-1\n");
        }
    }
}