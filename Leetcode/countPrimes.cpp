class Solution {
public:
    int countPrimes(int n) {
        vector<int> isPrime(n+1,1);
        seive(n,isPrime);
        int count=0;
        for(int i=2;i<isPrime.size()-1;i++){
            if(isPrime[i]) count++;
        }
        return count;
    }
private:
    void seive(int n,vector<int>& isPrime){
        isPrime[0]=0;
        isPrime[1]=0;
        for(int i=2;i<isPrime.size();i++){
            if(isPrime[i]==1){
                int k=i+i;
                while(k<n){
                    isPrime[k]=0;
                    k+=i;
                }
            }
        }
    }
};
