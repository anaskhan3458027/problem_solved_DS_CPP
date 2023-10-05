#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        
        sort(arr, arr + n);
        int ans = arr[n-1]-arr[0];
        for (int i = 1; i < n; i++) {

            if (arr[i] >= k) {

                int maxEle = max(arr[i - 1] + k, arr[n - 1] - k);
                int minEle = min(arr[0] + k, arr[i] - k);

                ans = min(ans, maxEle - minEle);
            }
        }
        return ans;
    }
};
int main() {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    return 0;
}
