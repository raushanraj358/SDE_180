int Solution::reverse(int x) {
    long long int temp , count=0;

    while(x!=0){
        temp=x%10;
        count = count*10+temp;
        x=x/10;
    }
if(count>2147483647 or count<-2147483644){
return 0;
}
else{
return count;
}
}
