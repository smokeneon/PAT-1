#include<bits/stdc++.h>
using namespace std;

struct fenshu
{
    long long zs;
    long long xsfz;
    long long xsfm;
};

long long gcd(long long a,long long b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

long long lcm(long long a,long long b)
{
    return a*b/gcd(a,b);
}

template<typename T>
string any2str(T x)
{
    stringstream ss;
    ss<<x;
    return ss.str();
}

string get(long long a,long long b,long long c,long long d,long long e)
{
    string s1="";
    if(a==0) s1="0";
    else if(a<0)
    {
        if(c==0)
        {
            s1+="("+any2str(d)+'/'+any2str(e)+')';
        }
        else
        {
            s1+='('+any2str(c);
            if(d==0) s1+=')';
            else s1+=" "+any2str(-d)+'/'+any2str(e)+')';
        }
    }
    else
    {
        if(c==0)
        {
            s1+=any2str(d)+'/'+any2str(e);
        }
        else
        {
            s1+=any2str(c);
            if(d) s1+=" "+any2str(d)+'/'+any2str(e);
        }
    }
    return s1;
}

int main()
{
    long long a,b,c,d;
    scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);
    fenshu fs[3];
    long long g1=gcd(a,b);
    a/=g1;
    b/=g1;
    if(b<0){a=-a;b=-b;}
    long long g2=gcd(c,d);
    c/=g2;
    d/=g2;
    if(d<0){c=-c;d=-d;}
    fs[1].zs=a/b;
    fs[1].xsfz=a%b;
    fs[1].xsfm=b;
    fs[2].zs=c/d;
    fs[2].xsfz=c%d;
    fs[2].xsfm=d;
    string s1=get(a,b,fs[1].zs,fs[1].xsfz,fs[1].xsfm),s2=get(c,d,fs[2].zs,fs[2].xsfz,fs[2].xsfm);
    cout<<s1<<" + "<<s2<<" = ";
    {
        long long t1=a*d+b*c;
        long long t2=b*d;
        long long gcd1=gcd(t1,t2);
        gcd1=gcd1<0?-gcd1:gcd1;
        t1/=gcd1;
        t2/=gcd1;
        long long ans1=t1/t2;
        long long ans2=t1%t2;
        long long ans3=t2;
        cout<<get(t1,t2,ans1,ans2,ans3)<<endl;
    }
    cout<<s1<<" - "<<s2<<" = ";
    {
        long long t1=a*d-b*c;
        long long t2=b*d;
        long long gcd1=gcd(t1,t2);
        gcd1=gcd1<0?-gcd1:gcd1;
        t1/=gcd1;
        t2/=gcd1;
        long long ans1=t1/t2;
        long long ans2=t1%t2;
        long long ans3=t2;
        cout<<get(t1,t2,ans1,ans2,ans3)<<endl;
    }
    cout<<s1<<" * "<<s2<<" = ";
    if(c==0) cout<<0<<endl;
    else
    {
        long long t1=a*c;
        long long t2=b*d;
        long long gcd1=gcd(t1,t2);
        gcd1=gcd1<0?-gcd1:gcd1;
        t1/=gcd1;
        t2/=gcd1;
        long long ans1=t1/t2;
        long long ans2=t1%t2;
        long long ans3=t2;
        cout<<get(t1,t2,ans1,ans2,ans3)<<endl;
    }
    cout<<s1<<" / "<<s2<<" = ";
    if(c==0)
    {
        cout<<"Inf";
    }
    else
    {
        if(c<0) {c=-c;d=-d;}
        long long t1=a*d;
        long long t2=b*c;
        long long gcd1=gcd(t1,t2);
        gcd1=gcd1<0?-gcd1:gcd1;
        t1/=gcd1;
        t2/=gcd1;
        long long ans1=t1/t2;
        long long ans2=t1%t2;
        long long ans3=t2;
        cout<<get(t1,t2,ans1,ans2,ans3)<<endl;
    }

    return 0;
}
