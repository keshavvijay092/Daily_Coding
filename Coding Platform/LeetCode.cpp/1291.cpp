#include<iostream>
#include<vector>
#include<cmath>

// vector header file is used for vector - creation, and push,pop function  
// cmath is use for 

using namespace std;
struct Node{
    int val;
    Node* next;
    Node(){
        val = 0;
        next = NULL;
    }
    Node(int x)
    {
        val = x;
        next = NULL;
    }
    Node(int x,Node* nextNode)
    {
        val = x;
        next = nextNode;
    }
};

class Solution{
    public:
    vector<int> store(Node* head)
    {
        Node* temp = head;
        vector<int> ans;
        while(temp)
        {
            int val = temp->val;
            temp = temp->next;
            ans.push_back(val);
        }
        return ans;
    }
     int getDecimalValue(Node* head) {
        vector<int> val = store(head);
        int sum = 0;
        int n = val.size();
        for(int i = 0; i < n; i++)
        {
            sum += (pow(2, n - i - 1) * val[i]);
        }
        return sum;
    }
};


int main()
{
   Node* head = new Node(1);
   head->next = new Node(0);
   head->next->next = new Node(1);

     Solution s;


   int decimalValue = s.getDecimalValue(head);
    // Print the result
    cout << "The decimal value of the binary number represented by the linked list is: " << decimalValue << endl;

    // Don't forget to delete the linked list when you're done
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0; // Print the result
    cout << "The decimal value of the binary number represented by the linked list is: " << decimalValue << endl;

    // Don't forget to delete the linked list when you're done
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}