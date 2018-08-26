class Solution {
public:
  int bitonic(vector<int>& numbers){
    int k=longestincsubstr(numbers);
    int l=longestincsubstr(reverse(numbers.begin(),numbers.end()));
    return k+l-1;
  }
private:
  int maxinvector(vector<int>& longest){
    int max=longest[0];
    for(int i=1;i<longest.size();i++){
      if(longest[i]>max) max=longest[i];
    }
    return max;
  }
  int longestincsubstr(vector<int>& numbers){
    vector<int> longest(numbers.size(),1);
    int i,j;
    for(i=1;i<numbers.size();i++){
      for(j=0;j<i;j++){
        if(numbers[j]<numbers[i]){
          longest[i]=max(longest[i],longest[i-1]+1);
        }
      }
    }
    return maxinvector(longest);
  }
};
