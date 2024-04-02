
using System;

public class Solution
{
    public int MaximizeGreatness(int[] input)
    {
        Array.Sort(input);

        int indexForLowerValues = 0;
        int indexForGreaterValues = 0;
        int maxPossibleGreatness = 0;

        while (indexForLowerValues < input.Length && indexForGreaterValues < input.Length)
        {
            if (input[indexForLowerValues] < input[indexForGreaterValues])
            {
                ++indexForLowerValues;
                ++maxPossibleGreatness;
            }
            ++indexForGreaterValues;
        }

        return maxPossibleGreatness;
    }
}
