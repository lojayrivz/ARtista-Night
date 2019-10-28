#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.InputField
struct InputField_t1631627530;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Input1
struct  Input1_t1446231229  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField Input1::inputed
	InputField_t1631627530 * ___inputed_2;

public:
	inline static int32_t get_offset_of_inputed_2() { return static_cast<int32_t>(offsetof(Input1_t1446231229, ___inputed_2)); }
	inline InputField_t1631627530 * get_inputed_2() const { return ___inputed_2; }
	inline InputField_t1631627530 ** get_address_of_inputed_2() { return &___inputed_2; }
	inline void set_inputed_2(InputField_t1631627530 * value)
	{
		___inputed_2 = value;
		Il2CppCodeGenWriteBarrier(&___inputed_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
