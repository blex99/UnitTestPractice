/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
	bool res1= obj.isPalindrome("Not as cool as palindrome");
    ASSERT_FALSE(res1);

    bool res2= obj.isPalindrome("abcba");
    ASSERT_TRUE(res2);

    bool res3= obj.isPalindrome("[]");
    ASSERT_FALSE(res3);

    bool res4= obj.isPalindrome("a");
    ASSERT_TRUE(res4);

    bool res5= obj.isPalindrome("xX");
    ASSERT_TRUE(res5);

    bool res6= obj.isPalindrome("/(-.-)^");
    ASSERT_FALSE(res6);

    bool res7= obj.isPalindrome("WontLoVersREvoLtNOw");
    ASSERT_TRUE(res7);

	// doesnt ignore spaces
    bool res8= obj.isPalindrome("Wont LoVers REvoLt NOw");
    ASSERT_FALSE(res8);
}

TEST(PracticeTest, sortDescending)
{
    Practice obj;
	int a, b, c;

	a = 1;
	b = 10;
	c = 100;
	obj.sortDescending(a,   b,  c);
	ASSERT_GE(a, b);
	ASSERT_GE(b, c);
	ASSERT_GE(a, c);

	a = 1000;
	b = 3;
	c = 10000;
	obj.sortDescending(a,   b,  c);
	ASSERT_GE(a, b);
	ASSERT_GE(b, c);
	ASSERT_GE(a, c);

	a = 100;
	b = 99;
	c = 98;
	obj.sortDescending(a,   b,  c);
	ASSERT_GE(a, b);
	ASSERT_GE(b, c);
	ASSERT_GE(a, c);
}























