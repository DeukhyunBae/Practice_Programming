#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    cout << "Hello Cpp" << endl;
    for(int i = 0 ;i<arr.size();i++)
    {
                    
        answer.push_back(arr[i]);
        if(arr[i] == arr[i+1])
        {
            for(int j=i; arr[i]== arr[j] ; j++)
            {
                i=j;
            }
        }
        
    }
    return answer;
}