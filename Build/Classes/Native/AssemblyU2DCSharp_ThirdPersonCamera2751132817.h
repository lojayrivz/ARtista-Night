#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThirdPersonCamera
struct  ThirdPersonCamera_t2751132817  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ThirdPersonCamera::smooth
	float ___smooth_2;
	// UnityEngine.Transform ThirdPersonCamera::standardPos
	Transform_t3275118058 * ___standardPos_3;
	// UnityEngine.Transform ThirdPersonCamera::frontPos
	Transform_t3275118058 * ___frontPos_4;
	// UnityEngine.Transform ThirdPersonCamera::jumpPos
	Transform_t3275118058 * ___jumpPos_5;
	// System.Boolean ThirdPersonCamera::bQuickSwitch
	bool ___bQuickSwitch_6;

public:
	inline static int32_t get_offset_of_smooth_2() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___smooth_2)); }
	inline float get_smooth_2() const { return ___smooth_2; }
	inline float* get_address_of_smooth_2() { return &___smooth_2; }
	inline void set_smooth_2(float value)
	{
		___smooth_2 = value;
	}

	inline static int32_t get_offset_of_standardPos_3() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___standardPos_3)); }
	inline Transform_t3275118058 * get_standardPos_3() const { return ___standardPos_3; }
	inline Transform_t3275118058 ** get_address_of_standardPos_3() { return &___standardPos_3; }
	inline void set_standardPos_3(Transform_t3275118058 * value)
	{
		___standardPos_3 = value;
		Il2CppCodeGenWriteBarrier(&___standardPos_3, value);
	}

	inline static int32_t get_offset_of_frontPos_4() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___frontPos_4)); }
	inline Transform_t3275118058 * get_frontPos_4() const { return ___frontPos_4; }
	inline Transform_t3275118058 ** get_address_of_frontPos_4() { return &___frontPos_4; }
	inline void set_frontPos_4(Transform_t3275118058 * value)
	{
		___frontPos_4 = value;
		Il2CppCodeGenWriteBarrier(&___frontPos_4, value);
	}

	inline static int32_t get_offset_of_jumpPos_5() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___jumpPos_5)); }
	inline Transform_t3275118058 * get_jumpPos_5() const { return ___jumpPos_5; }
	inline Transform_t3275118058 ** get_address_of_jumpPos_5() { return &___jumpPos_5; }
	inline void set_jumpPos_5(Transform_t3275118058 * value)
	{
		___jumpPos_5 = value;
		Il2CppCodeGenWriteBarrier(&___jumpPos_5, value);
	}

	inline static int32_t get_offset_of_bQuickSwitch_6() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___bQuickSwitch_6)); }
	inline bool get_bQuickSwitch_6() const { return ___bQuickSwitch_6; }
	inline bool* get_address_of_bQuickSwitch_6() { return &___bQuickSwitch_6; }
	inline void set_bQuickSwitch_6(bool value)
	{
		___bQuickSwitch_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
