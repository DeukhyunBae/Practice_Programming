#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = s;
    int j=0;
    for(int i = 0;i<answer.size();i++)
    {
        if(answer[i] == ' ')
        {
            j=0;
            continue;
        }
        if(j%2 == 0)
        {
            if(answer[i]>='a' && answer[i]<='z')
                answer[i]= answer[i]-32;
        }
        else if(j%2 == 1)
        {
            if(answer[i]>='A'&&answer[i]<='Z')
                answer[i]=answer[i]+32;
        }
        j++;
    }
    return answer;
}