#define DICTIONARY_H 
#include <vector> 
#include <string> 
#include <iostream> 
using namespace std; 
template <class TKey, class TValue>  
class Dictionary 
{ 
public: 
Dictionary(); 
void add(TKey key, const TValue &value);  
TValue find (TKey key)  const;  
void display(); 
private: 
vector<TKey> keys;  
vector<TValue> values;  
}; 
#endif // DICTIONARY_H 
