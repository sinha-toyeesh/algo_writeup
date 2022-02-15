#include <bits/stdc++.h>

using namespace std;

vector<int> singleNumber(vector<int>& nums) {
        
    unordered_map<int, int> m;
    vector<int> temp_ans;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
        
    for(auto x : m)
    {
        if(x.second == 1)
        {
            temp_ans.push_back(x.first);
        }
    }

    return temp_ans;

}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n,temp_num;
    cin>>n;
    vector<int> new_vec;

    for(int i=0;i<n;i++)
    {
        cin>>temp_num;
        new_vec.push_back(temp_num);
    }

    vector<int> temp_print = singleNumber(new_vec);
    for(auto x: temp_print)
    {
        cout<<x<<endl;
    }

}