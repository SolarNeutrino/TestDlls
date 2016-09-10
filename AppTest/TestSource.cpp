#include <iostream>
using namespace std;
#include "../dll/dll.h"
#include "../feeDll/feeDll.h"

#include <gtest/gtest.h>

TEST(MyTest, fooTest)
{
	EXPECT_EQ(Foo(), 33);
}
TEST(MyTest, feeTest)
{
	EXPECT_EQ(Fee( 2 ), 4);
}


int main(int argc, char *argv[])
{
	int results = 0;
	::testing::InitGoogleTest(&argc, argv);
	results = RUN_ALL_TESTS();

	return results;
}