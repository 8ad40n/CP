#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;

    //push()
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40); 
    s.push(50);

    //pop()
    s.pop();

    //top()
    cout<<"TOP: "<<s.top()<<endl;

    //empty()
    if(s.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
    
    //size()
    cout<<"Size: "<<s.size()<<endl;


    //print
    cout<<"Elements:" ;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    
  }

}
