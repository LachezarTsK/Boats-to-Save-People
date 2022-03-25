
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
    
public:

    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int leftPointer = 0, rightPointer = people.size() - 1;
        int numberOfBoats = 0;

        while (leftPointer <= rightPointer) {
            if (people[leftPointer] + people[rightPointer] <= limit) {
                leftPointer++;
            }
            rightPointer--;
            numberOfBoats++;
        }
        return numberOfBoats;
    }
};
