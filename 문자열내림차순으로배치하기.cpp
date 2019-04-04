#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer =s;
    for(int i = answer.size()-1; i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(answer.at(j)<answer.at(j+1))
            {
                char temp = answer.at(j);
                answer.at(j)=answer.at(j+1);
                answer.at(j+1)=temp;
            }
        }
    }
    
    return answer;
}