#include<bits/stdc++.h>
using namespace std;

map<int,string> di;
map<int,string> gao;
map<string,int> rdi;
map<string,int> rgao;
set<string> sdi;
set<string> sgao;

void init()
{
    sdi.insert("jan");sgao.insert("tam");
    sdi.insert("feb");sgao.insert("hel");
    sdi.insert("mar");sgao.insert("mrr");
    sdi.insert("apr");sgao.insert("huh");
    sdi.insert("may");sgao.insert("tou");
    sdi.insert("jun");sgao.insert("kes");
    sdi.insert("jly");sgao.insert("hei");
    sdi.insert("aug");sgao.insert("elo");
    sdi.insert("sep");sgao.insert("syy");
    sdi.insert("oct");sgao.insert("loc");
    sdi.insert("nov");sgao.insert("mer");
    sdi.insert("dec");sgao.insert("jou");
    di[0]="tret";rdi["tret"]=0;
    di[1]="jan";gao[1]="tam";rdi["jan"]=1;rgao["tam"]=1;
    di[2]="feb";gao[2]="hel";rdi["feb"]=2;rgao["hel"]=2;
    di[3]="mar";gao[3]="maa";rdi["mar"]=3;rgao["maa"]=3;
    di[4]="apr";gao[4]="huh";rdi["apr"]=4;rgao["huh"]=4;
    di[5]="may";gao[5]="tou";rdi["may"]=5;rgao["tou"]=5;
    di[6]="jun";gao[6]="kes";rdi["jun"]=6;rgao["kes"]=6;
    di[7]="jly";gao[7]="hei";rdi["jly"]=7;rgao["hei"]=7;
    di[8]="aug";gao[8]="elo";rdi["aug"]=8;rgao["elo"]=8;
    di[9]="sep";gao[9]="syy";rdi["sep"]=9;rgao["syy"]=9;
    di[10]="oct";gao[10]="lok";rdi["oct"]=10;rgao["lok"]=10;
    di[11]="nov";gao[11]="mer";rdi["nov"]=11;rgao["mer"]=11;
    di[12]="dec";gao[12]="jou";rdi["dec"]=12;rgao["jou"]=12;
}

string gao1(string s)
{
    int x=0;
    int len=s.length();
    for(int i=0;i<len;++i) x=x*10+s[i]-'0';
    int a=x%13;
    int b=x/13%13;
    string ret="";
    if(a==0&&b==0) ret="tret";
    else if(a==0&&b!=0) ret=gao[b];
    else if(a!=0&&b==0) ret=di[a];
    else ret=gao[b]+' '+di[a];
    return ret;
}

int gao2(string s)
{
    if(s.length()==4) return 0;
    else if(s.length()==3)
    {
        if(sdi.count(s)) return rdi[s];
        else return rgao[s]*13;
    }
    else
    {
        string a=s.substr(0,3);
        string b=s.substr(4,3);
        return rgao[a]*13+rdi[b];
    }
}

int main()
{
    int n;
    cin>>n;
    cin.get();
    init();
    while(n--)
    {
        string s;
        getline(cin,s);
        if(isdigit(s[0])) cout<<gao1(s)<<endl;
        else cout<<gao2(s)<<endl;
    }
    return 0;
}
