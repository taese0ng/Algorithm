
function solution (arr) {
  var answer = 0;
  var search = []
  for (var i = 0; i < arr.length; i++) {
    for (var k = i + 1; k < arr.length; k++) {
        if (
            String(arr[i]).split("").sort().join("").trim() ===
            String(arr[k]).split("").sort().join("").trim()
        ) {
            if (Search(search, String(arr[i]).split("").sort().join("").trim())){
                answer++;
                search.push(String(arr[i]).split("").sort().join("").trim());
                
            }
        }
     }
     if (Search(search, String(arr[i]).split("").sort().join("").trim())) {
       answer++;
       search.push(String(arr[i]).split("").sort().join("").trim());
     }
}
  return answer;
}

function Search(search,num){
    if (search.indexOf(num) === -1) {
        return true
    }
    return false
}


console.log(solution([132,242,312,231,442,422]))