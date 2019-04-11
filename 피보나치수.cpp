#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> arr;
    arr.push_back(0);            
    arr.push_back(1);            
    for(int i=2;i<=n;i++)
    {
        arr.push_back(arr[i-2]%1234567+arr[i-1]%1234567);
    }
    return arr[arr.size()-1]%1234567;
}