#include<iostream>
using namespace std;
class Student{
    int roll_no;
    string Name;
    public:
    void insert(){
        roll_no=17;
        cout<<roll_no;
    }
    void insertName() {
        Name="OM";
        cout<<Name;
    }
    
};
int main() {
    Student obj;
    obj.insert();
    obj.insertName();
    
    return 0;
}
// by giving the parameter
#include<iostream>
using namespace std;
class Student{
    int roll_no;
    string Name;
    public:
    void insert(int no){
        roll_no=no;
        cout<<roll_no;
    }
    void insertName(string nam) {
        Name=nam;
        cout<<Name;
    }
    
};
int main() {
    Student obj;
    obj.insert(17);
    obj.insertName("OM");
    
    return 0;
}