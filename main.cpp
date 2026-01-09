/*
Full Name: Forqan Wesam
Group: B1
*/

#include <iostream> 

using namespace std;

int main() {
    int consumption;
    int unitPrice;
    long long bill;

    cout << "Enter your electric consumption (KW) : ";
    cin >> consumption;

    if (consumption <= 100 ) {
        unitPrice = 250;
    } 
    else if (consumption > 100 && consumption <= 300) {
        unitPrice = 300;
    } 
    else {
        unitPrice = 350;
    }

    bill = consumption * unitPrice;

    if (bill >=100000) {
        cout << "High consumption - plase reuce usage" << endl;
    }
    else {
        cout << "Normal consumption" << endl;
    }

    cout << "Your consumption is : " << consumption << endl;
    cout << "Your unit price is : " << unitPrice << endl;
    cout << "Your bill is : " << bill;

}
