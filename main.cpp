#include <iostream>
#include "class.h"
#include "eater.h"

int main(){
    Apple app = Apple ();
    app.get_info ();
    //app.bite();
    //app.throw_away();
    
    Eater person = Eater(20, 2, 55);
    person.eat_an_apple(app);

    app.get_info();

    return 0;
}