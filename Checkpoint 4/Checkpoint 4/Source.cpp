// ----------------------
// CIS2542 - Checkpoint 4
// ----------------------
#include <iostream>
#include <deque>
#include <vector>

void PartOne()
{

    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Samuel Lees' SOLUTION TO CHECKPOINT 4" << std::endl;
    std::cout << "------------------------------------------" << std::endl << std::endl;

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #1 OF 10
    // USE A LOOP TO SET UP VECTOR a WITH 400000 ELEMENTS IN ORDER 1, 2, 3, 4, ..., 400000
    // FIRST USE THE reserve() FUNCTION THAT IS PART OF THE VECTOR'S API
    // PUT EACH ELEMENT INTO THE FRONT AS YOU ADD THEM TO THE VECTOR (PUT 1 IN FIRST)
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    std::vector<int> a;
    a.reserve(400000); // Reserve memory for efficiency
    for (int i = 1; i <= 400000; ++i) {
        a.insert(a.begin(), i);
    }




    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #2 OF 10
    // USE A LOOP TO SET UP DEQUE b WITH 400000 ELEMENTS IN ORDER 1, 2, 3, 4, ..., 400000
    // PUT EACH ELEMENT INTO THE FRONT AS YOU ADD THEM TO THE DEQUE (PUT 1 IN FIRST)
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    std::deque<int> b;
    for (int i = 1; i <= 400000; ++i) {
        b.push_front(i);
    }


    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #3 OF 10
    // USE A LOOP TO SET UP VECTOR c WITH 400000 ELEMENTS IN ORDER 1, 2, 3, 4, ..., 400000
    // PUT EACH ELEMENT INTO THE FRONT AS YOU ADD THEM TO THE VECTOR (PUT 1 IN FIRST)
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> c;
    for (int i = 1; i <= 400000; ++i) {
        c.insert(c.begin(), i);
    }

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #4 OF 10
    // FULLY DESCRIBE AND COMPARE THE SPEEDS IN WHICH THE THREE OPERATIONS WILL PERFORM
    // THEIR DUTIES AND WHY. EITHER USE A COMMENT, OR PRINT YOUR DESCRIPTION TO THE SCREEN
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
}
/*
Comparing operations for inserting elements at the front of a vector, and deque. Deque is fastest, then reserved vector, then the vector.
the vector's insert operation with iterators is the slowest because it has to shift elements to make space for the new element at the front.
Deque's push_front is faster than the vector for adding elements to the front because it doesn't require shifting elements. 
reserved vector is faster than vector because it is preallocated. 
*/


    void PartTwo()
{
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #5 OF 10
    // USE A LOOP TO SET UP DEQUE a WITH 400000 ELEMENTS IN ORDER 1, 2, 3, 4, ..., 400000
    // PUT EACH ELEMENT INTO THE BACK AS YOU ADD THEM TO THE DEQUE (PUT 1 IN FIRST)
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    std::deque<int> a;
    for (int i = 1; i <= 400000; ++i) {
        a.push_back(i);
    }


    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #6 OF 10
    // USE A LOOP TO SET UP VECTOR b WITH 400000 ELEMENTS IN ORDER 1, 2, 3, 4, ..., 400000
    // PUT EACH ELEMENT INTO THE BACK AS YOU ADD THEM TO THE VECTOR (PUT 1 IN FIRST)
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> b;
    b.reserve(400000);
    for (int i = 1; i <= 400000; ++i) {
        b.push_back(i);
    }



    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #7 OF 10
    // FULLY DESCRIBE WHICH OF THE TWO OPERATIONS IS SLOWER THAN THE OTHER AND WHY.
    // EITHER USE A COMMENT, OR PRINT YOUR DESCRIPTION TO THE SCREEN
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    /*
    * push_back on deque is faster than push_back on vector.
    When adding an element to the back of a vector, the vector needs to reallocate storage. 
    vectors store elements in a single continuous block of memory, so when 
    a vectors capacity is reached, it must create a new block. 
    if a vector is SUPER big like 4000, its better to use a deques, because
    deques do not reallocate memory, cuz they add elements to the back as well. 
    when elements are added to the back, a new node is added to the end. (Which is faster) 
    */
}

void PartThree()
{
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #8 OF 10
    // INSERT VALUES {3, 2, 1} BETWEEN THE 4 AND THE 0 VALUES IN THE VECTOR a
    // FOR EXAMPLE { 9, 8, 7, 6, 5, 4, 0 } becomes { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> a{ 9, 8, 7, 6, 5, 4, 0 };
    auto it = std::find(a.begin(), a.end(), 4);
    if (it != a.end()) {
        a.insert(it, 3);
        a.insert(it, 2);
        a.insert(it, 1);
    }

   
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #9 OF 10
    // INSERT VALUES {3, 2, 1} BETWEEN THE 4 AND THE 0 VALUE IN THE DEQUE b
    // FOR EXAMPLE { 9, 8, 7, 6, 5, 4, 0 } becomes { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    std::deque<int*> b{ new int(9), new int(8), new int(7), new int(6),
                              new int(5), new int(4), new int(0) };

    //just insert this???
    b.insert(b.begin() + 6, { new int(3), new int(2), new int(1) });


    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #10 OF 10
    // PROPERLY EMPTY/CLEAR OUT THE VECTOR a
    // PROPERLY EMPTY/CLEAR OUT THE DEQUE b
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    a.clear();
    b.clear();
}

// -------------------------------------------------------------------------------------
// You may not touch this code below... Except to comment out the pause event if need be
// -------------------------------------------------------------------------------------
int main()
{
    // Work with the fronts of the vector and deque data structures
    PartOne();

    // Work with the backs of the vector and deque data structures
    PartTwo();

    // Work with inserting and clearing the vector and deque data structures
    PartThree();

    // Cleanup
    system("PAUSE");
    return 0;
}