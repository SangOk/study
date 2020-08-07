//https://www.acmicpc.net/problem/1507
//채점 번호   	아이디	   문제 번호	  결과	  메모리	시간	언어	     코드 길이
//21165811	sangok1993	1507	맞았습니다!!	1112	0	C++14 / 수정	656

#include <stdio.h>

using namespace std;
int bridge[21][21], N;

int go(){
    int via, answer=0, k;
    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++){
            for(k=1; k<N+1; k++)
                if(k!=i and k!=j){
                    via=bridge[i][k]+bridge[k][j];
                    if(via<bridge[i][j]) return -1;
                    if(via==bridge[i][j]) break;
                }
            if(k==N+1) answer += bridge[i][j];
        }
    return answer;
}
int main(){
    scanf("%d", &N);
    
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
            scanf("%d",bridge[i]+j);
    
    printf("%d",go());
    return 0;
}

