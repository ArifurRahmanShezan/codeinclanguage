//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Shttps://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);


    for(int i=0; i<n; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        int sum=0;
        if(x<y)
        {
            for(int j=x+1; j<y; j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }

            }
        }
        else
        {
            for(int j=y+1; j<x; j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
        }
        printf("%d\n",sum);
    }
}
