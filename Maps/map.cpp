/*In C++, a map is an associative container that is used to store elements in a mapped fashion. Internally, a map is implemented as a self-balancing binary tree(Red Black Tree). Each element of a map is treated as a pair. The first value is referred to as key and the second value is referred to as value. No two values can have the same key.
Note that the time complexities of search, insert and delete are O(Log n).

Functions associated with Map:
at(key)             Return value
[key]               Return value
foreach
begin():            Returns an iterator to the first element in the map
end():              Returns an iterator to the theoretical element that follows the last element in the map
rbegin():           Returns an iterator to the last element in the map
rend():             Returns an iterator to the element before first element in the map
size():             Returns the number of elements in the map
max_size():         Returns the maximum number of elements that the map can hold
empty():            Returns whether the map is empty
insert({key, Value}): Adds a new element to the map
erase(iterator position): Removes the element at the position pointed by the iterator
erase(const x):     Removes the key-value ‘x’ from the map
clear():            Removes all the elements from the map
map1.swap(map2)     swap to maps
map1=map2           copy complete map

*/

/*Sort according to keys*/
#include<iostream>
#include<map>
#include<stdlib.h>
using namespace std;
int main(){
	map<int,int> m1;
	cout<<m1.max_size()<<endl;
    	m1[6]=40;
	m1.insert({ 2, 30 });
	m1.insert(make_pair(3, 60));
	m1.insert(pair<int, int>(4, 20));
	m1.insert(pair<int, int>(5, 50));
	m1.insert(pair<int, int>(101, 50));
	m1.insert(pair<int, int>(101, 10));       //ignore duplicate key
	for(auto e:m1)
        	cout<<e.first<<"\t"<<e.second<<endl;

	cout<<"Number of elements is "<<m1.size()<<endl;
    	//m1.clear();

    	//value of key 101
	//cout<<"Marks of roll 101" << m1.at(101)<<endl;
    	//      or
    	cout<<"Marks of roll 101 is" << m1[101]<<endl;

	for(auto itr = m1.begin(); itr != m1.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second << '\n';
	}
	cout << endl;

	// remove key 4
	m1.erase(4);
	if(m1.empty())
        	cout<<"Map is empty";
    	else
        	cout<<"Map is not empty";

	cout<<"List of key and values top to bottom"<<endl;
	for(auto itr=m1.begin(); itr != m1.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second << '\n';
	}
	cout << endl;

    	cout<<"List of key and values bottom to top"<<endl;
    	for(auto itr =m1.rbegin(); itr != m1.rend(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second << '\n';
	}
	cout << endl;

	map<int,int> m2;
	m2.insert(pair<int,int>(10,100));
	m1.swap(m2);
	for(auto itr =m1.begin(); itr != m1.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second << '\n';
	}
	cout << endl;

	m1=m2;
	for(auto itr =m1.begin(); itr != m1.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second << '\n';
	}
	cout << endl;

	return 0;
}
