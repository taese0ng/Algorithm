
var List = []
function check(num){

    if(num === 0 || num === 1){
        return false;
    }
    for(let i=2; i<=Math.sqrt(num); i++){
        if(num % i===0){
            return false;
        }
    }
    return true;
}

function dfs(nums,idx, cnt, sum)
{  
    if(cnt === 3){
        if(check(sum)){
            List.push(sum)
            console.log(sum)
        }
    }else{
        for(let i=idx; i<nums.length; i++){
            sum += nums[i]
            dfs(nums,i+1, cnt+1, sum)
            sum -= nums[i]
        }
    }
}


function solution(nums) {
    dfs(nums, 0, 0, 0)
    
    return List.length;
}