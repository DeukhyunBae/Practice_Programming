#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// skill_trees_len은 skill_trees의 길이입니다.
int solution(char* skill, char* skill_trees[], size_t skill_trees_len) {
    int answer = 0;
    for(int i = 0 ;i<skill_trees_len;i++)
    {
        bool check = false;
        int num=0;
        for(int j=0;j<strlen(skill_trees[i]) || num!=strlen(skill);j++)
        {
            if(skill_trees[i][j]==skill[num])
            {
                num++;
            }
            
        }
        if(num == strlen(skill))
            answer++;
    }
    return answer;
}