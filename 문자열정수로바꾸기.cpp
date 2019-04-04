#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int len = s.length();
    int num = 1;
    if(s[0] == '+' || s[0] == '-')
    {
        len=len-1;
        for(int i = len; i>0; i--)
        {
            switch (s[i])
            {
                case '0':
                    answer = answer + (0*num);
                    break;
                case '1':
                    answer = answer + (1*num);
                    break;
                case '2':
                    answer = answer + (2*num);
                    break;
                case '3':
                    answer = answer + (3*num);
                    break;
                case '4':
                    answer = answer + (4*num);
                    break;
                case '5':
                    answer = answer + (5*num);
                    break;
                case '6':
                    answer = answer + (6*num);
                    break;
                case '7':
                    answer = answer + (7*num);
                    break;
                case '8':
                    answer = answer + (8*num);
                    break;
                case '9':
                    answer = answer + (9*num);
                    break;
                default:
                    break;
            }
        num = num*10;
        }
        if(s[0]=='-')
            answer = answer *(-1);
    }
    else
    {
        len=len-1;
        for(int i = len; i>=0; i--){
            switch (s[i])
            {
                case '0':
                    answer = answer + (0*num);
                    break;
                case '1':
                    answer = answer + (1*num);
                    break;
                case '2':
                    answer = answer + (2*num);
                    break;
                case '3':
                    answer = answer + (3*num);
                    break;
                case '4':
                    answer = answer + (4*num);
                    break;
                case '5':
                    answer = answer + (5*num);
                    break;
                case '6':
                    answer = answer + (6*num);
                    break;
                case '7':
                    answer = answer + (7*num);
                    break;
                case '8':
                    answer = answer + (8*num);
                    break;
                case '9':
                    answer = answer + (9*num);
                    break;
                default:
                    break;
            }
        num = num*10;
    }    
    }
    return answer;
}