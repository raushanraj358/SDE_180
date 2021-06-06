int cmp(string a,string b){
    string ab = a.append(b);
    string ba = b.append(a);
    return ab.compare(ba)>0?1:0;
}


string Solution::largestNumber(const vector<int> &A) {
    string ans = "";
    int count = 0;
    vector<string> str;
    for(int i =0;i < A.size();i++){
        if(A[i]==0) count++;
        str.push_back(to_string(A[i]));
    }
    sort(str.begin(),str.end(),cmp);
    if(count == A.size()) return "0";
    for(int i = 0; i<A.size(); i++) ans+=str[i];
    return ans;
}
