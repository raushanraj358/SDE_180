int Solution::isPalindrome(string A) {
   string str;
    if(A.size()==0) return 1;
    
    int sz = A.size();
    for(int i=0; i<sz; i++){
        char c = A[i];
        if((c>='0' && c<='9') || (c>='A' && c<='Z') || (c>='a' && c<='z')){
            if(c>='A' && c<='Z'){
                c = ((char)(c + 32));
            }
            str.push_back(c);
        }
    }
    
    int i=0, j = str.size()-1;
    
    while(i<j){
        if(str[i]==str[j]){
            i++;
            j--;
        }
        else{
            return 0;
        }
    }
    return 1;
}


