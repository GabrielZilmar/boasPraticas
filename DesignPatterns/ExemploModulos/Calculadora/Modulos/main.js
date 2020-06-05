const sum = require("./operations/sum");
const subtraction = require("./operations/subtraction");
const multiplication = require("./operations/multiplication");
const division = require("./operations/division");
const pow = require("./operations/pow");

/**
 * Funcao principal para escolher qual calculo sera feito
 * @param number x
 * @param number y
 * @param number op
 */
const main = async (x, y, op) => {
	switch (op) {
		case 0:
			console.log(await sum.sum(x, y));
			break;

		case 1:
			console.log(await subtraction.subtraction(x, y));
			break;

		case 2:
			console.log(await multiplication.multiplication(x, y));
			break;

		case 3:
			console.log(await division.division(x, y));
			break;

		case 4:
			console.log(await pow.pow(x, y));
			break;

		default:
			break;
	}
};

main(2, 3, 0);
