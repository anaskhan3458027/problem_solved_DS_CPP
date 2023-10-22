#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int j = 0 ;
        for(int i =0 ; i < n; i++){
            if(arr[i] != 0){
                swap(arr[i] , arr[j]);
                j++;
            }
        }
	}
};
int main() {
    
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    
    return 0;
}
