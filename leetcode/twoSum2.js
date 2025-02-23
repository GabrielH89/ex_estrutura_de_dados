
const nums = [2, 11, 15, 7];
const target = 22

function twoSum(nums, target) {
    const map = new Map();

    for(let c=0; c<nums.length; c++) {
        const complement = target - nums[c]
        if(map.has(complement)) {
            return [map.get(complement), c];
        }
        map.set(nums[c], c);
    }
    return [];
}

const result = twoSum(nums, target);
console.log(result);


