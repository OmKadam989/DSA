#include<iostream>
#include<vector>
using namespace std;

void permutation(string s, int size,int index, string temp)
{
    if(temp.size()!=0)
    {
        cout<<temp<<" ";
    }
    if(index ==size)
    {
        return;
    }
        if(temp.size()==0)
        permutation(s,size,index+1, temp);
        
        temp += s[index];
        permutation(s,size,index+1,temp);
    
}

int main() {
    string s ="ipl";
    int size= s.size();
    string temp="";
    permutation(s,size,0,temp);
}

#include<iostream>
#include<vector>
using namespace std;

void permutation(string s, int size,int index, string temp)
{
    if(temp.size()!=0)
    {
        cout<<temp<<" ";
    }
    if(index ==size)
    {
        return;
    }
    
        if(temp.size()==0)
        {
        permutation(s,size,index+1, temp);
        permutation(s,size,index+1,temp+s[index]);
        return;
        }
        
        temp += s[index];
        permutation(s,size,index+1,temp);
    
}

int main() {
    string s ="ipl";
    int size= s.size();
    string temp="";
    permutation(s,size,0,temp);
}
class Solution {
public:
    void fun(vector<int> &candidates, vector<vector<int>> &ans, vector<int> temp, int target, int sum, int index)
    {
        if (index == candidates.size()) {
            if (sum == target) {
                ans.push_back(temp);
            }
            return;
        }

        // Not take
        fun(candidates, ans, temp, target, sum, index + 1);

        // Take
        if (sum + candidates[index] <= target) {
            temp.push_back(candidates[index]);
            fun(candidates, ans, temp, target, sum + candidates[index], index);  // Not index+1, since we can reuse
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        fun(candidates, ans, temp, target, 0, 0);
        return ans;
    }
};
