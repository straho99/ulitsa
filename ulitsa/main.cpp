//
//  main.cpp
//  ulitsa
//
//  Created by Strahil Ruychev on 7.12.23.
//

#include <iostream>
using namespace std;

int main() {
    int countNotCrossed, countNotCrossedEven = 0, countNotCrossedOdd = 0, currentNumber;
    int maxEven = 0, maxOdd = 0;
    
    cin >> countNotCrossed;
    
    for(int i = 1; i <= countNotCrossed; i++) {
        cin >> currentNumber;
        
        if (currentNumber % 2 == 0) {
            countNotCrossedEven++;
            
            if (currentNumber > maxEven) {
                maxEven = currentNumber;
            }
        } else {
            countNotCrossedOdd++;
            
            if (currentNumber>maxOdd) {
                maxOdd = currentNumber;
            }
        }
    }
    
    int totalEven = maxEven / 2;
    int totalOdd = maxOdd / 2 + 1;
    
    cout << (totalOdd - countNotCrossedOdd) << " " << (totalEven - countNotCrossedEven);
    
    return 0;
}
