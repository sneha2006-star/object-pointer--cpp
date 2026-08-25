#include <iostream>
using namespace std;
class cricketer{
    public:
    string  name;
    int runs;
    float avg;

    cricketer(string name, int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;

    }

};
int main(){
    cricketer c1("virat kohli" ,25000,55.7);
    cricketer* p1 = &c1;
    cout<<(*p1).avg<<endl;//c1.avg
    (*p1).runs= 24000; //p1->runs
    cout<<c1.runs<<endl;
}
