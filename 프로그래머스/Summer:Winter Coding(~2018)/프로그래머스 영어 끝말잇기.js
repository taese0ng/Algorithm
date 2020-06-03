function solution(n, words) {
    var answer = [];
    var tempList = [];
    let check = true;
    let cnt=0;
    for(let i=0; i+1<words.length; i++){
        tempList.push(words[i]);
        if(words[i][words[i].length-1] !== words[i+1][0]){
            let loser = (i+2) % n;
            if(loser === 0){
                loser = n;
            }
            answer.push(loser);
            if((i+2)%n !== 0){
                cnt = (i+2)/n + 1
            }
            else{
                cnt = (i+2)/n
            }
            answer.push(parseInt(cnt))
            check = false
            break;
        }
        else if(tempList.indexOf(words[i+1]) !== -1){
            let loser = (i+2) % n;
            if(loser === 0){
                loser = n;
            }
            answer.push(loser);
            if((i+2)%n !== 0){
                cnt = (i+2)/n + 1
            }
            else{
                cnt = (i+2)/n
            }
            answer.push(parseInt(cnt))
            check = false
            break;
        }
    }

    if(check){
        answer.push(0);
        answer.push(0);
    }

    return answer;
}

console.log(solution(3, ['tank', 'kick', 'know', 'wheel', 'land', 'dream', 'mother', 'robot', 'tank']))

console.log(solution(2, ['hello', 'one', 'even', 'never', 'now', 'world', 'draw']))