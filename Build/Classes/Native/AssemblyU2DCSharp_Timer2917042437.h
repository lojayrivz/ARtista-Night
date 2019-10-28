#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t2917042437  : public MonoBehaviour_t1158329972
{
public:
	// System.DateTime Timer::dayOfEvent
	DateTime_t693205669  ___dayOfEvent_2;
	// System.TimeSpan Timer::ts
	TimeSpan_t3430258949  ___ts_3;
	// System.String Timer::timeleft
	String_t* ___timeleft_4;
	// System.String Timer::temp
	String_t* ___temp_5;

public:
	inline static int32_t get_offset_of_dayOfEvent_2() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___dayOfEvent_2)); }
	inline DateTime_t693205669  get_dayOfEvent_2() const { return ___dayOfEvent_2; }
	inline DateTime_t693205669 * get_address_of_dayOfEvent_2() { return &___dayOfEvent_2; }
	inline void set_dayOfEvent_2(DateTime_t693205669  value)
	{
		___dayOfEvent_2 = value;
	}

	inline static int32_t get_offset_of_ts_3() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___ts_3)); }
	inline TimeSpan_t3430258949  get_ts_3() const { return ___ts_3; }
	inline TimeSpan_t3430258949 * get_address_of_ts_3() { return &___ts_3; }
	inline void set_ts_3(TimeSpan_t3430258949  value)
	{
		___ts_3 = value;
	}

	inline static int32_t get_offset_of_timeleft_4() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___timeleft_4)); }
	inline String_t* get_timeleft_4() const { return ___timeleft_4; }
	inline String_t** get_address_of_timeleft_4() { return &___timeleft_4; }
	inline void set_timeleft_4(String_t* value)
	{
		___timeleft_4 = value;
		Il2CppCodeGenWriteBarrier(&___timeleft_4, value);
	}

	inline static int32_t get_offset_of_temp_5() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___temp_5)); }
	inline String_t* get_temp_5() const { return ___temp_5; }
	inline String_t** get_address_of_temp_5() { return &___temp_5; }
	inline void set_temp_5(String_t* value)
	{
		___temp_5 = value;
		Il2CppCodeGenWriteBarrier(&___temp_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
