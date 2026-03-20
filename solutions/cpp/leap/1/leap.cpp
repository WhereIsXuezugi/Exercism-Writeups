#include "leap.h"
#include <string>

namespace leap {

// TODO: add your solution here
    bool is_leap_year(int year) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {return true;}
            return false;
        }
        if ( year % 4 == 0 ) {return true;}
        return false;
    }

}  // namespace leap
