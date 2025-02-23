
function findMissingNumber(array) {
    let n = array.length + 1;

    for(let a=1; a<=n; a++) {
        let found = false;
        for(let b=0; b<array.length; b++) {
            if(array[b] === a) {
                found = true;
                break;
            }
        }

        if (!found)
            return a;
    }
    return -1;
}

const array = [1, 2, 4, 5, 6];
const result = findMissingNumber(array);
console.log("Missing number: " + result);


