module.exports = {
	/**
	 * Funcao de potenciacao
	 * @param number x
	 * @param number y
	 * @return number result
	 */
	pow: async (x, y) => {
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
		return result;
	},
};
