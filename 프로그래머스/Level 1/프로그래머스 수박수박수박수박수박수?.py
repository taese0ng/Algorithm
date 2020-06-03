def solution(n):
    answer = ''
    str1 = "수"
    str2 = "박"
    for i in range(n):
        if i%2 == 0:
            answer += str1
        else:
            answer += str2

    return answer

def solution1(n):
    answer=""
    if n%2==0:
        answer+="수박"*(n//2)
    else:
        answer+="수박"*(n//2)
        answer+="수"
    return answer

print(solution(4))