#ifndef Nugget_hpp
#define Nugget_hpp

#include <iostream>
#include <iomanip>

using namespace std;

struct Nugget
{
    bool x;
    int y;
};

ostream &operator<<(ostream &dst, const Nugget &o);
istream &operator>>(istream &src, Nugget &o);


/*

// Should print x and then y, seperated by a space
// See test_Nugget_io_in.txt for examples.
ostream &operator<<(ostream &dst, const Nugget &o)
{
  dst << o.x << " " << o.y ;
  return dst;
}
// TODO : Create a definition

istream &operator>>(istream &src, Nugget &o)
{
  //src >> o.x >> o.y ;
  //return src;
// TODO : Create a definition
    src >> o.x;
    cin.ignore();
    src >> o.y;
    return src;
}

*/


#endif
