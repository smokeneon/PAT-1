#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    vector<char> v1;
    vector<char> v2;
    set<char> vset;
    vector<char> v;
    cin>>s1>>s2;
    int len1=s1.length();
    int len2=s2.length();
    for(int i=0;i<len1;++i) v1.push_back(toupper(s1[i]));
    for(int i=0;i<len2;++i) v2.push_back(toupper(s2[i]));
    vector<char>::iterator it;
    for(it=v1.begin();it!=v1.end();++it)
    {
        if(find(v2.begin(),v2.end(),*it)-v2.begin()>=v2.size() && !vset.count(*it))
        {
            vset.insert(*it);
            v.push_back(*it);
        }
    }
    vector<char>::iterator vit;
    for(vit=v.begin();vit!=v.end();++vit)
        cout<<*vit;
    cout<<endl;
    return 0;
}
