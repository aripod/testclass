#include "actestclass.h"

#include "testclass_c_types.h"

#include <iostream>

#include "Date.h"
#include "includes.h"
/* --- Task A ----------------------------------------------------------- */


/** Codel InitTaskA of task A.
 *
 * Triggered by testclass_start.
 * Yields to testclass_ether.
 */
genom_event
InitTaskA(genom_context self)
{
    std::cout << "Task A: " << a.GetMonth() << "\n";
    a.SetDate(1,1,1);
    std::cout << "Task A: " << a.GetMonth() << "\n";

    return testclass_ether;
}
