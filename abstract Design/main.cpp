#include <iostream>
#include "bird.h"
using namespace std;

void birdWork(Bird *&bird){
    bird -> eat();
    bird -> fly();
}

int main(){
    // Bird *bird = new ssparrow();// for sparrow
    
    // it is called abstraction that we changed our 
    //all output by changing just one line. from sparrow 
    //to eagle.

    // this is the magic of abstract class.
    //otherwise we would rather doing the each and every
    //occurrences of Bird to Sparrow for sparrow and Eagle for eagle.
    
    Bird *bird = new Eagle();// for eagle

    // sparrow *sp = new sparrow();
    // sp ->eat(); 
    // it throws an error bcz
    // we have interface named as Bird so
    // via object we can not call the sparrow.
    birdWork(bird);// for public
    return 0;
}