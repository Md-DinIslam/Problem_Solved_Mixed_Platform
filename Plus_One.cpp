class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size()-1;
        for(int i = size ; i>=0;i--){
            if(digits[i] != 9){
                //digits[i] += 1;
                digits[i]++;
                break;
            }
            else{
                digits[i] = 0;
            }
        }
        if(digits[0] == 0){
            // newDigits.push_back(1);
            // for(int i = 0;i<size;i++){
            //     newDigits.push_back(digits[i]);
            // }
            digits.insert(digits.begin(),1);
            // return newDigits;
        }
        return digits;
    }
};