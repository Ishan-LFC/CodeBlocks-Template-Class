Dictionary.cpp 
#include "Dictionary.h" 
#include <vector> 
#include <iostream> 
using namespace std; 
template <class TKey, class TValue>  
Dictionary<TKey, TValue>::Dictionary()  
{ 
}; 
//nothing to do, vector member variables are empty on declaration 
template <class TKey, class TValue>  
void Dictionary<TKey, TValue>::add(TKey key, const TValue &value)  
{ 
} 
keys.push_back(key); 
values.push_back(value); 
template <class TKey, class TValue>  
TValue Dictionary<TKey, TValue>::find (TKey key)  const
 TValue value = " ";  
    for (unsigned int i = 0; i < keys.size(); i++) 
       if (key == keys[i]) 
           value = values[i]; 
    if (value == " ") 
        return "no such key can be found"; 
    else return value; 
} 
 
template <class TKey, class TValue>  
void Dictionary<TKey, TValue>::display()  
{ 
     for (unsigned int i = 0; i < keys.size(); i++) 
        cout << keys[i] << ' ' << values[i] << endl; 
     return; 
} 
