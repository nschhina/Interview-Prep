#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> split_string(string);

// Complete the maxSubarray function below.
int maxSub(vector<int> arr){
    vector<int> memo(arr.size()+1);
    memo[0]=arr[0];
    int sumsubarray = memo[0];
    for(int i=1;i<arr.size();i++){
        memo[i]=max(arr[i],arr[i]+memo[i-1]);
        sumsubarray=max(sumsubarray,memo[i]);
    }
    return sumsubarray;
}

vector<int> maxSubarray(vector<int> arr) {
    int sumsubsequences=arr[0];
    int max=arr[0];
    for(int i=1;i<arr.size();i++){
        if(max<arr[i])max=arr[i];
        if(sumsubsequences+arr[i]>sumsubsequences)sumsubsequences=sumsubsequences+arr[i];
    }
    if(max>sumsubsequences)sumsubsequences=max;
    int sumsubarray= maxSub(arr);
    vector<int> result(2);
    result[1]=sumsubsequences;
    result[0]=sumsubarray;

    return result;
}
