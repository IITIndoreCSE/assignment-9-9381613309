#include <iostream>
using namespace std;

struct Item {
    int id;
    float cost;
};

int main() {
    // Initialize first four elements, rest default to zero
    Item items[6] = {
    {101, 45.75} 
    {102, 60.00}
    {103, 80.50}
    {104, 30.25}
    // Remaining two elements are default-intialized
}

count << "items with cost greater than 50.00:" << endl;
for(int i = 0; i <6; ++i) {
    if(items[i].cost > 50.00) {
        cout << "ID: " << items[i].id
             << ", Cost: " <<
items[i].cost << endl;
        }
     }
     return 0;
}
