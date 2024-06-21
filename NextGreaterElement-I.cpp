#include<bits/stdc++.h>
using namespace std;
/*
    First Time wrote Code from Tabnine.
    Good Copilot :)
*/

vector<int> nextGreaterElement(vector<int>& nums) {
    stack<int> s;
    vector<int> result(nums.size(), -1);
    
    for(int i=nums.size()-1; i>=0; i--) {
        while(!s.empty() && s.top() <= nums[i]) {
            s.pop();
        }
        result[i] = s.empty()? -1 : s.top();
        /*
            It's basically a simple method to handle the case of If and Else using the Question Mark Operator
            if(s.empty()){
                result[i] = -1;
            }else{
                result[i] = s.top();
            }
        */
        s.push(nums[i]);
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<int> result = nextGreaterElement(arr);
    for(int i=0; i<n; i++) {
        cout << result[i] << " ";
    }
    return 0;
}