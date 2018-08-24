// Complexity Space- O(1) Time- AVG= O(N*log N) Worst= N*N
class Solution{
  public:
    void Partition(vector<int> numbers, int lo, int hi){
      int index=numbers[hi];
      for(int i=0;i<hi;i++){
        if(numbers[i]<=index){
          swap(numbers[i],numbers[index]);
          index++;
        }
      }
      swap(numbers[index],numbers[hi]);
      return index;
    }
    void quickSortHelper(vector<int> numbers,int lo, int hi){
      int partitionIndex=Partition(numbers,lo,hi);
      quickSortHelper(numbers,lo,partitionIndex-1);
      quickSortHelper(numbers,partitionIndex,hi);
    }
    void quickSort(vector<int>& numbers){
      quickSortHelper(numbers,0,numbers.size()-1);
    }

}
