def Combination(ret, copy_arr, i, j):
    for q in range(len(ret)):
        for w in range(len(ret)):
            copy_arr[q+i][w+j] += ret[q][w]
    return copy_arr

def Rotation(key):
    N = len(key)
    ret = [[0] * N for _ in range(N)]

    for i in range(N):
        for j in range(N):
            ret[j][N - 1 - i] = key[i][j]
    return ret

def array_make(key, lock):
    N = len(lock) + (len(key)-1) * 2
    arr = [[0 for j in range(N)] for i in range(N)]
    for i in range(len(lock)):
        for j in range(len(lock[i])):
            arr[len(key)-1+i][len(key)-1+j] = lock[i][j]
    return arr

def Examin(arr, key, lock):
    ans = True
    for i in range(len(lock)):
        for j in range(len(lock[i])):
            if arr[len(key)-1+i][len(key)-1+j] == 0 or arr[len(key)-1+i][len(key)-1+j] == 2 :
                ans = False
                break
        if not ans:
            break
    return ans

def solution(key, lock):
    import copy
    answer = True
    arr = array_make(key, lock)
    print(arr)
    N = len(lock) + len(key) - 1
    for i in range(N):
        for j in range(N):
            ret = copy.deepcopy(key)
            for k in range(4):
                ret = Rotation(ret)
                copy_arr = copy.deepcopy(arr)
                submit_arr = Combination(ret, copy_arr, i, j)
                answer = Examin(submit_arr, key, lock)
                if answer:
                    return answer
    return answer


if __name__ == '__main__':
    key = [[0, 0, 0], [1, 0, 0], [0, 1, 1]]
    lock = [[1, 1, 1], [1, 1, 0], [1, 0, 1]]
    print(solution(key, lock))