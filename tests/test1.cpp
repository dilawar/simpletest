/*
 * ==============================================================================
 *
 *       Filename:  test1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 20 May 2014 12:34:23  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dilawar Singh (), dilawar@ee.iitb.ac.in
 *   Organization:  
 *
 * ==============================================================================
 */

#include "../simpletest.hpp"

#include <iostream>
using namespace std;

int main()
{
    /* Following two macros takes two arguments: first is condition and second
     * is message to print on console in case of failture
     */
    EXPECT_TRUE( 1 == 2, "1 == 2 must fail");

    /* TO instroduce colors into user-messages, sorround them with ` */
    EXPECT_TRUE( 1 == 2, "`1 == 2 must fail`");

    EXPECT_FALSE( 2 != 2, "2 != 2 must also fail");


    /* Following macros takes three argument and they try to mimic GTEST macros. */
    EXPECT_EQ(2, 3, "This should fail");

    /* This is colored. */
    EXPECT_NEQ(2, 2, "`I was expecting not equal to 2`");

    int expected = 3;
    EXPECT_GTE(2, expected, "I was expecting greater than equal to" << expected );
    EXPECT_GT(3, expected, "I was expecting greater than " << expected);

    EXPECT_LTE(5, expected, "I was expecting less than equal to " << expected);
    EXPECT_LT(3, expected, "I was expecting less than "<< expected);

    /* If a marco begins with ASSERT_ rather than EXPECT_ then it throws an
     * exception.
     */
    ASSERT_LT(3, expected, "I was expecting less than " << expected );

    return 0;
}
