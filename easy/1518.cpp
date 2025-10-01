// ---------time complexity:O(1)--------
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        return numBottles + (numBottles - 1) / (numExchange - 1);
    }
};
// ---------time complexity:O(n)--------
// class Solution {
// public:
//     int numWaterBottles(int numBottles, int numExchange) {
//         int cnt=numBottles,emty=numBottles,newBottle;

//         while(emty>=numExchange){
//             newBottle=emty/numExchange;
//             cnt+=newBottle;
//             emty=emty%numExchange+newBottle;
//         }
//         return cnt;
//     }
// };