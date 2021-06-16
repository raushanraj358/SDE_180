// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends

    int first(int a[],int n,int x){
    int start = 0;
	int end = n - 1;
	int res = -1;

	while(start <= end){
		int mid = start +(end-start)/2;
		if(a[mid]==x){
			end = mid - 1;
			res = mid;
		}
		else if(a[mid]>x){
			end = mid-1;
		}
		else{
			start = mid + 1;
		}
	}
	return res;
}

int last(int a[],int n,int x){
    int s = 0;
    int e = n-1;
    int res1 = -1;
	while(s <= e){
		int mid1 = s +(e-s)/2;
		if(a[mid1]==x){
			s = mid1 + 1;
			res1 = mid1;
		}
		else if(a[mid1]>x){
			e = mid1-1;
		}
		else{
			s = mid1 + 1;
		}
	}
	return res1;
}
vector<int> find(int a[], int n , int x )
{
    vector <int> v;
    int f = first(a,n,x);
    int l = last(a,n,x);
    v.push_back(f);
    v.push_back(l);
    return v;
}
