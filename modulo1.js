
//1
/*function Primo(numero){
    let primo = true;
    for(let i=2;i<numero;i++){
        if(numero%i === 0 ){
            primo = false;
            break;
        }
    }
console.log(primo)
   return primo;
}*/

//2


//3
function sueldo(hs,antiguedad,hsxmes,nombre){

    let trabajadas = hs*hsxmes;
    let sumar =0;
    let total = 0;
    if (antiguedad>10){
         sumar = antiguedad*30;
    }

     total = trabajadas + sumar;

     return console.log('El empleado',nombre, 'cobra :$', total,'conantiguedad de ',antiguedad);
}

//4
function aleatorio(inferior, superior) {
    var numPosibilidades = superior - inferior;
    var aleatorio = Math.random() * (numPosibilidades + 1);
    aleatorio = Math.floor(aleatorio);
    return console.log(inferior + aleatorio);
}

 
//---------------










