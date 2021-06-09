int Solution::solve(vector<int> &A, int B) {
    int count  = 0;
    int s = 0;
    int e = A.size()-1;
    while(s<=e){
        int mid = s +(e-s)/2;
        if(A[mid]<=B){
            s = mid +1;
            count = mid + 1;
        }
        else{
            e = mid-1;
        }
    }
    return count;
}
