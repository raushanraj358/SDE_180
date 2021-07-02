int Solution::trap(const vector<int> &A) {
    int n = A.size();
    vector<int> left(n);
    vector <int>right(n);
    int water = 0;
    left[0] = A[0];
    for(int i = 1; i < n; i++){
        left[i] = max(left[i-1],A[i]);
    }
    right[n-1] = A[n-1];
    for(int i = n-2; i >= 0; i--){
        right[i] = max(right[i+1],A[i]);
    }
    for(int i = 0; i < n; i++){
        water += min(right[i],left[i]) - A[i];
    }
    return water;
}
