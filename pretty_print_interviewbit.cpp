vector<vector<int> > Solution::prettyPrint(int n) {
    vector<vector<int> > ans;
    for(int i=1;i<(2*n);i++)
    {   
        vector<int> a;
        for(int j=1;j<(2*n);j++)
        {
            a.push_back(  max( abs(i-n), abs(j-n) ) + 1 );
        }
        ans.push_back(a);
    }
    return ans;
}
