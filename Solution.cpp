
#include <ranges>
#include <vector>
using namespace std;

class Solution {

public:
    int maximizeGreatness(vector<int>& input) const{
        ranges::sort(input);

        size_t indexForLowerValues = 0;
        size_t indexForGreaterValues = 0;
        int maxPossibleGreatness = 0;

        while (indexForLowerValues < input.size() && indexForGreaterValues < input.size()) {
            if (input[indexForLowerValues] < input[indexForGreaterValues]) {
                ++indexForLowerValues;
                ++maxPossibleGreatness;
            }
            ++indexForGreaterValues;
        }

        return maxPossibleGreatness;
    }
};
