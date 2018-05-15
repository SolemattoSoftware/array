//
//  main.cpp
//  array
//
//  Created by Manuel Lusenti on 15/05/18.
//  Copyright © 2018 Manuel Lusenti. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    const int MAX_HOBBY = 6;
    string hobby[MAX_HOBBY];
    
    for(int index = 0; index < MAX_HOBBY; index++)
    {
        cout << "Inserisci l'hobby n° " << index+1 << " (F) per fermarti.\n";
        string temp = "";
        
        cin >> temp;
        
        if(temp != "F")
        {
            hobby[index] = temp;
        }
        else{
            break;
        }
    }
    
    for(int index = 0; index < MAX_HOBBY; index++){
        cout << index+1 << ": " << hobby[index] << endl;
    }
    return 0;
}
