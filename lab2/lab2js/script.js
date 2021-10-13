let button = document.querySelector('#button')

button.onclick = function() {
    let a1 = parseFloat(document.querySelector('#a1').value)
    let b1 = parseFloat(document.querySelector('#b1').value)
    let c1 = parseFloat(document.querySelector('#c1').value)
    let a2 = parseFloat(document.querySelector('#a2').value)
    let b2 = parseFloat(document.querySelector('#b2').value)
    let c2 = parseFloat(document.querySelector('#c2').value)
    if(a1/a2 == b1/b2){
        if(a1/a2 == c1/c2){
            document.querySelector('#result').textContent = "Безліч"
            console.log('БЕЗЛІЧ')
        } 
        else 
        document.querySelector('#result').textContent = "Немає"
        console.log('НЕМАЄ')
    } 
    else document.querySelector('#result').textContent =`1 розв'язок`
    console.log(`1 розв'язок`)
}