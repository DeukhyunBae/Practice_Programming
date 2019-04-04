#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int count1=0, count2=0, count3=0;
    int cir_1=0,cir_2=0,cir_3=0;
    vector<int> ran1= {1,2,3,4,5};
    vector<int> ran2= {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> ran3= {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for(int i=0;i<answers.size();i++)
    {
        if(answers[i]==ran1[i%ran1.size()])
            count1++;
        if(answers[i]==ran2[i%ran2.size()])
            count2++;
        if(answers[i]==ran3[i%ran3.size()])
            count3++;
    }
    if(count1> count2)
    {
        if(count1>count3)
            answer.push_back(1);
        else if(count1<count3)
            answer.push_back(3);
        else    
        {
            answer.push_back(1);
            answer.push_back(3);
        }
    }
    else if(count1< count2)
    {
        if(count2>count3)
            answer.push_back(2);
        else if(count2<count3)
            answer.push_back(3);
        else    
        {
            answer.push_back(2);
            answer.push_back(3);
        }
    }
    else
    {
        if(count1>count3)
        {   
            answer.push_back(1);
            answer.push_back(2);
        }
        else if(count1<count3)
            answer.push_back(3);
        else    
        {
            answer.push_back(1);
            answer.push_back(2);
            answer.push_back(3);
        }
    }

    return answer;
}