//
// Created by Tay on 4/1/2017.
//

#include "TextPool.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {

    pool::TextPool pool{"abc", "efg", "hij", "klmn", "oprst", "abc", "abc", "kllll"};
    cout << pool.StoredStringCount() << endl;
    pool::TextPool moved_pool;
    cout << "po utworzeniu: " << moved_pool.StoredStringCount() << endl;
    moved_pool = std::move(pool);
    cout << "po przypisaniu: " << moved_pool.StoredStringCount() << endl;
    cout << pool.StoredStringCount();
    pool.Intern("dsdssd");
    moved_pool.Intern("dsdssd");
    return 0;
}
