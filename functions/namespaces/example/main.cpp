void fn(void){return;}
// same function is "defined" in the fn.cpp program
// this violates the ODR(one definition rule), that a function should not be defined more than one in a file or a program

// liker will throw an error

int main(){ return 0; }