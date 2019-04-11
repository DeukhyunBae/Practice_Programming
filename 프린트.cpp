#include <string>
#include <vector>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    bool check = true;
    while(check!= false)
    {
        bool out = true;
        for(int i =1 ;i<priorities.size();i++)
        {
            if(priorities[0]<priorities[i])
            {
                out = false;
                break;
            }
            
        }
        if(out == true)
            {
                priorities.erase(priorities.begin());
                location--;
                answer++;
                if(location == -1)
                {
                    check=false;
                }
            }
            else
            {
                int temp = priorities.front();
                priorities.erase(priorities.begin());
                priorities.push_back(temp);
                location--;
                if(location == -1)
                    location = priorities.size()-1;
            }
    }
    return answer;
}