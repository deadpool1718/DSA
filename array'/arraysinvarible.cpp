#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;
    
    while (true) {
        cout << "Choose an operation:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Get Maximum" << endl;
        cout << "4. Print Stack" << endl;
        cout << "5. Exit" << endl;
        
        int choice;
        cin >> choice;
        
        switch (choice) {
            case 1:
                int item;
                cout << "Enter an element to push onto the stack: ";
                cin >> item;
                st.push(item);
                break;
            case 2:
                if (!st.empty()) {
                    st.pop();
                } else {
                    cout << "stack is empty" << endl;
                }
                break;
            case 3:
                if (!st.empty()) {
                    cout << "Maximum element: " << st.top() << endl;
                } else {
                    cout << "-1" << endl;
                }
                break;
            case 4:
                if (!st.empty()) {
                    cout << "Stack: ";
                    stack<int> tempSt = st;
                    while (!tempSt.empty()) {
                        cout << tempSt.top() << " ";
                        tempSt.pop();
                    }
                    cout << endl;
                } else {
                    cout << "stack is empty" << endl;
                }
                break;
            case 5:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please choose a valid option." << endl;
                break;
        }
    }
    
    return 0;
}