
const binarySearch = function(array, target) {
    let begin = 0;
    let end = array.length - 1;
    let found = false;

    while(begin <= end) {
        const middle = (begin + end) / 2;
        if(array[middle] === target) {
            found = true;
            console.log("Element " + target + " found in position " + middle);
            break;
        }else if(array[middle] <= target) {
            end = middle + 1;
        }else{
            begin = middle - 1;
        }
    }
    if(!found) {
        console.log("Not found");
    }
} 

const array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const target = 99;

const result = binarySearch(array, target);
console.log(result)