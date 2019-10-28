#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Smooth_Movement
struct  Smooth_Movement_t3843189446  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Smooth_Movement::ARcam
	GameObject_t1756533147 * ___ARcam_2;
	// UnityEngine.Transform Smooth_Movement::target
	Transform_t3275118058 * ___target_3;
	// System.Single Smooth_Movement::x
	float ___x_4;
	// System.Single Smooth_Movement::y
	float ___y_5;
	// System.Single Smooth_Movement::z
	float ___z_6;

public:
	inline static int32_t get_offset_of_ARcam_2() { return static_cast<int32_t>(offsetof(Smooth_Movement_t3843189446, ___ARcam_2)); }
	inline GameObject_t1756533147 * get_ARcam_2() const { return ___ARcam_2; }
	inline GameObject_t1756533147 ** get_address_of_ARcam_2() { return &___ARcam_2; }
	inline void set_ARcam_2(GameObject_t1756533147 * value)
	{
		___ARcam_2 = value;
		Il2CppCodeGenWriteBarrier(&___ARcam_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(Smooth_Movement_t3843189446, ___target_3)); }
	inline Transform_t3275118058 * get_target_3() const { return ___target_3; }
	inline Transform_t3275118058 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t3275118058 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(Smooth_Movement_t3843189446, ___x_4)); }
	inline float get_x_4() const { return ___x_4; }
	inline float* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(float value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(Smooth_Movement_t3843189446, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_z_6() { return static_cast<int32_t>(offsetof(Smooth_Movement_t3843189446, ___z_6)); }
	inline float get_z_6() const { return ___z_6; }
	inline float* get_address_of_z_6() { return &___z_6; }
	inline void set_z_6(float value)
	{
		___z_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
