
#include <iostream>
using namespace std;

void expand(int arr[], int size);


int main()
{
    int size = 3;
    int* arr = new int[size];
    bool  Continue =1;
    while(Continue){
        int i = 0;
        cin >> arr[i];
        i++;
        if (i == size) {
            cout << "wait for expanding";
            expand(arr, size);
        }
        cout << "To Continue press 1 \nTo Exit press 0" << endl;
        cin >> Continue;
    }
        
   
}

void expand(int arr[], int size) {
    int* temp = new int[size+1];
    for (int i = 0; i < size; i++)
        temp[i] = arr[i];
    arr = temp;
    delete[] temp;
}
