def solution(s):
    answer = []
    s = list(s)
    index = 0
    while index != len(s):
        answer.append(s[index])
        index += 1
        if len(answer) > 1:
            if answer[-2] == answer[-1]:
                answer.pop()
                answer.pop()
    if len(answer) == 0:
        return 1
    else:
        return 0


if __name__ == '__main__':
    s = 'baabaa'
    print(solution(s))