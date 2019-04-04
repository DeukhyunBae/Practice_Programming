#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
     vector<int> v;

    for (int i = 0; i <= n; i++) 
        v.push_back(i);

    for(int i=2;i<=n;i++)
    {
        for(int j=i*2;j<=n;j+=i)
        {
            if(v[j]==0)
                continue;
            v[j]=0;
        }
        if(v[i]!=0)
        {
            answer++;
        }
}
    return answer;
}