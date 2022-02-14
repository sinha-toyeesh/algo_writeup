#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int, int> m;
    vector<int> temp_ans;

    for (int i = 0; i < nums.size(); i++)
        m[nums[i]] = i; 

    for (int i = 0; i < nums.size(); i++)
    {

        if ((m.count(target - nums[i]) > 0) && (m[target - nums[i]] != i))
        {
            temp_ans.push_back(i);
            temp_ans.push_back(m[target - nums[i]]);
            return temp_ans;
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

    // twoSum(new_vec,13);
    vector<int> vec_ans = twoSum(new_vec,6);

    for(auto x: vec_ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}