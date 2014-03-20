#include <iostream>
using namespace std;

int doubleDigitValue(int digit){
    int doubleDigit = digit*2;
    int sum;

    if (doubleDigit > 10){
        sum = 1 + doubleDigit%10;
    }
    else{
        sum = doubleDigit;
    }
    return sum;
}

int main(){
    char digit;
    int checkSum = 0;
    int position = 1;

    cout << "Enter a number with even number of digits:";
    digit = cin.get(); // initialize the input digit;

    while (digit!=10){ // keep running this till a "return" is encountred;  
      if (position % 2 == 0) checkSum += digit -'0';
      else checkSum += 2*(digit-'0');
      digit = cin.get();
      position++;
    }
    if (checkSum%10 == 0){
        cout << "Checksum is Valid \n";
    } else {
        cout << "Checksum is not Valid \n";
    }
    return 0;
}
