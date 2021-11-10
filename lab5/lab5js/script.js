let button = document.querySelector('#button')
function isPrime(num) {
    let c = 0
    if (num<=1) {
        return 0
    }
    for(let r = 2; r<=num-1; r++){
        
        if(num%r == 0) {c = 1
        }
    }
    if (c == 1) {
        return 0
    } else {
        return num
    }
}


button.onclick = () => {
    let n = Number(document.querySelector('#n').value)
    let i = 0, work = 0, plus, minus;

    while(work == 0){
        plus = n + i
        minus = n - i
        if(isPrime(plus)!=0){
            work = work + 1   
        }
        if(isPrime(minus)!=0){
            work = work+2  
        }
        i++
    }
    
    if(work == 3){
        if(plus == minus){
            document.querySelector('#firstResult').textContent = 'n is the closest value: ' + isPrime(n)
        } else {
        document.querySelector('#firstResult').textContent = 'there are two closest values: ' + isPrime(minus) + '; '+ isPrime(plus)
        }
    }
    if(work == 2){
        document.querySelector('#firstResult').textContent = 'closest value: ' + isPrime(minus)
    }
    if(work == 1){
        document.querySelector('#firstResult').textContent = 'closest value: ' + isPrime(plus)
    }
}