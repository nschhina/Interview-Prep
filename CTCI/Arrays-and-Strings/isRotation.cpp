#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

bool isRotation( std::string s1, std::string s2 ) {
	size_t len1 = s1.length();
	size_t len2 = s2.length();
	if ( len1 == 0 || len1 != len2 ) {
		return false;
	}
	std::string concatS1 = s1 + s1;
	if ( concatS1.find(s2) != std::string::npos ) {
		return true;
	} else {
		return false;
	}
}


int main() {
    cout << isRotation();
}
