# https://programmers.co.kr/learn/courses/30/lessons/12928?language=python3
# 정확성  테스트
# 테스트 1 〉	통과 (0.04ms, 10.7MB)
# 테스트 2 〉	통과 (0.05ms, 10.6MB)
# 테스트 3 〉	통과 (0.14ms, 10.7MB)
# 테스트 4 〉	통과 (0.06ms, 10.7MB)
# 테스트 5 〉	통과 (0.12ms, 10.6MB)
# 테스트 6 〉	통과 (0.07ms, 10.6MB)
# 테스트 7 〉	통과 (0.18ms, 10.7MB)
# 테스트 8 〉	통과 (0.06ms, 10.7MB)
# 테스트 9 〉	통과 (0.14ms, 10.7MB)
# 테스트 10 〉	통과 (0.19ms, 10.7MB)
# 테스트 11 〉	통과 (0.13ms, 10.7MB)
# 테스트 12 〉	통과 (0.16ms, 10.7MB)
# 테스트 13 〉	통과 (0.05ms, 10.7MB)
# 테스트 14 〉	통과 (0.15ms, 10.7MB)
# 테스트 15 〉	통과 (0.15ms, 10.7MB)
# 테스트 16 〉	통과 (0.04ms, 10.6MB)
# 테스트 17 〉	통과 (0.19ms, 10.8MB)
# 채점 결과
# 정확성: 100.0
# 합계: 100.0 / 100.0

def solution(num):
    return sum([i for i in range(1, num+1) if num%i==0])
