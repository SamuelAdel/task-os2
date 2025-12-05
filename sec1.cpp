#include <bits/stdc++.h>
using namespace std;

class aray {
    private:
        int a[100];
        int nElements;
    
    public:
        aray() {
        nElements = 0;
        }
        
        void insert(int value) {
            if (nElements < 100) {
                a[nElements] = value;
                nElements++;
            }
        }
        void display() {
            for (int i = 0; i < nElements; i++)
                cout << a[i] << " ";
            cout << endl;
        }
        
        bool search(int key) {
            for (int i = 0; i < nElements; i++) {
                if (a[i] == key)
                    return true;
            }
            return false;
        }

        bool remove(int key) {
            int i;
            for (i = 0; i < nElements; i++)
                if (a[i] == key)
                    break;
        
            if (i == nElements) 
                return false;
        
            for (int j = i; j < nElements - 1; j++)
                a[j] = a[j + 1];
        
            nElements--;
            return true;
        }
};





int main() {
    aray ax; 
    int x;

    ax.insert(5);
    for (int i = 0; i < 10; i++) {
        cin >> x;
        ax.insert(x);
    } 

    cout << ax.search(5) << endl; 
    ax.display();
    ax.remove(5);
    ax.display();

    return 0;
}
