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


/* --- Activity a ------------------------------------------------------- */

/** Codel aStart of activity a.
 *
 * Triggered by testclass_start.
 * Yields to testclass_ether.
 */
genom_event
aStart(genom_context self)
{
    extern int first;

    std::cout << "Task A: " << a.GetMonth() << "\n";

    std::cout << "First: \n" << first;
    first = 20;
    a.SetDate(first,1,1);

    return testclass_ether;
}
