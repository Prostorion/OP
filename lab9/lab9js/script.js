let button = document.querySelector('#button')

button.onclick = () => {
    let a1 = document.querySelector('#a1').value
    let arreyOfChars = a1.split('')
    for(let n = 0; n <= arreyOfChars.length; n++) {
        if(arreyOfChars[n] == '(') {
            for(let m = n; m<=arreyOfChars.length; m++){
                if(arreyOfChars[m] ==')'){
                    arreyOfChars[n] = '0'
                    arreyOfChars[m] = '0'
                    m = arreyOfChars.length
                }
                
            }
            
        console.log(arreyOfChars)
        }
    
    
    
        
    }
    const even = (element) => element == ')' || element == '('
    if (arreyOfChars.some(even)){
        document.querySelector('#result').textContent = 'Щось не так'
    } else document.querySelector('#result').textContent = 'Все вірно'
}
