
/**
 * @param {number[]} input
 * @return {number}
 */
var maximizeGreatness = function (input) {
    input.sort((x, y) => x - y);

    let indexForLowerValues = 0;
    let indexForGreaterValues = 0;
    let maxPossibleGreatness = 0;

    while (indexForLowerValues < input.length && indexForGreaterValues < input.length) {
        if (input[indexForLowerValues] < input[indexForGreaterValues]) {
            ++indexForLowerValues;
            ++maxPossibleGreatness;
        }
        ++indexForGreaterValues;
    }

    return maxPossibleGreatness;
};
