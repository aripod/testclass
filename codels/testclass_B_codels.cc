#include "actestclass.h"

#include "testclass_c_types.h"

#include <iostream>

#include "Date.h"
//#include "includes.h"
/* --- Task B ----------------------------------------------------------- */


/** Codel InitTaskB of task B.
 *
 * Triggered by testclass_start.
 * Yields to testclass_ether.
 */
genom_event
InitTaskB(genom_context self)
{
    extern Date a;
    std::cout << "Task B: " << a.GetMonth() << "\n";

    return testclass_ether;
}
