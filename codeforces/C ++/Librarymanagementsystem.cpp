#include<iostream>
#include<string>
using namespace std;


void user(string name,int number,string book){
    char ch;
    string library[10]={"junglebook","Life of pie","GoodvBad","XYZ","WW3","Qwert","Feedit","Up","Apes","LevelUp"};

    cout<<"Enter your name= ";
    cin>>name;
    cout<<"Enter the phonr number";
    cin>>number;
    cout<<"Enter the name of book for searching : ";
    cin>>book;
    bool found = false;
    for (int i = 0; i < 10; i++) {
    if (library[i] == book) {
        found = true;
        break;
         }
    }
    if (found){
    cout << "Book Found!\n Whant to Issue the book y/n";
    cin>>ch;
    if(ch == 'y'){
        cout<<"Your book is issued :"<<book<<endl;
    }
    else{
        return 1;
    }
    }
    else{
        cout << "Book Not Found!\n Availabel book in library are :"<<library[10];
    }
    

}

int main(){
    string library[10]={"junglebook","Life of pie","GoodvBad","XYZ","WW3","Qwert","Feedit","Up","Apes","LevelUp"};
    string name;
    int number;
    string book;
    void user();
    cour
    return 0;
}