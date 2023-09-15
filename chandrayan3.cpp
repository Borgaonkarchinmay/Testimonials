#include<iostream>
using namespace std;

class spaceCraft{
    string model;
    protected: // Security concerns
    int x, y, z;
    char attitude;
    public:
    spaceCraft();
    void showSpecification();
};

spaceCraft :: spaceCraft(){
    x = 0;
    y = 0;
    z = 0;
    attitude = 'N';
    model = "M72";
}

void spaceCraft :: showSpecification(){
    cout<<"Model: "<<model<<endl;
}


class controller : public spaceCraft{
    public:
    void showOrientation();
    void move(char);
    void turn(char);
};

void controller :: showOrientation(){
    cout<<"X: "<<x<<" Y: "<<y<<" Z: "<<z<<endl;
    cout<<"Attitude: "<<attitude<<endl;
}

void controller :: move(char cmd){
    if(cmd == 'f'){
        if(attitude == 'N') y++;
        else if(attitude == 'S') y--;
        else if(attitude == 'E') x++;
        else if(attitude == 'W') x--;
        else if(attitude == 'U') z++;
        else if(attitude == 'D') z--;
    }else if(cmd = 'b'){
        if(attitude == 'N') y--;
        else if(attitude == 'S') y++;
        else if(attitude == 'E') x--;
        else if(attitude == 'W') x++;
        else if(attitude == 'U') z--;
        else if(attitude == 'D') z++;
    }
}

void controller :: turn(char){

}

int main(){
    controller m1;
    m1.showSpecification();
    m1.showOrientation();
    m1.move('f');
    m1.move('f');
    m1.showOrientation();
    m1.move('b');
    m1.showOrientation();
    return 0;
}