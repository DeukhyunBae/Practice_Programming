#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int num=B.size()-1;
    for(int i=0;i<=num;i++)
    {
        int temp=B[i];
        B[i]=B[num];
        B[num]=temp;
        num--;
    }
    for(int i=0;i<A.size();i++)
    {
        answer= answer+(A[i]*B[i]);
    }
    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    cout << "Hello Cpp" << endl;

    return answer;
}