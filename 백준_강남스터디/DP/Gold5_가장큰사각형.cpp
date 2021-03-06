//https://www.acmicpc.net/problem/1915
//채점 번호   	아이디   	문제 번호	결과	      메모리	시간	언어	    코드 길이	
//21059526	sangok1993	1915	맞았습니다!!	4904	48	C++14 / 수정	724

#include <stdio.h>

using namespace std;
int max(int a, int b){
    return a>b?a:b;
}
int min3(int a, int b, int c){
    return a<b?(a<c?a:c):(b<c?b:c);
}
int area(int a){
    return a*a;
}
int main(){
    int N,M,dp[1001][1001];
    char temp;
    scanf("%d %d\n",&N,&M);
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%c",&temp);
            dp[i][j]=temp-'0';
        }
        scanf("%c",&temp);
    }
    for(int i=1;i<N;i++)
        for(int j=1;j<M;j++)
            if(dp[i][j]==1) dp[i][j]=min3(dp[i-1][j],dp[i-1][j-1],dp[i][j-1])+1;
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            dp[0][0]=max(dp[0][0],dp[i][j]);
    printf("%d\n",area(dp[0][0]));
    return 0;
}
