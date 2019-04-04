#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = ""; 
    int totalday = 0;
    for(int i =1 ; i<a;i++)
    {
        if( i==1 || i==3 || i==5 || i==7||i==8||i==10||i==12)
            totalday += 31;
        else if(i ==2 )
            totalday+=29;
        else
            totalday += 30;
    }
    totalday+=b;
    if(totalday%7 == 1 )
        answer="FRI";
    else if(totalday%7 ==2)
        answer="SAT";
    else if(totalday%7 ==3)
        answer="SUN";
    else if(totalday%7 ==4)
        answer="MON";
    else if(totalday%7 ==5)
        answer="TUE";
    else if(totalday%7 ==6)
        answer="WED";
    else if(totalday%7 ==0)
        answer="THU";
    
        
        
        
    
    return answer;
}