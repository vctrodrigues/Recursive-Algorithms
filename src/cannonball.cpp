#include "../include/cannonball.h"

namespace cb
{

    int count_cannonballs(int height, int sum) {
        if(height == 0) {
            return sum;
        } else {
            return count_cannonballs(height-1, sum+(height*height));
        }
    }

} // cb
