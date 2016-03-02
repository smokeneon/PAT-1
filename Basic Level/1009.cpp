#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    string str;
    while(cin>>str) v.push_back(str);
    reverse(v.begin(),v.end());
    vector<string>::iterator it;
    int cnt=0;
    for(it = v.begin();it != v.end();++it)
    {
        if(cnt) cout<<' '<<*it;
        else cout<<*it;
        ++cnt;
    }
    cout<<endl;
    return 0;
}
