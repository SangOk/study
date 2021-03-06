//https://www.acmicpc.net/problem/1405
//채점 번호	      아이디	  문제 번호	  결과	  메모리	시간  	언어     	코드 길이
//21645690	sangok1993	1405	맞았습니다!!	1112	28	C++14 / 수정	557

#include <stdio.h>

using namespace std;

double dir[4];
bool visited[29][29];
int dy[]={1,-1,0,0}, dx[]={0,0,1,-1};
double DFS(int x, int y,int move){
    if(visited[y][x]) return 0;
    if(move==0) return 1;
    double sum=0;
    visited[y][x]=true;
    for(int i=0; i<4; i++)
        sum+=dir[i]*DFS(x+dx[i],y+dy[i],move-1);
    visited[y][x]=false;
    return sum;
}
int main(){
    int N;

    scanf("%d%lf%lf%lf%lf",&N,dir,dir+1,dir+2,dir+3);
    for(int i=0; i<4; i++)
        dir[i]*=0.01;
    
    printf("%.9f",DFS(14,14,N));
    
    return 0;
}
