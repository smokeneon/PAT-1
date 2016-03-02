#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(true)
    {
        int a[5];
        for(int i=1;i<=4;++i) {a[i]=n%10;n/=10;}
        sort(a+1,a+5);
        int maxx=0;
        int minn=0;
        for(int i=1;i<=4;++i) minn=10*minn+a[i];
        for(int i=4;i>=1;--i) maxx=10*maxx+a[i];
        n=maxx-minn;
        printf("%04d - %04d = %04d\n",maxx,minn,n);
        if(n==0||n==6174) break;
    }
    return 0;
}
