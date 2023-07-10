
int reverse(int x){
    int d;
    unsigned temp;
    long long sum=0;
    temp=x;
    if(x < 0){
        temp*=-1;
    }
    while(temp!=0){
    d=temp%10;
    sum=(sum*10)+d;
    temp/=10;   
    }
    if(x < 0)
    return (sum >= pow(2,-31) && sum <= (pow(2,31)-1) )? (-1*sum):0;
    return (sum >= pow(2,-31) && sum <= (pow(2,31)-1) )? sum:0;
}