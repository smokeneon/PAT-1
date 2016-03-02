#include<bits/stdc++.h>
using namespace std;

struct node
{
    int addr;
    int val;
    int next;
    node(int taddr,int tval,int tnext):addr(taddr),val(tval),next(tnext){}
};

map<int,pair<int,int> > in;
vector<node> v;

int main()
{
    int st;
    int n,k;
    scanf("%d%d%d",&st,&n,&k);
    //cin>>st>>n>>k;
    for(int i=1;i<=n;++i)
    {
        int addr;
        scanf("%d",&addr);
        scanf("%d%d",&in[addr].first,&in[addr].second);
        //cin>>in[addr].first>>in[addr].second;
    }
    int ss=st;
    while(ss!=-1)
    {
        node tn(ss,in[ss].first,in[ss].second);
        v.push_back(tn);
        ss=in[ss].second;
    }
    int pos=0;
    int len=v.size();
    while(pos+k<=len)
    {
        reverse(v.begin()+pos,v.begin()+pos+k);
        pos+=k;
    }
    for(int i=0;i<len-1;++i)
    {
        printf("%05d %d %05d\n",v[i].addr,v[i].val,v[i+1].addr);
    }
    printf("%05d %d -1\n",v[len-1].addr,v[len-1].val);
    return 0;
}
