class Node {
    constructor(value) {
        this.value = value;
        this.left = null;
        this.right = null;
    }
}

class BinarySearchTree {
    constructor() {
        this.root = null;
    }

    insert(data) {
        const newNode = new Node(data);
        if(this.root == null){
            this.root = newNode;
        }else{
            
            this.insertNode(this.root, newNode);
        }
    }

    insertNode(node, newNode) {
        if(newNode.value < node.value){
            if(node.left === null){
                node.left = newNode;
            }else{
                this.insertNode(node.left, newNode);
            }
        }else{
            if(node.right === null){
                node.right = newNode;
            }else{
                this.insertNode(node.right, newNode);
            }
        }
    }

    inOrderTraverse(node = this.root) {
        if(node != null){
            this.inOrderTraverse(node.left);
            console.log(node.value);
            this.inOrderTraverse(node.right);
        }
    }

    preOrderTraverse(node = this.root) {
        if(node != null){
            console.log(node.value);
            this.preOrderTraverse(node.left);
            this.preOrderTraverse(node.right);
        }
    }

    postOrderTraverse(node = this.root) {
        if(node != null){
            this.postOrderTraverse(node.left);
            this.postOrderTraverse(node.right);
            console.log(node.value);
        }
    }

    searchValue(key, node = this.root) {
        if(node === null || node.value === key) {
            return node;
        }

        if(key < node.value){
            return this.searchValue(key, node.left);
        }else{
            return this.searchValue(key, node.right);
        }
    }

} 

const bst = new BinarySearchTree();

bst.insert(5);
bst.insert(12);
bst.insert(7);
bst.insert(3);
bst.insert(8);
bst.postOrderTraverse();

const nodeSearched = bst.searchValue(55);
if(nodeSearched) {
    console.log("Value found " + nodeSearched.value);
}else{
    console.log("Value not found " + nodeSearched);
}