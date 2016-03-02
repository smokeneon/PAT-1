#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int b = n/100;
    int s = (n/10)%10;
    int g = n%10;
    for(int i=1;i<=b;++i) cout<<'B';
    for(int i=1;i<=s;++i) cout<<'S';
    for(int i=1;i<=g;++i) cout<<i;
    cout<<endl;
    return 0;
}
