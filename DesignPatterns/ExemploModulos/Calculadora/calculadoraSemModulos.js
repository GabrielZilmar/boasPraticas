/**
 * Funcao principal para escolher qual calculo sera feito
 * @param number x
 * @param number y
 * @param number op
 */
const main = (x, y, op) => {
	switch (op) {
		case 0:
			soma(x, y, (result) => {
				console.log(result);
			});
			break;

		case 1:
			subtracao(x, y, (result) => {
				console.log(result);
			});

			break;

		case 2:
			multiplicacao(x, y, (result) => {
				console.log(result);
			});
			break;

		case 3:
			divisao(x, y, (result) => {
				console.log(result);
			});
			break;

		case 4:
			potencia(x, y, (result) => {
				console.log(result);
			});
			break;

		default:
			break;
	}
};

/**
 * Funcao de soma
 * @param number x
 * @param number y
 * @param Function callback
 */
const soma = (x, y, callback) => {
	let result = x + y;
	return callback(result);
};

/**
 * Funcao de subtracao
 * @param number x
 * @param number y
 * @param Function callback
 */
const subtracao = (x, y, callback) => {
	let result = x - y;
	return callback(result);
};

/**
 * Funcao de multiplicacao
 * @param number x
 * @param number y
 * @param Function callback
 */
const multiplicacao = (x, y, callback) => {
	let result = x * y;
	return callback(result);
};

/**
 * Funcao de divisao
 * @param number x
 * @param number y
 * @param Function callback
 */
const divisao = (x, y, callback) => {
	let result = x / y;
	return callback(result);
};

/**
 * Funcao de potencia
 * @param number x
 * @param number y
 * @param Function callback
 */
const potencia = (x, y, callback) => {
	let result = x;
	if (y == 0) {
		result = 1;
	} else if (y == 1) {
		result = x;
	} else {
		for (let i = 1; i < y; i++) {
			result = result * x;
		}
	}
	return callback(result);
};

main(2, 3, 0);
