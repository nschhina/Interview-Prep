class Solution{
  public:
      bool BinarySearchiterative(vector<int>& numbers, int target){
        int lo=0;
        int hi=numbers.size()-1;
        while(hi>=lo){
          int mid= lo + (hi-lo)/2;
          if(numbers[mid]==target) return true;
          if(numbers[mid]>target){
            hi=mid-1;
          }
          if(mid<target){
            lo=mid+1;
          }
        }
        return false;
      }

      bool BSHelper(vector<int>& numbers,int hi, int lo, int target){
        int mid= lo + (hi-lo)/2;
        if(numbers[mid]==target) return true;
        if(hi<lo) return false;
        if(numbers[mid]>target){
          return BSHelper(numbers,mid-1,lo,target);
        }
        if(numbers[mid]<target){
          return BSHelper(numbers,hi,mid+1,target);
        }
      }


      bool BinarySearchRecursive(vector<int>& numbers, int target){
        int hi=numbers.size()-1;
        int lo=0;
        return BSHelper(numbers,hi,lo,target);
      }
}
