def extract_one(num):
    oneNum = 0
    while num>0:
        if num % 2 == 1:
            oneNum += 1
        num = num // 2
    return oneNum

def solution(n):
    answer = n+1
    nOne = extract_one(n)
    while nOne != extract_one(answer):
        answer += 1
    return answer


if __name__ == '__main__':
    n = 78
    print(solution(n))