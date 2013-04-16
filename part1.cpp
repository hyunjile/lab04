#include <iostream>
#include <string>
#include "mylist.h"

using namespace std;

int main(){
  MyList<int>* list_int = new MyList<int>;
  MyList<string>* list_str = new MyList<string>;

  list_int -> push_back(4);
  list_str -> push_back("tree");
  list_str -> push_back("apple");
  list_int -> push_back(5);
  list_int -> push_back(9);

  cout<<"Integer list has "<<list_int->size()<<" items"<<endl;
  cout<<"Items: ";
  for(int i = 0; i < list_int->size(); i++){
    if((i+1) == list_int->size()){
      cout<<list_int->at(i)<<endl;
    }
    else{
      cout<<list_int->at(i)<<" ";
    }
  }

  cout<<"String list has "<<list_str->size()<<" items"<<endl;
  cout<<"Items: ";
  for(int i = 0; i < list_str->size(); i++){
    if((i+1) == list_str->size()){
      cout<<list_str->at(i)<<endl;
    }
    else{
      cout<<list_str->at(i)<<" ";
    }
  }
  return 0;
}
