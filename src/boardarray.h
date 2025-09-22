#include <iostream>
#include "board.h"
#define SIZE 5
using namespace std;

class BoardArray : public Board {
    Entry* array;
    int index;

    public:
        BoardArray() {
            array = new Entry[SIZE];
            index = 0;
        }

        void add(Entry* entry) {
            // TODO: IMPLEMENT THIS FUNCTION
            // ALGORITHM IS PROVIDED IN INSTRUCTIONS.TXT
<<<<<<< HEAD


=======
          //  Entry existing  = array[0-4];
   /*Algorithm (in order):
        a. Traverse the array up until the last element
        b. Compare (using the bool compare() function of Entry) the `entry` to be added to the `existing entry` currently traversed.
        c. To get the current entry, you can access it via `array[i * sizeof(Entry)]` or `*(array + i * sizeof(Entry)). I will discuss first why is this the case.
        d. If `entry` to be added is indeed greater than the existing one, `SHIFT RIGHT`
        e. After shift right, add the new entry to the correct position.
*/
    //  if(Entry  compare(array[i])){
      //}

        if(int i = 0; i < 5; i++){
            array[i];
        }

            return;
>>>>>>> cc484e3abe2196af2b14d676c5c5361a680ebf9d
        }

        void print() {
            for (int i = 0; i < index; i++) {
                cout << i + 1 << ". ";
                array[i].print();
            }
        }
};