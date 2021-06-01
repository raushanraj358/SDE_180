// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    vector<int> duplicates(int a[], int n) {
        sort(a,a+n);
	vector<int> duplicate;
		for(int j = 0; j < n; j++){
			if(a[j] == a[j+1]){
				duplicate.push_back(a[j]);

			}
		}
		if(duplicate.size() == 0){
		    duplicate.push_back(-1);
		}
		return duplicate;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends