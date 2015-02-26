#include<bits/stdc++.h>
#ifdef _WIN32
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif
#define ull unsigned long long
#define ll long long
#define in(x) scanf("%d", &x)
#define inll(x) scanf("%lld",&x)
#define inl(x) scanf("%llu", &x)
#define in2(x, y) scanf("%d %d", &x, &y)
#define in3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define out1(x) printf("%d\n",x)
#define out2(x,y) printf("%d %d\n",x,y)
#define out3(x,y,z) printf("%d %d %d\n",x,y,z)
#define ochar(x) printf("%c\n",x)
#define ostr(x) printf("%s\n",x)
#define nl pc('\n')
#define V(type,name) vector<type> name
#define FOR(i,x,n) for(i=x;i<n;i++)
#define _FOR(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define display(v) for(typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it){ cout<<*it<<" "; nl;}
#define sz(v) (int)((v).size())
#define pb push_back
#define MAX 1000002

template <typename t> inline void get(t& x)
{
    t c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

template <typename t> inline void out(t& n) 
{
    if(n<0){n=-n;pc('-');}
    t i=10;char buffer[10];
    do{
        buffer[--i]=(n%10)+'0';n/=10;
    }while(n);
    do{
        pc ( buffer [ i ] ) ; 
    } while ( ++i< 10 ) ; 
    pc(' ');
}


using namespace std;
#define __DEBUG__
int main()
{
    #ifdef __DEBUG__
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int i,t,n,k;    
    return 0;
}

// TemplateGenerator -> uses getchar_unlocked
