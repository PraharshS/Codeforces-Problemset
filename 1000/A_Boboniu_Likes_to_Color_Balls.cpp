#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1e9 + 7
#define INF 1e9 + 7
#define len(x) x.size()
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define FOR(i, n) for (ll i = 0; i < n; i++)
#define FORR(i, n) for (ll i = n - 1; i >= 0; i--)
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n";
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> ump;

bool check(int arr[])
{
    int od = 0;
    FOR(i, 4)
    {
        if (arr[i] & 1)
        {
            od++;
        }
    }
    if (od > 1)
    {
        return false;
    }
    return true;
}
void solve()
{
    int n = 4;

    int arr[n];
    int od = 0;
    FOR(i, n)
    {
        cin >> arr[i];
    }
    if (check(arr))
    {
        cout << "Yes";
    }
    else if (arr[0] && arr[1] && arr[2])
    {
        arr[0]--;
        arr[1]--;
        arr[2]--;
        arr[3]++;
        if (check(arr))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    else
    {
        cout << "No";
    }
    cout << endl;
}
int32_t main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}