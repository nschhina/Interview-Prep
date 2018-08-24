class Solution {
public:
    bool isUgly(int num) {
        int temp=num;
        if(temp==0) return false;
        while(temp%2==0){
            temp/=2;
        }
        while(temp%3==0){
            temp/=3;
        }
        while(temp%5==0){
            temp/=5;
        }
        return temp==1;

    }
};
