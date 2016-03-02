#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    int cnt=0;
    bool flag = false;
    while(cin>>a>>b)
    {
        if(b == 0) continue;
        else
        {
            if(cnt) cout<<' '<<a*b<<' '<<b-1;
            else cout<<a*b<<' '<<b-1;
            flag = true;
        }
        ++cnt;
    }
    if(!flag) cout<<"0 0";
    cout<<endl;
    return 0;
}
