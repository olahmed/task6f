/**
 ******************************************************************************
 * @file           : task 6
 * @author         : ola ahmed
 * @brief          : pointers
 ******************************************************************************
 */
/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ********************** Global Variables Section Start ************** */
     const char* months[1][12] = {{"January", "February", "March", "April", "May", "June",
                                  "July", "August", "September", "October", "November", "December"}};

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Declaration Section Start ************ */

/* ********************** Global Declaration  Section End   *********** */

/* ********************** Sub-Program Declarations Section Start ****** *///functions

/* ********************** Sub-Program Declarations Section End ******** */

/* ********************** Sub-Program Section Start ******************* */
   int main()
{
    int monthNumber;
    printf("Enter the number of the month (1:12): ");
    scanf("%d", &monthNumber);
    if (monthNumber>=1 && monthNumber<=12)
        {
            printf("the name of the month is %s\n", *(months[0] + monthNumber - 1));
        }
    else
        {
            printf("invalid month number");
        }
    return 0;
}
/* ********************** Sub-Program Section End ******************** */

/* ********************** Sub-Program definition Section Start ******* */


/* ********************** Sub-Program definitions Section End ******** */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      20 feb 2024          num5
*/
