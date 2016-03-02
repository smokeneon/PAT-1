#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int cnt = 0;
    cin>>n;
    while(n!=1)
    {
        if(n&1) n = (n*3+1)>>1;
        else n >>= 1;
        ++cnt;
    }
    cout<<cnt<<endl;
    return 0;
}
