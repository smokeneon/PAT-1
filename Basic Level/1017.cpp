#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char ans[1010];
    memset(ans,'0',sizeof ans);
    int n;
    cin>>n;
    int x=0;
    int len=s.length();
    for(int i=0;i<len;++i)
    {
        x=x*10+s[i]-'0';
        ans[i]=x/n+'0';
        x%=n;
    }
    int p=0;
    while(ans[p]=='0'&&p<len) ++p;
    for(int i=p;i<len;++i) cout<<ans[i];
    if(p==len) cout<<0;
    cout<<' ';
    cout<<x<<endl;
    return 0;
}
