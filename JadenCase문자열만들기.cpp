#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool first = true;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)==' ')
        {
            first=true;
        }
        else if(first == true)
        {
            if(s.at(i)>='a' && s.at(i)<='z')
                s.at(i)=s.at(i)-32;
            first=false;
        }
        else if(first==false)
        {
            if(s.at(i)>='A' && s.at(i)<='Z')
                s.at(i)=s.at(i)+32;
            
        }
    }
    answer=s;
    return answer;
}