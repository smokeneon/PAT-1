#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int main()
{
    int a,b;
    cin>>a>>b;
    long long sum=a+b;
    int d;
    cin>>d;
    while(sum)
    {
        s.push(sum%d);
        sum/=d;
    }
    if(s.empty())
    {
        cout<<0<<endl;
        return 0;
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}
