function solution(citations) {
    var answer = 0;
    let temp = citations.sort((a,b) => b - a);
    const len = citations.length;
    while (answer < len){
        if(answer+1 <= temp[answer]){
            answer++;
        }
        else{
            break;
        }
    }
    return answer;
}

console.log(solution([3,0,6,1,5]))