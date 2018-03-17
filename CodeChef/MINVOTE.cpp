#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        ll n, si[100005], sol[100005] = { 0 }, sum;
        cin >> n;
        for (ll i = 1; i <= n; i++) {
            cin >> si[i];
        }
        for (ll i = 1; i < n; i++) {
            sum = 0;
            for (ll j = i + 1; j <= n && sum <= si[i]; j++) {
                sum += si[j];
                sol[j]++;
            }
        }
        for (ll i = n; i > 0; i--) {
            sum = 0;
            for (ll j = i - 1; j > 0 && sum <= si[i]; j--) {
                sum += si[j];
                sol[j]++;
            }
        }
        for (ll i = 1; i <= n; i++) {
            cout << sol[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}