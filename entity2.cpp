#include <iostream>
using namespace std;

class Entity{
private:
  int X,Y;

  void Print() {return ; }
public:
  Entity()
{
    X=0;
    Print();
  }
};

class Player:public Entity{
public:
  Player(){
  }
};

int main()
{
  Entity e;
  Player a;
  return 0;
}

