#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int n) {
    string answer = "";
    string temp = "";
    while(n!= 0 )
    {
        if(n%3 == 0)
        {
            temp.push_back('4');
            n=n/3-1;
        }
        else if(n%3 == 1)
        {
            temp.push_back('1');
            n/=3;
        }
        else if(n%3==2)
        {
            temp.push_back('2');
            n=n/3;
        }
    }
    for(int i=temp.size()-1;i>=0;i--)
    {
        answer.push_back(temp.at(i));
    }
    return answer;
}