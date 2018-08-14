#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

string compressedString(){
  string s;
  cin >> s;
  int inputlength=s.length();
  char cache;
  string compressed;
  int currlength=0;
  for(int i=0;i<inputlength;i++){
    if(s[i]==cache){
      currlength+=1;
      if(i==inputlength-1){
      compressed+=cache;
      compressed+=to_string(currlength);
      }
    }
    else{
     if(currlength!=0){
      compressed+=cache;
      compressed+=to_string(currlength);
    } 
      cache=s[i];
      currlength=1;
    }
  }
  cout << compressed << endl;
  if (compressed.length()>inputlength) return s;
  return compressed;

}

int main() {
    cout << compressedString();
}
