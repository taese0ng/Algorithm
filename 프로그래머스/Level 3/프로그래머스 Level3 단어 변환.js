var answer = 1000;
var List = []


function check(A,B){
    let count = 0;
    for(let i=0; i<A.length; i++){
        if(A[i] !== B[i]){
            count++;
        }
    }
    return count===1 ? true : false;
}


function dfs(begin, target, words, count){
    if(words.indexOf(target) == -1){
        answer = 0;
        return;
    }
    if(begin === target){
        if(answer > count){
            answer = count;
        }
        return;
    }
    if(List.length === words.length){
        return;
    }
    else{
        for(let i=0; i<words.length; i++){
            if(check(begin, words[i]) && List.indexOf(words[i])==-1){
                List.push(words[i]);
                dfs(words[i], target, words, count+1)
                List.pop();
            }
        }
    }
}



function solution(begin, target, words) {
    dfs(begin, target, words, 0)
    return answer;
}


// console.log(solution("hit","cog", ['hot','dot','dog','lot','log','cog']))

console.log(solution('hit', 'cog', ['hot','dot','dog','lot','log']))