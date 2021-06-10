int Solution::solve(vector<int> &v) {
    sort(v.begin(),v.end());
    if(v[v.size()-1]==0)
    {
        return 1;
    }
    for(int i =0 ; i < v.size()-1;i++){
        if(v[i]!=v[i+1]){
            int count = v.size()-i-1;
        
            if(count == v[i]){
                return 1;
            
            }
        }
        
    }
    return -1;
}
