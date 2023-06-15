#include <iostream>
using namespace std;

template<class T>
class Message {
private:
    T obj;

public:
    Message(T obj) {
        this->obj = obj;
    }
    void print(){
        cout << obj << endl;
    }
};

int main() {

    Message<string> msg("Hello World");
    msg.print();
    return 0;

}
