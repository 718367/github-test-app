#include "rectangel.h"
#include "rectangel.cpp"
#include <iostream>
using namespace std;

void expand(int arr[], int size);


int main()
{
    rectangel<int> rec1;
    rec1.set_width(5);
    rec1.set_height(2);
    rectangel<float> rec2(3.0, 4.0);
    if (rec1.get_area() > rec2.get_area())
        cout << "rec1 is larger." << endl;
    else if (rec1.get_area() < rec2.get_area())
        cout << "rec2 is larger." << endl;
    else
        cout << "Both are equal." << endl;
    cout << "Area of rec1: " << rec1.get_area() << endl;
    cout << "Area of rec2: " << rec2.get_area() << endl;

    

   /* int size = 3;
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
        
   */
}

void expand(int arr[], int size) {
    int* temp = new int[size+1];
    for (int i = 0; i < size; i++)
        temp[i] = arr[i];
    arr = temp;
    delete[] temp;
}
