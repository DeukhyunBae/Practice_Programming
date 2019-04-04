#include <string>
#include <vector>

using namespace std;

int GCD(int n, int m)
{
    int c;
    while(m!=0)
    {
        c=n%m;
        n=m;
        m=c;
    }
    return n;
}
int LCM(int n,int m)
{
    return n*m / GCD(n,m);
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd = GCD(n,m);
    int lcm = LCM(n,m);
    answer.push_back(gcd);
    answer.push_back(lcm);
    return answer;
}