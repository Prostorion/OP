let button = document.querySelector('#button')

button.onclick = () => {
    let n = document.querySelector('#n').value
    let i1 = i2 = 0, i3 = 1.5, iN
    for(let i = 4; i<=n; i++){
        iN= (i + 1)/(i * i + 1)*i3 - i2*i1
        i1 = i2
        i2 = i3
        i3 = iN
    }
    document.querySelector('#firstResult').textContent = 'n-ий член: ' + iN

}