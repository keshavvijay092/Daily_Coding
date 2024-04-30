/*
set:-
Sets are the containers of unique keys duplicate numbers are ignored.
The value of the element cannot be modified once it is added to the set,
though it is possible to remove and add the modified value of that element.
It will arrange all numbers in increasing order
It uses red black tree in background
All the operations in it takes O(log2N)

Constructors and initialize:-
    int a[]={10,20,30},n=3;
    set<int> s1(a,a+n);
    set<int> s2(s1);
    set<int> s3(s1.begin(),s1.end());
    set<int> s4={10,20,30};

Iterators: -
begin()
	Returns an iterator to the first element in the set.
end()
	Returns an iterator to the theoretical element that follows last element in the set.
rbegin()
	Returns a reverse iterator pointing to the last element in the container.
rend()
	Returns a reverse iterator pointing to the theoretical element right before the first 	element in the set container.
crbegin()
	Returns a constant iterator pointing to the last element in the container.
crend()
	Returns a constant iterator pointing to the position just before the first element in 	the container.
cbegin()
	Returns a constant iterator pointing to the first element in the container.
cend()
	Returns a constant iterator pointing to the position past the last element in the 	container.
foreach loop

Methods of set:
void insert(const g)
	Adds a new element ‘g’ to the set.
void emplace(const g)
	Adds a new element ‘g’ to the set.
int size()
	Returns the number of elements in the set.
bool empty()
	Returns whether the set is empty.
iterator insert (iterator position, const g)
	Adds a new element ‘g’ at the position pointed by iterator.
bool erase(iterator position)
	Removes the element at the position pointed by the iterator.
bool erase(const g)
	Removes the value ‘g’ from the set.
void clear()
	Removes all the elements from the set.
itr find(const g)
	Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to end.
int count(const g)
	Returns 1 or 0 based on the element ‘g’ is present in the set or not.
void swap(set)
	This function is used to exchange the contents of two sets but the sets must be of 	same type, although sizes may differ.
operator=
	This operator is used to assign new contents to the container by replacing the 	existing contents.
operator ==
operator !=
Note:	operator [] will not work
*/
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
    set<int> s1;
    s1.emplace(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
    s1.insert(50); //duplicate numbers ignored
    s1.insert(10);
    s1.erase(10);
    cout<<s1.count(50)<<endl;       //0
    cout<<s1.size()<<endl;          //5

    // printing set s1
    cout<< "\nThe set s1 is : ";
    for(auto itr=s1.begin();itr != s1.end(); ++itr){
        cout<<'\t'<<*itr;
    }
    cout<<endl;

    // assigning the elements from s1 to s2
    set<int>::iterator itr=s1.begin();
    advance(itr,2);
    advance(itr,-1);
    set<int> s2(itr, s1.end());

    cout << "\nThe set s2 after assign from s1 is : ";
    for(int i:s2)
        cout<<i<<" ";
    cout<<endl;

    cout<<(s1.find(100)!=s1.end());//1 or 0

    // remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30 : ";
    s2.erase(s2.begin(), s2.find(30));
    for(int i:s2)
        cout<<i<<" ";
    cout<<endl;

    // remove element with value 50 in s2
    int num;
    num=s2.erase(50); //return true or false
    cout<< "\ns2.erase(50) : ";
    cout << num << " removed \t" ;
    for(int i:s2)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
