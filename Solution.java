
import java.util.Arrays;

public class Solution {

    public int numRescueBoats(int[] people, int limit) {
        Arrays.sort(people);
        int leftPointer = 0, rightPointer = people.length - 1;
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
}
