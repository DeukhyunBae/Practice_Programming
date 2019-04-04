#include <string>
#include <vector>
#include <iostream>
using namespace std;

string itos(int N)
{
    string answer = "";
    if(N==0)
    {
        answer="0";
        return answer;
    }
    while(N > 0)
    {
        if(N%10 == 0)
            answer = answer+"0";
        else if(N%10 == 1)
            answer = answer+"1";
        else if(N%10 == 2)
            answer = answer+"2";
        else if(N%10 == 3)
            answer = answer+"3";
        else if(N%10 == 4)
            answer = answer+"4";
        else if(N%10 == 5)
            answer = answer+"5";
        else if(N%10 == 6)
            answer = answer+"6";
        else if(N%10 == 7)
            answer = answer+"7";
        else if(N%10 == 8)
            answer = answer+"8";
        else if(N%10 == 9)
            answer = answer+"9";
        
        N=N/10;
    }
    string str = "";
    for(int i = answer.length()-1; i>=0 ;i--)
    {
        str = str+answer[i];
    }
    return str;
}
string solution(vector<string> seoul) {
    string answer = "";
    for(int i = 0 ; i<seoul.size(`); i++)
    {
        if(seoul[i] == "Kim" )
        {
            string str = itos(i);
            answer = "김서방은 "+str+"에 있다";
            break;
        }
            
    }
    return answer;
}