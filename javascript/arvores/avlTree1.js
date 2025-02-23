class Node {
    constructor(value) {
        this.value = value;
        this.left = null;
        this.right = null;
        this.height = 1;
    }
}

class AVLTree {
    constructor() {
        this.root = null;
    }

    // Helper function to get the height of the node
    height(node) {
        return node ? node.height : 0;
    }

    // Helper function to get the balance factor of the node
    getBalanceFactor(node) {
        return node ? this.height(node.left) - this.height(node.right) : 0;
    }

    // Right rotate subtree rooted with y
    rightRotate(y) {
        const x = y.left;
        const T2 = x.right;

        // Perform rotation
        x.right = y;
        y.left = T2;

        // Update heights
        y.height = Math.max(this.height(y.left), this.height(y.right)) + 1;
        x.height = Math.max(this.height(x.left), this.height(x.right)) + 1;

        // Return new root
        return x;
    }

    // Left rotate subtree rooted with x
    leftRotate(x) {
        const y = x.right;
        const T2 = y.left;

        // Perform rotation
        y.left = x;
        x.right = T2;

        // Update heights
        x.height = Math.max(this.height(x.left), this.height(x.right)) + 1;
        y.height = Math.max(this.height(y.left), this.height(y.right)) + 1;

        // Return new root
        return y;
    }

    // Insert a node
    insert(node, value) {
        // 1. Perform the normal BST insertion
        if (!node) {
            return new Node(value);
        }

        if (value < node.value) {
            node.left = this.insert(node.left, value);
        } else if (value > node.value) {
            node.right = this.insert(node.right, value);
        } else {
            // Equal values are not allowed in BST
            return node;
        }

        // 2. Update the height of this ancestor node
        node.height = 1 + Math.max(this.height(node.left), this.height(node.right));

        // 3. Get the balance factor of this ancestor node to check whether this node became unbalanced
        const balance = this.getBalanceFactor(node);

        // If this node becomes unbalanced, then there are 4 cases

        // Left Left Case
        if (balance > 1 && value < node.left.value) {
            return this.rightRotate(node);
        }

        // Right Right Case
        if (balance < -1 && value > node.right.value) {
            return this.leftRotate(node);
        }

        // Left Right Case
        if (balance > 1 && value > node.left.value) {
            node.left = this.leftRotate(node.left);
            return this.rightRotate(node);
        }

        // Right Left Case
        if (balance < -1 && value < node.right.value) {
            node.right = this.rightRotate(node.right);
            return this.leftRotate(node);
        }

        // Return the (unchanged) node pointer
        return node;
    }

    // Wrapper function to insert a value
    insertValue(value) {
        this.root = this.insert(this.root, value);
    }

    // Helper function to print the tree (in-order traversal)
    inOrder(node) {
        if (node) {
            this.inOrder(node.left);
            console.log(node.value);
            this.inOrder(node.right);
        }
    }

    // Wrapper function to print the tree
    printTree() {
        this.inOrder(this.root);
    }
}

// Usage example
const tree = new AVLTree();
tree.insertValue(10);
tree.insertValue(20);
tree.insertValue(30);
tree.insertValue(40);
tree.insertValue(50);
tree.insertValue(25);
tree.insertValue(14);
tree.insertValue(5);

tree.printTree();
