int Solution::isPalindrome(int A) {
    string s1=to_string(A);
    string s2="";
for(int i=s1.size()-1;i>=0;i--){
    s2.push_back(s1[i]);
}
if(s1==s2){
    return 1;
}
return 0;
}
