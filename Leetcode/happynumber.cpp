class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        if(seen.find(n)!=seen.end()) return false;
        seen[n]=1;
        int current=0;
        while(n!=0){
            current+=((n%10)*(n%10));
            n=n/10;
        }
        return isHappy(current);

    }
private:
    unordered_map<int,int> seen;
};
