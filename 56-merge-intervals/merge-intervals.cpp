class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    //    int s=intervals.size();
    //     if (intervals.empty())
    //         return {};
    //     vector<vector<int>>merged;
    //     vector<int>temp;

    //     for(int i=0;i<s-1;)
    //     {
    //         if(intervals[i][1]>intervals[i+1][0])
    //            {
    //             temp.push_back(intervals[i][0]);
    //             temp.push_back(intervals[i+1][1]);
    //             merged.push_back(temp);
    //             temp.clear();
    //             i+=2;
    //            }
    //            else
    //            {
    //             temp.push_back(intervals[i][0]);
    //             temp.push_back(intervals[i][1]);
    //             merged.push_back(temp);
    //             temp.clear();
    //             i++;
                
    //            }
    //     }
    //     return merged; 


    if (intervals.empty())
            return {};
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        vector<int> current_interval = intervals[0];

        for (int i = 1; i < intervals.size(); ++i) 
        {
            if (intervals[i][0] <= current_interval[1]) 
            {
                current_interval[1] = max(current_interval[1], intervals[i][1]);
            } else 
            {
                merged.push_back(current_interval);
                current_interval = intervals[i];
            }
        }
        merged.push_back(current_interval);//adding last interval

        return merged;
        
    }
};