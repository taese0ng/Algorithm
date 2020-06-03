function solution(baseball){
    var answer = []

    for (var i=123; i<987; i++){
        const number = String(i)
        if (
            number.charAt(0) == number.charAt(1) ||
            number.charAt(1) == number.charAt(2) ||
            number.charAt(2) == number.charAt(0) ||
            number.indexOf('0') > 0
        )
            continue;
        
        var check = true

        for (var j=0; j<baseball.length; j++){
            var countStrike = 0
            for(var k=0; k<3; k++){
                if (number.charAt(k) === String(baseball[j][0]).charAt(k)){
                    countStrike++
                }
            }

            if(countStrike !== baseball[j][1]){
                check = false
                break
            }

            var coundBall = 0
            for(var b=0; b<3; b++){
                if (number.indexOf(String(baseball[j][0]).charAt(b)) >= 0){
                    coundBall++
                }
            }

            if(coundBall - countStrike !== baseball[j][2]){
                check = false
                break
            }
        }
        if (check) answer.push(i)
    }
    return answer.length
}