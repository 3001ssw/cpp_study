#include "pch.h"

#include "../Project1/SomthingClass.h"
TEST(SomthingClass, SomthingClassTest1) {
	SCOPED_TRACE(::testing::Message() << "Insert Paramter Value 10, 0");
	SomethingClass::DoPrint(10, 0);
}