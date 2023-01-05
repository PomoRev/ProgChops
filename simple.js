/* 
    This file contains a simple JavaScript program that is called by
    pressing a button on the provided webpage (webpage.html).
    
    Frank Emanuel (c) 2023
*/

function combine() {

    if ( isNaN(inputA.value) || isNaN(inputB.value) ){

        result.innerText = inputA.value + " & " + inputB.value;

    } else {

        result.innerText = parseInt(inputA.value) + parseInt(inputB.value);

    }

    return;

}