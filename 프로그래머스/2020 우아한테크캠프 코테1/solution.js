function solution(arr){
    var answer = 0;
    while (!(arr.length ===1 && arr[0]===1)){
        let tempArr = []
        let temp = arr[0];
        let count = 1;
        if (arr.length === 1) {
            tempArr.push(count);
        }
        for (let i = 1; i < arr.length; i++) {
            if (temp === arr[i]) {
                count++;
            } else {
                tempArr.push(count);
                count = 1;
                temp = arr[i];
            }
            if (i + 1 === arr.length) {
                tempArr.push(count);
            }
        }

        arr = tempArr;
        answer++
    }
    return answer
}

function checkArr(arr){
    if(arr.length === 1 && arr[0] === 1 ){
        return true
    }
    else{
        return false
    }
}


console.log(
  solution([
    1,
    1,
    1,
    2,
    3,
    3,
    3,
    2,
    2,
    2,
    4,
    2,
    2,
    2,
    1,
    1,
    2,
    5,
    6,
    3,
    3,
    5,
    5,
    5,
    3,
    6,
    7,
  ])
);