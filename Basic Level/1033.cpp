#include<bits/stdc++.h>
using namespace std;

set<char> s;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int len1=s1.length(),len2=s2.length();
    for(int i=0;i<len1;++i) s.insert(s1[i]);
    if(s.count('+'))
    {
        for(int i=0;i<len2;++i)
        {
            if(!isupper(s2[i]))
            {
                if(!s.count(toupper(s2[i])))
                {
                    cout<<s2[i];
                }
            }
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i<len2;++i)
        {
            if(!s.count(toupper(s2[i])))
            {
                cout<<s2[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
