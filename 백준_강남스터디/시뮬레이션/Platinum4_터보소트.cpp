//https://www.acmicpc.net/problem/3006
//채점 번호     	아이디	  문제 번호	결과	     메모리	시간     	언어	코드 길이	
//21624623	sangok1993	3006	맞았습니다!!	1616	960	C++14 / 수정	539

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    scanf("%d",&N);
    vector<int> s(N);
    for(int i=0; i<N; i++)
        scanf("%d",&s[i]);
    for(int i=0; i<N; i++){
        vector<int>::iterator it;
        if(i%2){
            it = find(s.begin(), s.end(), N-i/2);
            printf("%d\n",s.end()-it-1);
        }
        else{
            it = find(s.begin(), s.end(), 1+i/2);
            printf("%d\n", it-s.begin());
        }
        s.erase(it);
    }
    return 0;
}
