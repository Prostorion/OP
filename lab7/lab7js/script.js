

let button = document.querySelector('#button');


button.onclick = () => {
    let size = document.querySelector('#chars').value;
    let number = document.querySelector('#number').value;
    

     
    
        

    let arr = [];
    let original = " ";
    for (let i = 0; i <= size - 1; i++) {
        let num = Math.floor(Math.random() * 1001);
        arr[i] = num;
        original += arr[i] + " ";
    }
    document.querySelector('#firstResult').textContent = 'Оригінальний масив: ' + original;
    let biggerK = 0;
    let result = 0;
for (let n = 0; n <= size - 1; n++) {
    if (arr[n] > number) {
        biggerK++;
        result += arr[n];
    }

}
if (biggerK != 0) {
    result = result/biggerK;
}
document.querySelector('#secondResult').textContent = 'Кількість елементів більших від k: ' + biggerK;
document.querySelector('#thirdResult').textContent = 'Їх середнє арифметичне: ' + result ;

for (let l = 0; l <= size - 1; l++) {
    if (arr[l] > number) {
        arr[l] = result;
    }
}
let oper = " "
for (let l = 0; l <= size - 1; l++) {
    oper += arr[l] + " "
}
document.querySelector('#Result').textContent = 'Результат:' + oper ;

   
 


 
}
