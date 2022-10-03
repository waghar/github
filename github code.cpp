#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
#include<fstream>
using namespace __gnu_pbds;
typedef long long ll;
typedef string str;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define sz(x) (int)(x).size()
 
#define lb lower_bound
#define ub upper_bound
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define REPr(i,a,b) for(ll i=a; i>=b; i--)
#define all(x) (x).begin(), (x).end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// const int mod =998244353;
#define pct(x) __builtin_popcount(x)
#define clz(x) __builtin_clz(x)
#define pctl(x) __builtin_popcountll(x)
#define clzl(x) __builtin_clzll(x)
const ll inf= 1e17;
const ll ninf= -1e17;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.f); cerr << ","; _print(p.s); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
 
/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m) {return (a + b) % m;}
ll mod_mul(ll a, ll b, ll m) { return (a * b) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}
 
 
const ll mod = 1e9+7;


void solve(){
asd
   std::ifstream myfile; myfile.open("btpp.txt",ios::out);
    std::string mystring;
    vector<string>v;
    if ( myfile.is_open() ) {
        string tp;
        while(getline(myfile,tp)){
            v.pb(tp);
        }
    }

    vector<string> out;
   for(auto x:v){
        
        out.pb(x);
    }
    for(auto y:out){
        cout<<y<<endl;
    }

    

    myfile.close();

}






int32_t main(){
	fast;
    cin.tie(0);
    cout.tie(0);
   
    // int t; cin>>t;
    // while(t--){
    // 	solve();
    // }

    solve();

    
}
