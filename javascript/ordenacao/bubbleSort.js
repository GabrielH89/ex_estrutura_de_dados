
function bubbleSort(array) {
  const n = array.length - 1;
  for(let a=0; a<n; a++){
    for(let b=0; b<n-a; b++){
      if(array[b] > array[b+1]){
        [array[b], array[b+1]] = [array[b+1], array[b]]
      }
    }
  }
  return array;
}



const unorderedArray = [3, 5, 2, 1, 4];
const orderedArray = bubbleSort(unorderedArray);
console.log("Ordered array: " + orderedArray); 