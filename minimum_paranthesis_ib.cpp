int Solution::solve(string A) {
stack<char> s;
int open = 0,close = 0;

for(int i=0;i<A.size();i++){
    
     if(A[i] == '(')
     {
         s.push(A[i]);
     }
     else {
         
           if(A[i] == ')'){
               
                 if(s.empty()){
                     
                      close++;
                 }
                 else{
                        s.pop();
                 }
           }
     }
}
return s.size()+close;
}
