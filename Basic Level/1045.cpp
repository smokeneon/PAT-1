#include<bits/stdc++.h>
using namespace std;

int a[100010];
set<int> maxx;
set<int> minn;

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i) {scanf("%d",a+i);minn.insert(a[i]);}
    maxx.insert(0);
    minn.insert(1000000000);
    int cnt=0;
    set<int>::iterator it1;
    set<int>::iterator it2;
    vector<int> v;
    for(int i=1;i<=n;++i)
    {
        minn.erase(a[i]);
        it1=maxx.end();
        --it1;
        it2=minn.begin();
        if(a[i]>*it1&&a[i]<*it2) {++cnt;v.push_back(a[i]);}
        maxx.insert(a[i]);
    }
    cout<<cnt<<endl;
    sort(v.begin(),v.end());
    int l=v.size();
    for(int i=0;i<l;++i)
    {
        if(!i) cout<<v[i];
        else cout<<' '<<v[i];
    }
    cout<<endl;
    return 0;
}
