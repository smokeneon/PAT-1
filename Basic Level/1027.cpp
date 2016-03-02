#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char c;
    cin>>n>>c;
    n--;
    int ge=1;
    int cen=1;
    int sum=1;
    while(sum+2*ge+4<=n)
    {
        ge+=2;
        ++cen;
        sum+=ge*2;
    }
    int rest=n-sum+1;
    int line=ge;
    int kong=0;
    for(int i=1;i<=cen;++i)
    {
        for(int i=1;i<=kong;++i)cout<<' ';
        for(int i=1;i<=line;++i) cout<<c;
        //for(int i=1;i<=kong;++i)cout<<' ';
        ++kong;
        line-=2;
        cout<<endl;
    }
    line=3;
    kong-=2;
    for(int i=1;i<=cen-1;++i)
    {
        for(int i=1;i<=kong;++i)cout<<' ';
        for(int i=1;i<=line;++i) cout<<c;
        //for(int i=1;i<=kong;++i)cout<<' ';
        --kong;
        line+=2;
        cout<<endl;
    }
    cout<<rest<<endl;
    return 0;
}
