function solution(board)
{
    var answer = 0;
    let row = board.length;
    let column = board[0].length;
    let max = 0;
    
    if(row < 2 || column < 2){
        for(let i =0; i<row; i++){
            for(let j = 0; j<column; j++){
                if(board[i][j] === 1){
                    answer = board[i][j];
                    return answer;
                }
            }
        }
    }
    else{
        for(let i=1; i<row; i++){
            for(let j=1; j<column; j++){
                if(board[i][j] === 1){
                    board[i][j] = Math.min(board[i-1][j], board[i][j-1], board[i-1][j-1]) + 1;
                    if(max < board[i][j]){
                        max = board[i][j];
                    }
                }
            }
        }
    }
    return Math.pow(max,2);
}