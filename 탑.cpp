#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    vector<int> temp;
    
    for(int i = heights.size()-1;i>=0;i--)
    {
        int j;
        bool check = true;
        for(j=i-1;j>=0;j--)
        {
            if(heights[i]< heights[j])
            {
                temp.push_back(j+1);
                check = false;
                break;
            }
        }
        if(j==-1 && check == true)
            temp.push_back(0);
    }
    for(int i=temp.size()-1;i>=0;i--)
    {
        answer.push_back(temp[i]);
    }
    return answer;
}