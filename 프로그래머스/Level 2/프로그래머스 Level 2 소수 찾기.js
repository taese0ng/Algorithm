var answer = 0
var visitNum = []
var answerList = []

function checkPrime(num){
    num = Number(num);
    if(num>1){
        for(let i = 2; i <= Math.sqrt(num); i++){
            if(num%i==0){
                return false
            }
        }
    }
    else {
        return false;
    }
    return true;
}

function init(numList){
    visitNum = []
    for(let i = 0; i<numList.length; i++){
        visitNum.push[false]
    }
}


function graph(numList, num){
    let temp = num;
    if(checkPrime(num) && answerList.indexOf(Number(num))==-1){
        answerList.push(Number(num))
    }
    for(let i = 0; i<numList.length; i++){
        if(visitNum[i]){
            continue;
        }else{
            num += numList[i];
            visitNum[i] = true;
            graph(numList, num) ;
            visitNum[i] = false;
            num = temp;
        }
    }
}


function solution(numbers){
    let numList = numbers.split("");
    let num = ""
    for(let i =0; i<numList.length; i++){
        init(numList);
        num = ""
        num += numList[i];
        visitNum[i] = true;
        graph(numList, num)
    }
    return answerList.length;
}