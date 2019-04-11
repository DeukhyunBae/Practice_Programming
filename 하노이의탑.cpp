#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;
#define MAX 100
int stack[MAX];        // 스택의 긴  통
int top;            // 스택의 상단

vector<int> move(int from , int to){
    vector<int> result;
    result.push_back(from);
    result.push_back(to);
    cout<<result[0]<<"-"<<result[1]<<endl;
    return result;
}

void init_stack(void){
    top = -1;
}

int push(int t){

    if (top >= MAX - 1){
        printf("\n    Stack overflow.");
        return -1;
    }

    stack[++top] = t;
    return t;
}

int pop(void){
    if (top < 0){
        printf("\n   Stack underflow.");
        return -1;
    }
    return stack[top--];
}

int is_stack_empty(){
    return (top > -1) ? 0 : 1;
}


vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    int from =1;
    int by =2;
    int to=3;
    init_stack();
    while(1)
    {
        while(n>1)
        {
             push(to);
             push(by);
             push(from);
             push(n);
             n--;
             push(to);
             to=by;
             by=pop();
        }   
        answer.push_back(move(from, to));
        if(!is_stack_empty())
        {
            n=pop();
            from=pop();
            by=pop();
            to=pop();
            answer.push_back(move(from,to));
            n--;
            push(from);
            from=by;
            by=pop();
        }
        else
        {
            break;
        }
        
    
    }
    //hanoi(answer, n, 1,2,3);
    //cout<<answer[0][0]<<endl;
    return answer;
}