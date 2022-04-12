/*
 * @lc app=leetcode id=682 lang=cpp
 *
 * [682] Baseball Game
 */

// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        stack<int> ms;

        int v1 = 0,v2=0;

        for (int i = 0; i < ops.size(); i++)
        {
            if(ops[i] == "C")
            {
                ms.pop();
            }
            else if (ops[i] == "D")
            {
                v1 = ms.pop();
                v2 = ms.top();
                ms.push(v1);
                ms.push(v1+v2);
            }
            else if (ops[i] == "+")
            {
                v1 = ms.top();
                ms.push(v1 * 2);
            }
            else
            {
                ms.push(stoi(ops[i]));
            }
        }

        int ss = 0;

        for(int i = 0; i < ms.size(); i++)
        {
            ss += ms.pop();
        }



    }
};
// @lc code=end

