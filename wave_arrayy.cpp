#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i = 0; i < n-1; i+=2){
		swap(a[i],a[i+1]);
	}
	for(int j = 0; j < n; j++){
		cout<<a[j]<<" ";
	}
}

//Another solution using vector
vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i = 0; i < A.size()-1; i += 2){
        swap(A[i],A[i+1]);
    }
    return A;
}
