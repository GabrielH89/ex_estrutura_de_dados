class Queue {
    constructor() {
        this.items = [];
    }

    enqueue(data) {
        if(data === null || data === "") {
            console.log("Invalid value to add ")
        }else{
            this.items.push(data)
        }
    }

    dequeue() {
        if(this.isEmpty()) {
            console.log("Cannot delete cause queue is empty");
        }else{
            this.items.shift();
        }
    }

    isEmpty() {
        return this.items.length === 0;
    }

    size() {
        const queueSize = this.items.length;
        console.log("Queue size: " + queueSize);
    }

    showQueue() {
        if(this.isEmpty()) {
            console.log("Queue is empty");    
        }else{
            for(let c=0; c<this.items.length; c++) {
                console.log(this.items[c]);
            }
        }
    }
}

const q1 = new Queue();

q1.enqueue(4)
//q1.enqueue(34)
//q1.enqueue(10)
q1.dequeue()
q1.size()
q1.showQueue()