// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
    int c0=0,c1=0,c2=0;
	for(int j = 0; j < n; j++){
		if(a[j] == 0){
			c0++;
		}
		else if(a[j] == 1){
			c1++;
		}
		else{
			c2++;
		}
		
	}
	int l =0;
	for(int k = 0; k < c0; k++){
		a[l++] = 0; 
	}
	for(int k = 0; k < c1; k++){
		a[l++] = 1; 
	}
	for(int k = 0; k < c2; k++){
		a[l++] = 2; 
	}
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
