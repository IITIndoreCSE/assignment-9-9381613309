#include <iostream>
#include <string>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord records[12];
    cout << "Enter month name and sales amount for 12 months:";
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << " name: ";
        cin >> records[i].month;
        cout << "Sales amount: ";
        cin >> records[i].amount;
    }
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1; i < 12; i++) {
        if (records[i].amount > records[maxIndex].amount)
            maxIndex = i;
        if (records[i].amount < records[minIndex].amount)
            minIndex = i;
    }
    cout << "Month with Maximum Sales: " << records[maxIndex].month
         << " (" << records[maxIndex].amount << ")";
    cout << "Month with Minimum Sales: " << records[minIndex].month
         << " (" << records[minIndex].amount << ")";
    return 0;
}
