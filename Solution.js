
/**
 * @param {number[]} people
 * @param {number} limit
 * @return {number}
 */
var numRescueBoats = function (people, limit) {
    people.sort((x, y) => x - y);
    let leftPointer = 0, rightPointer = people.length - 1;
    let numberOfBoats = 0;

    while (leftPointer <= rightPointer) {
        if (people[leftPointer] + people[rightPointer] <= limit) {
            leftPointer++;
        }
        rightPointer--;
        numberOfBoats++;
    }
    return numberOfBoats;
};
