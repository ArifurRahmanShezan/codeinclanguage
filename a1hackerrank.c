//https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/vowels-27
#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        return 0;
    }
}