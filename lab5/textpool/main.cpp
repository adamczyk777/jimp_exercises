//
// Created by Tay on 4/1/2017.
//

#include "TextPool.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {

    /*pool::TextPool test;

    test.Intern("asd");
    test.Intern("asd");
    test.Intern("asdf");
    cout << test.StoredStringCount();
    pool::TextPool test2;
    test2 = test;
    test2.Intern("dsd");
    cout << test2.StoredStringCount();
*/

    pool::TextPool pool{"abc", "efg", "hij", "klmn", "oprst", "abc", "abc", "kllll"};
    cout << pool.StoredStringCount() << endl;
    pool::TextPool moved_pool;
    cout << moved_pool.StoredStringCount() << endl;
    moved_pool = std::move(pool); // tak jakby to nie dzialalo, dziala odwrrotnie
    cout << moved_pool.StoredStringCount() << endl;
    cout << pool.StoredStringCount();
    pool.Intern("dsdssd");
    moved_pool.Intern("dsdssd");
    //EXPECT_EQ(6, moved_pool.StoredStringCount());
    //EXPECT_EQ(0, pool.StoredStringCount());
    //EXPECT_EQ("abc", pool.Intern("abc"));
    //EXPECT_EQ("abc", moved_pool.Intern("abc"));
    //EXPECT_EQ(1,
    //cout << pool.StoredStringCount();
    //cout << moved_pool.StoredStringCount();
    //EXPECT_EQ(6, moved_pool.StoredStringCount());
    return 0;
}
