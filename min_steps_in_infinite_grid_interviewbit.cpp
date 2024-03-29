int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    long long steps = 0;
    for(int i = 1; i < A.size();i++){
        steps+= max(abs(A[i-1]-A[i]),abs(B[i-1]-B[i]));
    }
    return steps;
}

// Another approach
int Solution::coverPoints(vector &A, vector &B) {

int n = A.size();
int ans = 0;
for(int i = 0;i<n-1;i++)
{ 
  int x =  abs(A[i+1]-A[i]);
  int y = abs(B[i+1]-B[i]);
  if(x>y){
    swap(x,y);
  }
   ans += x + (y - x);//it will take, when y > x  then x steps together and remaining 
        // y - x steps lonely

}
return ans;
}
