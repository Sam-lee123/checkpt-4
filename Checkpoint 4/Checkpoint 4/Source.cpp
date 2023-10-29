// ----------------------
// CIS2542 - Checkpoint 4
// ----------------------
#include <iostream>
#include <deque>
#include <vector>

void PartOne()
{
    // - - - - - - - - - - - - - - - - - - - - - - - -
    // #0 OF 10
    // PLEASE REPLACE THE NAME WITH YOUR NAME INSTEAD!
    // - - - - - - - - - - - - - - - - - - - - - - - -
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "RYAN SLAUGHTERS' SOLUTION TO CHECKPOINT 4" << std::endl;
    std::cout << "------------------------------------------" << std::endl << std::endl;

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #1 OF 10
    // USE A LOOP TO SET UP VECTOR a WITH 400000 ELEMENTS IN ORDER 1, 2, 3, 4, ..., 400000
    // FIRST USE THE reserve() FUNCTION THAT IS PART OF THE VECTOR'S API
    // PUT EACH ELEMENT INTO THE FRONT AS YOU ADD THEM TO THE VECTOR (PUT 1 IN FIRST)
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> a;
    a.reserve(400000);

    for (int i = 1; i <= 400000; ++i) { 
        a.insert(a.begin(), 11- i);
    }
 
   

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #2 OF 10
    // USE A LOOP TO SET UP DEQUE b WITH 400000 ELEMENTS IN ORDER 1, 2, 3, 4, ..., 400000
    // PUT EACH ELEMENT INTO THE FRONT AS YOU ADD THEM TO THE DEQUE (PUT 1 IN FIRST)
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    std::deque<int> b;
    for (int i = 400000; i >= 1; i--) { 
        b.push_front(i);
    }
    
    
    
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #3 OF 10
    // USE A LOOP TO SET UP VECTOR c WITH 400000 ELEMENTS IN ORDER 1, 2, 3, 4, ..., 400000
    // PUT EACH ELEMENT INTO THE FRONT AS YOU ADD THEM TO THE VECTOR (PUT 1 IN FIRST)
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> c; 

    for (int i = 400000; i >= 1; i--) {
        c.insert(c.begin(), i);
    }
   
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #4 OF 10
    // FULLY DESCRIBE AND COMPARE THE SPEEDS IN WHICH THE THREE OPERATIONS WILL PERFORM
    // THEIR DUTIES AND WHY. EITHER USE A COMMENT, OR PRINT YOUR DESCRIPTION TO THE SCREEN
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
    //Deques will used linked lists to continously add data, while vectors are connected in blocks of data where memory must be copied between blocks. 
    // For small amount of data, there is not as much difference between the two (vectors are better) but deques will have a definite advatage for 400000 integers.

    //The reserve function is used to preallogate data so it will be faster

    //Fastest ---------------------------> Slowest
    //Deques (#2) >  Resereve Vector (#1) > Vector (#3)
}

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
    for (int i = 1; i <= 400000; ++i) {
        b.push_back(i); 
    }
  

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #7 OF 10
    // FULLY DESCRIBE WHICH OF THE TWO OPERATIONS IS SLOWER THAN THE OTHER AND WHY.
    // EITHER USE A COMMENT, OR PRINT YOUR DESCRIPTION TO THE SCREEN
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
    // push_back on a vector is slower than push_back operation on a deque, because
    //as an element is added to the back of a vector, the vector may need to reallocates storage.
    //Vectors are designed to store their elements continously in memory. When the vector's capacity is reached 
    //a vector must create new blocks for its data, is if a vector is large like 400000, then its better to use deque

    // Deques do not need to reallocate storage when elements are added to the back because deques in a linked list.
    //When an element is added to the back of a deque, a new node is added to the end of the linked list.
    // This is much faster.
  
}

void PartThree()
{
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #8 OF 10
    // INSERT VALUES {3, 2, 1} BETWEEN THE 4 AND THE 0 VALUES IN THE VECTOR a
    // FOR EXAMPLE { 9, 8, 7, 6, 5, 4, 0 } becomes { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> a { 9, 8, 7, 6, 5, 4, 0 };
    auto it = std::find(a.begin(), a.end(), 4);
    if (it != a.end()) {
        a.insert(it + 1, { 3, 2, 1 });
    }

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // #9 OF 10
    // INSERT VALUES {3, 2, 1} BETWEEN THE 4 AND THE 0 VALUE IN THE DEQUE b
    // FOR EXAMPLE { 9, 8, 7, 6, 5, 4, 0 } becomes { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    std::deque<int*> b { new int(9), new int(8), new int(7), new int(6),
        new int(5), new int(4), new int(0) };
    
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
