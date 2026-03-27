#include "pch.h"
#include "../Project1/SomthingClass.h"
#include "Macros.h"
TEST(SomthingClass, SomthingClassTest1) {
    EXPECT_NO_CRASH(SomethingClass::DoPrint(10, 0));

	//bool bCrashed = false;
	//[&]()
	//{
	//	__try
	//	{
	//		SomethingClass::DoPrint(10, 0);
	//	}
	//	__except (EXCEPTION_EXECUTE_HANDLER)
	//	{
	//		bCrashed = true;
	//	}
	//}();
    //
	//if (bCrashed)
	//{
	//	ADD_FAILURE() << "에러 발생!";
	//}
}