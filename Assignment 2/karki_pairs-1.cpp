#include <iostream>
using namespace std;

int main() {
    // int stop = 20;
    int a = 1;
    int b = 1;
    while (a>0) {
        while (b <= (a+1)) {
            cout<<a<<" "<<b<<endl;
            b++;
        }
        int temp = 1;
        while(temp<a){
            cout<<temp<<" "<<(b-1)<<endl;
            temp++;
        }
        b = 1;
        a++;
    }
    return 0;
}