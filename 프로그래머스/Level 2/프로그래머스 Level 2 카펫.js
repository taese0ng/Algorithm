
function solution(brown, yellow){
    let sq = brown + yellow;
    let row = 0; 
    let col = 0;
    for(let i = 3; i <= Math.sqrt(sq); i++){
        if(sq % i === 0){
            row = i;
            col = sq/i;
            if(brown === (row * 2) + (col * 2) - 4){
                return [col, row];
            }
        }
        
    }
}