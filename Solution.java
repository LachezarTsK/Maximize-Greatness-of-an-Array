
import java.util.Arrays;

public class Solution {

    public int maximizeGreatness(int[] input) {
        Arrays.sort(input);

        int indexForLowerValues = 0;
        int indexForGreaterValues = 0;
        int maxPossibleGreatness = 0;

        while (indexForLowerValues < input.length && indexForGreaterValues < input.length) {
            if (input[indexForLowerValues] < input[indexForGreaterValues]) {
                ++indexForLowerValues;
                ++maxPossibleGreatness;
            }
            ++indexForGreaterValues;
        }

        return maxPossibleGreatness;
    }
}
