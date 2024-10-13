

const f1 = function() {
    let n = prompt("Insertar: ");
    let f = n * (n + 1) / 2;
    alert(f);
}

const f2 = function() {
    let n = prompt("Insertar: ");
    let f = n * n; 
    alert(f);
}

const f3 = function() {
    let n = prompt("Insertar: ");
    let f = n * n * n; 
    alert(f);
}

const f4 = function() {
    let n = prompt("Insertar: ");
    let f = Math.sqrt(n); 
    alert(f);
}

const f5 = function() {
    let n = prompt("Insertar: ");
    let f = Math.pow(n, 2); 
    alert(f);
}

const f6 = function() {
    let n = prompt("Insertar: ");
    let f = Math.pow(n, 3); 
    alert(f);
}

const f7 = function() {
    let n = prompt("Insertar: ");
    let f = n / 2; 
    alert(f);
}

const f8 = function() {
    let n = prompt("Insertar: ");
    let f = n + 10;
    alert(f);
}

const f9 = function() {
    let n = prompt("Insertar: ");
    let f = n - 5; 
    alert(f);
}

const f10 = function() {
    let n = prompt("Insertar: ");
    let f = n * (n - 1); 
    alert(f);
}

const f11 = () => { 
    let n = parseInt(prompt("Insertar: "));
    let factorial = 1;
    for (let i = 1; i <= n; i++) {
        factorial *= i;
    }
    alert(n);
};


const f11 = () => { 
    let n = parseInt(prompt("Insertar un número para calcular la suma: "));
    let suma = (n * (n + 1)) / 2;
    alert(`La suma de los primeros ${n} números es ${suma}`);
};

// Función 3: Calcular el cuadrado de un número
const f12 = () => { 
    let n = parseFloat(prompt("Insertar un número para calcular su cuadrado: "));
    let cuadrado = n * n;
    alert(`El cuadrado de ${n} es ${cuadrado}`);
};

// Función 4: Calcular el cubo de un número
const f13 = () => { 
    let n = parseFloat(prompt("Insertar un número para calcular su cubo: "));
    let cubo = n * n * n;
    alert(`El cubo de ${n} es ${cubo}`);
};

// Función 5: Calcular el promedio de n números
const f14 = () => { 
    let n = parseInt(prompt("¿Cuántos números deseas promediar? "));
    let suma = 0;
    for (let i = 0; i < n; i++) {
        let num = parseFloat(prompt(`Insertar número ${i + 1}: `));
        suma += num;
    }
    let promedio = suma / n;
    alert(`El promedio es ${promedio}`);
};

// Función 6: Calcular la potencia de un número
const f16 = () => { 
    let base = parseFloat(prompt("Insertar la base: "));
    let exponente = parseInt(prompt("Insertar el exponente: "));
    let potencia = Math.pow(base, exponente);
    alert(`${base} elevado a ${exponente} es ${potencia}`);
};

// Función 7: Calcular la raíz cuadrada de un número
const f17 = () => { 
    let n = parseFloat(prompt("Insertar un número para calcular su raíz cuadrada: "));
    let raiz = Math.sqrt(n);
    alert(`La raíz cuadrada de ${n} es ${raiz}`);
};

// Función 8: Comprobar si un número es primo
const f18 = () => { 
    let n = parseInt(prompt("Insertar un número para comprobar si es primo: "));
    let esPrimo = n > 1;
    for (let i = 2; i <= Math.sqrt(n); i++) {
        if (n % i === 0) {
            esPrimo = false;
            break;
        }
    }
    alert(`${n} ${esPrimo ? 'es' : 'no es'} un número primo.`);
};

// Función 9: Calcular el área de un círculo
const f19 = () => { 
    let radio = parseFloat(prompt("Insertar el radio del círculo: "));
    let area = Math.PI * Math.pow(radio, 2);
    alert(`El área del círculo es ${area}`);
};

// Función 10: Calcular el perímetro de un rectángulo
const f20 = () => { 
    let largo = parseFloat(prompt("Insertar el largo del rectángulo: "));
    let ancho = parseFloat(prompt("Insertar el ancho del rectángulo: "));
    let perimetro = 2 * (largo + ancho);
    alert(`El perímetro del rectángulo es ${perimetro}`);
};

function f21(n) {
    let a = n * (n * 2) / 2;
}

function f22(n) {
    let a = n * (n - 1) / 2; 
}

function f23(n) {
    let a = n + (n / 2); 
}

function f24(n) {
    let a = n * n * n; 
}

function f25(n) {
    let a = n * 10; 
}

function f26(n) {
    let a = n - (n / 3); 
}

function f27(n) {
    let a = n * (n + 2); 
}

function f28(n) {
    let a = n / (n + 1); 
}

function f29(n) {
    let a = (n + 5) * (n - 5); 
}

function f30(n) {
    let a = (n ** 2) - n; 
}