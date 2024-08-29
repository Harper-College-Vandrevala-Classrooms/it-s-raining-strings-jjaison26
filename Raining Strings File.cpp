#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
        cout << "Welcome to the Business Sorting Program" << endl;
        vector<string> businesses;
        string input;
        string B_name;
        do {
                cout << "Please enter the name of the business: ";
                getline(cin, B_name);
                businesses.push_back(B_name);
                sort(businesses.begin(), businesses.end());
                for(int i = 0; i < businesses.size(); i++) {
                        cout << businesses[i] << endl;
                }
                cout << "Another business?" << endl;
                getline(cin, input);
        } while (input == "y" || input == "Y" || input == "yes" || input == "Yes" || input == "YES");
        cout << "Thank you for using the Business Sorting Program!" << endl;
        return 0;
}
