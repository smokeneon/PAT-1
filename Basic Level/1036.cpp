#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char c;
    cin>>n>>c;
    for(int i=1;i<=n;++i) cout<<c;
    cout<<endl;

    for(int i=1;i<=(n+1)/2-2;++i)
    {
        cout<<c;
        for(int j=1;j<=n-2;++j) cout<<' ';
        cout<<c<<endl;
    }

    for(int i=1;i<=n;++i) cout<<c;
    cout<<endl;
    return 0;
}
