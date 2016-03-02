#include<bits/stdc++.h>
using namespace std;
double a[100010];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i) scanf("%lf",a+i);
    double ans(0.0);
    int time=1;
    for(int i=n;i>=1;--i,++time)
    {
        ans+=a[n-i+1]*i*time;
    }
    printf("%.2f\n",ans);
    return 0;
}
