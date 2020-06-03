function solution(s){
    var answer = [];
    let tempArr = s.split(/{|}/)
    while(tempArr.indexOf("") != -1){
        tempArr.splice(tempArr.indexOf(""),1);
    }
    while(tempArr.indexOf(",") != -1){
        tempArr.splice(tempArr.indexOf(","),1)
    }

    tempArr.sort((a,b) => a.length - b.length)

    for(let i = 0; i < tempArr.length; i++){
        let temp = tempArr[i].split(/,/);
        removePrevElement(answer, temp)
        answer.push(parseInt(temp[0]))
    }
    return answer;
}

function removePrevElement(answer, temp){
    for(let i = 0; i<answer.length; i++ ){
        if(temp.indexOf(String(answer[i])) != -1){
            temp.splice(temp.indexOf(String(answer[i])), 1)
        }
    }
    return temp;
}


console.log(solution("{{2},{2,1},{2,1,3},{2,1,3,4}}"))