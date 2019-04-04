#include <vector>
#include <iostream>
using namespace std;

long long solution(int N) {
    long long answer = 0;
   vector<int> v;

    for (int i = 0; i <= N; i++) 
        v.push_back(i);

    for(int i=2;i<=N;i++)
    {
        for(int j=i*2;j<=N;j+=i)
        {
            if(v[j]==0)
                continue;
            v[j]=0;
        }
        if(v[i]!=0)
        {
            answer+=v[i];
        }
}
    return answer;
}