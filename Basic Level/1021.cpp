#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    int a[10];
    memset(a,0,sizeof a);
    cin>>n;
    int len=n.length();
    for(int i=0;i<len;++i)
    {
        ++a[n[i]-'0'];
    }
    for(int i=0;i<10;++i)
    {
        if(a[i]==0) continue;
        else
        {
            cout<<i<<':'<<a[i]<<endl;
        }
    }
    return 0;
}
