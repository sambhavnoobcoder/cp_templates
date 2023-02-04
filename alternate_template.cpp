#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/* adding custom functions for various tasks */

unsigned long long calculateBitwiseOR(const vector<unsigned long long> &numbers)	//calculates the bitwise or of all numbers in a vector	
{
    unsigned long long result = 0;
    for (auto num : numbers) {
        result |= num;
    }
    return result;
}

unsigned long long getBitwiseOrResult(unsigned long long x, unsigned long long y)	//given two numbers x, y , it returns a number whose bitwise or with x gives y
{
    return y ^ x;
}

int next_biggest_even(int x) 	//pass in a number to return the next biggest even number
{
  if (x % 2 == 0) x += 2;
  else x++;
  return x;
}

int next_biggest_odd(int x) 	//pass in a number to return the next biggest odd number
{
  if (x % 2 == 0) x++;
  else x += 2;
  return x;
}

int countDistinctCharacters(string s) {
unordered_map<char, bool> m;
for (char c : s) {
if (m[tolower(c)]) continue;
m[tolower(c)] = true;
}
return m.size();
}

int countFreq(string& pat, string& txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        /* For current index i, check for
           pattern match */
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
 
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M) {
            res++;
        }
    }
    return res;
}

int longestPalindromeSubseq(string s) {
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = n - 1; i >= 0; i--) {
        dp[i][i] = 1;
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[0][n - 1];
}

string smallest_substring(string s1, string s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    if (len1 == 0 || len2 == 0) return "";
    unordered_map<char, int> char_count;
    for (char c : s2) char_count[c]++;
    int start = 0, end = 0, min_len = INT_MAX, count = char_count.size(), min_start = 0;
    while (end < len1) {
        char c = s1[end];
        if (char_count.count(c) && --char_count[c] == 0) count--;
        end++;
        while (count == 0) {
            if (end - start < min_len) {
                min_len = end - start;
                min_start = start;
            }
            c = s1[start];
            if (char_count.count(c) && ++char_count[c] > 0) count++;
            start++;
        }
    }
    return min_len == INT_MAX ? "" : s1.substr(min_start, min_len);
}

void solve()
{
	
}
/* clang-format on */

/* Main()  function */
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	int tc;
	cin>>tc;

	while(tc--)
	{
		solve();
		/* write code in solve function from now on*/
	}
	return 0;
}
