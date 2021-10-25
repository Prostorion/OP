let button = document.querySelector('#button')


button.onclick = () => {
    let x = document.querySelector('#x').value
    let k = 1, sum = 0, a
    while(k<=10 || Math.abs(a) > 10**-4) {
        a= Math.pow(x, 2*k)*Math.sin(Math.pow(x, k))/(Math.pow(k, 2));
        sum += a;
        k += 1;
    }
    document.querySelector('#firstResult').textContent = 'Sum ' + sum

}