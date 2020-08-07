//https://www.acmicpc.net/problem/5582
//채점 번호 	아이디	      문제 번호	결과	     메모리 시간	 언어         코드길이
//21415897	sangok1993	5582	맞았습니다!!	1120	28	C++14 / 수정	723

#include <stdio.h>
#include <algorithm>
#include <cstring>

using namespace std;

int answer=0;
char s1[4001],s2[4001];

void match(int s1_s, int s2_s, int len){
        int cnt=0;
        for(int j=0; j<len; j++){
            if( s1[s1_s + j] != s2[s2_s + j] ){
                answer=max(answer, cnt);
                cnt=-1;
            }
            cnt++;
        }
        answer=max(answer,cnt);
}
int main(){
    scanf("%s %s",s1,s2);
    int s1_len=strlen(s1),s2_len=strlen(s2);
    for(int i=1; i<=s1_len; i++)
        match(max(0,i-s2_len), max(0,s2_len-i),min(i, s2_len));
    for(int i=1; i<=s2_len; i++)
        match(max(0,s1_len-i), max(0,i-s1_len),min(i, s1_len));
    printf("%d", answer);
    return 0;
}
