#include <string>
#include <vector>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<double> failure;
    
    // 1. fail % 
    for(int i=0;i<N; i++)
    { 
        int challenge =0;
        int fail=0;
        for(int j=0;j<stages.size();j++)
        {
            if(stages[j]>=(i+1))
                challenge++;
            
            if(stages[j]<=(i+1))
            {
                fail++;
                stages.erase(stages.begin()+j);
                j--;
            }
        }
        if(challenge == 0)
            failure.push_back(0);
        else
        {
            double result = (double)fail/(double)challenge;
            failure.push_back(result);
        }
    }
    //2. sorting
    for(int i=0;i<failure.size();i++)
    {
        double max = -1;
        int maxloca= 0;
        for(int j=0;j<failure.size();j++)
        {
            
            if(failure[j]>max)
            {
                max=failure[j];
                maxloca=j;
                
            }
        }
         // 3. input answer
        answer.push_back(maxloca+1);
        failure[maxloca]=-2;
    }
    
    return answer;
}