/*const Stack = () => {
    const data = []
    let top = -1;

    const push = (value) => {
        top++
        data[top] = value;
        console.log(data)
    }

    const pop = () => {
        if(top>=0){
            const itemReturn = data[top]
            data.splice(top, 1)
            return itemReturn;
        }else{
            return false;
        }
    }

    const print = () => {
        console.log(data, "Quantidade de elementos dentro do array: ", top)
    }

    return {
        push, pop, print
    }

}

const stack = Stack()
stack.push(1)
stack.push(12)
stack.push(34)
console.log(stack.pop())
stack.print();
stack.push(45)
stack.print()*/

const Class1 = () => {
    const dados = [];
    let top = -1

    const push = (valor) => {
        top++;
        dados[top] = valor;
        console.log(dados)
    }

    const mostrarTopo = () => {
        console.log("Last element added: ", dados[top])
    }

    const quantElementos = () => {
        console.log(dados.slice(valor))
    }

    return {
        push, mostrarTopo, quantElementos
    }
}

const class1 = Class1();

class1.push(1);
class1.push(4)
class1.push(5)
class1.push(9)
class1.push(3)
class1.mostrarTopo()
class1.quantElementos()


