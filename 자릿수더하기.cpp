#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    cout << "Hello Cpp" << endl;
    while( n>0)
    {
        answer = answer + (n%10);
        n = n/10;
    }
    return answer;
}