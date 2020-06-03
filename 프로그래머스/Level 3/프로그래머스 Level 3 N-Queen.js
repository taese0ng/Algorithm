var answer = 0;

function check(board, idx){
    let i = 0;
    while(i<idx){
        if(board[i] === board[idx] || Math.abs(board[i] - board[idx]) === idx-i){
            return false;
        }
        i++
    }
    return true;
}


function dfs(board, idx, n){
    if(check(board, idx)){
        if(idx === n-1){
            answer++
            return
        }
        else{
            for(let i=0; i<n; i++){
                board[idx+1] = i;
                dfs(board, idx+1, n);
            }
        }
    }
}

function solution(n){
    let board = []
    for(let i =0; i<n; i++){
        board.push(0)
    }

    dfs(board, -1, n);
    return answer;
}
