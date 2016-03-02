#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum1=0;
    int sum2=0;
    int k=1;
    int cnt=0;
    int sum3=0;
    int cnt1=0;
    int maxx=0;
    bool f=false;
    for(int i=1;i<=n;++i)
    {
        int x;
        cin>>x;

        switch(x%5)
        {
        case 0:
            if(!(x&1))
                sum1+=x;
            break;
        case 1:
            sum2+=k*x;
            k=-k;
            f=true;
            break;
        case 2:
            ++cnt;
            break;
        case 3:
            sum3+=x;
            ++cnt1;
            break;
        case 4:
            maxx=max(maxx,x);
            break;
        }
    }
    if(sum1==0) cout<<'N';
    else cout<<sum1;
    cout<<' ';
    if(!f) cout<<'N';
    else cout<<sum2;
    cout<<' ';
    if(cnt==0) cout<<'N';
    else cout<<cnt;
    cout<<' ';
    if(sum3==0) cout<<'N';
    else printf("%.1f",((double)sum3)/cnt1);
    cout<<' ';
    if(maxx==0) cout<<'N';
    else cout<<maxx;
    return 0;
}
