function solution(triangle) {
    var answer = 0;
    
    let leftParent = 0;
    let rightParent = 0;
    triangle.forEach((inArr, rowIndex) => {
        if(rowIndex === 0) return;
        inArr.forEach((_, columnIndex) => {
            if(columnIndex === 0){
                triangle[rowIndex][columnIndex] += triangle[rowIndex-1][columnIndex];
            }
            else if(rowIndex === columnIndex){
                triangle[rowIndex][columnIndex] += triangle[rowIndex-1][columnIndex-1];
            }
            else{
                leftParent = triangle[rowIndex-1][columnIndex-1];
                rightParent = triangle[rowIndex-1][columnIndex];
                triangle[rowIndex][columnIndex] += (leftParent > rightParent) ? leftParent : rightParent;
            }
        });
    });
    answer = Math.max(...triangle[triangle.length-1])
    return answer;
}

console.log(solution([[7],[3,8],[8,1,0],[2,7,4,4],[4,5,2,6,5]]))