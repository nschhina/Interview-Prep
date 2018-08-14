#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

bool isPermutation(){
  string s;
  cin >> s;
  int inputlength=s.length();
  for(int i=0;i<inputlength && i<inputlength/2;i++){
    if(s[i]!=s[inputlength-i-1]) return false;
  }
  return true;

}

int main() {
    cout << isPermutation();
}
