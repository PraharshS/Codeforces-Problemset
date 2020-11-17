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

int32_t main()
{
    fast;
    int n;
    cin >> n;
    int mid = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - mid; j++)
        {
            cout << "  ";
        }

        for (int k = 0; k < mid; k++)
        {
            cout << k;
            if (i != 0)
            {
                cout << " ";
            }
        }

        for (int k = mid; k >= 0; k--)
        {
            cout << k;
            if (k)
            {
                cout << " ";
            }
        }
        mid++;
        cout << endl;
    }
    mid = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < mid; j++)
        {
            cout << "  ";
        }

        for (int k = 0; k <= n - mid; k++)
        {
            cout << k;
            if (i != n - 1)
            {
                cout << " ";
            }
        }

        for (int k = n - mid - 1; k >= 0; k--)
        {
            cout << k;
            if (k)
            {
                cout << " ";
            }
        }
        mid++;
        cout << endl;
    }

    return 0;
}