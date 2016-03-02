#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c1,c2;
    cin>>c1>>c2;
    int diff=(c2-c1+50)/100;
    int s=diff%60;
    diff/=60;
    int m=diff%60;
    diff/=60;
    int h=diff%60;
    printf("%02d:%02d:%02d\n",h,m,s);
    return 0;
}
