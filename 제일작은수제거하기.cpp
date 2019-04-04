#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = 99999;
    int index = 0;
    for(int i = 0 ;i<arr.size();i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            index= i;
        } 
    }
    arr.erase(arr.begin()+index);
    if(arr.size() == 0)
        answer.push_back(-1);
    else
        answer = arr;
    return answer;
}