class Solution{
  public:
    void merge(vector<int>& numbers, int lo, int hi, int mid){
      vector<int> store(hi-lo+1);
      int i=lo;
      int j=mid+1;
      int k=0;
      while(i<=mid && j<=hi){
        if(numbers[i]<=numbers[j]){
          store[k++]=numbers[i++];
        }
        else{
          store[k++]=numbers[j++];
        }
      }
      while(i<=mid){
        temp[k++]=numbers[i++];
      }
      while(j<=hi){
        temp[k++]=numbers[j++];
      }
      for(k=0,i=lo;i<=hi;++i,++k){
        numbers[i]=store[k];
      }
      numbers.clear();
    }

    void mergeSortHelper(vector<int>& numbers,int lo,int hi){
      int mid;
      if(hi>lo){
        mid= lo+(hi-lo)/2;
        mergeSortHelper(numbers,lo,mid-1);
        mergeSortHelper(numbers,mid,hi);
        merge(numbers,lo,hi,mid);
      }
    }

    void mergeSort(vector<int>& numbers){
      mergeSortHelper(numbers,0,numbers.size()-1);
    }
}
