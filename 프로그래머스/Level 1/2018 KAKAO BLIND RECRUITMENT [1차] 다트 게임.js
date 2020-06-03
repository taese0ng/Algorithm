function solution(dartResult) {
    var answer = 0;
    let numList = [];
    
    for(let i=0; i<dartResult.length; i++){
        switch (dartResult[i]){
            case 'S':
                break;
            case 'D':
                numList[numList.length-1] = Math.pow(numList[numList.length-1], 2);
                break;
            case 'T':
                numList[numList.length-1] = Math.pow(numList[numList.length-1], 3);
                break;
            case "*":
                if(numList.length > 1){
                    numList[numList.length-1] *= 2;
                    numList[numList.length-2] *= 2;
                }
                else{
                    numList[numList.length-1] *= 2;
                }
                break;
            case "#":
                numList[numList.length-1] *= -1;
                break;
            default:
                if((Number(dartResult[i])===1) && (Number(dartResult[i+1])===0)){
                    i++;
                    numList.push(10);
                }
                else{
                    numList.push(Number(dartResult[i]))
                }
                break;
        }
    }
    
    answer = numList.reduce((a, b) => a + b, 0);

    return answer;
}