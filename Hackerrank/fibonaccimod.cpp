#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

vector<string> split_string(string);

// Complete the fibonacciModified function below.
int fibonacciModified(int t1, int t2, int n) {
    unordered_map<int,long long> memo;
    memo[1]=t1;
    memo[2]=t2;
    for(int i=3;i<=n;i++){
        memo[i]=(memo[i-1]*memo[i-1])+memo[i-2];
    }
    return memo[n];

}
