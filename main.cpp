#include <cstdlib> 
#include "Dictionary.h"  
#include "Dictionary.cpp"  
#include <vector> 
 
using namespace std; 
 
int main() 
{ 
   Dictionary <int, string> parts;  
   string part; 
   int key; 
 
   //add 4 values to the parts dictionary 
   for (int i = 0; i <= 3; i++) 
   { 
      cout << "Please enter a part name and a key to add to the parts 
dictionary." << endl; 
      cout << "Part name: "; 
      getline(cin, part); 
      cout << "Key for part name: "; 
      cin >> key; 
      parts.add(key, part); 
      cin.get(); 
   } 
   cout << endl; 
 
   parts.display(); 
   cout << endl; 
 
    //find the part for a key 
    cout << "For which key do you want to find the part? "; 
    cin >> key; 
    cin.get(); 
    cout << "The part for key " << key  << " is "; 
    cout << parts.find(key) << endl << endl << endl; 
 
    Dictionary <string, string> persons;  
string key1; 
for (int i = 0; i <= 1; i++) 
{ 
cout << "Please enter a person name and a key to add to the" 
<< " persons dictionary." << endl; 
cout << "Person name: "; 
getline(cin, name); 
cout << "Key for person name: "; 
cin >> key1; 
persons.add(key1, name); 
cin.get(); 
} 
cout << endl; 
persons.display(); 
cout << endl; 
//find the part for a key 
cout << "For which key do you want to find the person? "; 
cin >> key1; 
cout << "The part for key " << key1  << " is "; 
cout << persons.find(key1) << endl; 
return 0; 
} 
