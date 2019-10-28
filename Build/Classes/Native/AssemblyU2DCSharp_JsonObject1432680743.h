#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_Object1021602117.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JsonObject
struct  JsonObject_t1432680743  : public Object_t1021602117
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> JsonObject::m_dict
	Dictionary_2_t309261261 * ___m_dict_2;

public:
	inline static int32_t get_offset_of_m_dict_2() { return static_cast<int32_t>(offsetof(JsonObject_t1432680743, ___m_dict_2)); }
	inline Dictionary_2_t309261261 * get_m_dict_2() const { return ___m_dict_2; }
	inline Dictionary_2_t309261261 ** get_address_of_m_dict_2() { return &___m_dict_2; }
	inline void set_m_dict_2(Dictionary_2_t309261261 * value)
	{
		___m_dict_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_dict_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
