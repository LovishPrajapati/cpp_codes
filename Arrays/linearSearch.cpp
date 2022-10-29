//
//  linearSearch.cpp
//  arrays
//
//  Created by Lovish Kumar on 22/10/22.
//

#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};
    int numberToFind = 3;
    
    for(int i = 0; i < 4; i++){
        if(arr[i] == numberToFind){
            cout<<"Number Found at:"<<i <<"\n";
            break;
        }
    }
    return 0;
}
