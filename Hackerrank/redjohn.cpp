long isPrime(long re){
   long count=0;
        bool prime[re+1];
        for(int i=0;i<=re;i++)
            prime[i] = true;

        for(int p = 2; p*p <=re; p++)
            if(prime[p] == true)
                for(int i = p*2; i <= re; i += p)
                    prime[i] = false;

        for(int i = 2; i <= re; i++)
            if(prime[i] == true)
                count++;

        return count;
}

int redJohn(int n) {
    vector<int> memo(n+1,0);
    int count=0;
    memo[1]=1;
    memo[2]=1;
    memo[3]=1;
    memo[4]=2;
    for(int i=5;i<=n;i++){
        memo[i]=memo[i-1]+memo[i-4];
    }
    return isPrime(memo[n]);

}
