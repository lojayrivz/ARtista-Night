#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t3936083219;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FaceUpdate
struct  FaceUpdate_t2767690168  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AnimationClip[] FaceUpdate::animations
	AnimationClipU5BU5D_t3936083219* ___animations_2;
	// UnityEngine.Animator FaceUpdate::anim
	Animator_t69676727 * ___anim_3;
	// System.Single FaceUpdate::delayWeight
	float ___delayWeight_4;
	// System.Single FaceUpdate::current
	float ___current_5;

public:
	inline static int32_t get_offset_of_animations_2() { return static_cast<int32_t>(offsetof(FaceUpdate_t2767690168, ___animations_2)); }
	inline AnimationClipU5BU5D_t3936083219* get_animations_2() const { return ___animations_2; }
	inline AnimationClipU5BU5D_t3936083219** get_address_of_animations_2() { return &___animations_2; }
	inline void set_animations_2(AnimationClipU5BU5D_t3936083219* value)
	{
		___animations_2 = value;
		Il2CppCodeGenWriteBarrier(&___animations_2, value);
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(FaceUpdate_t2767690168, ___anim_3)); }
	inline Animator_t69676727 * get_anim_3() const { return ___anim_3; }
	inline Animator_t69676727 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t69676727 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}

	inline static int32_t get_offset_of_delayWeight_4() { return static_cast<int32_t>(offsetof(FaceUpdate_t2767690168, ___delayWeight_4)); }
	inline float get_delayWeight_4() const { return ___delayWeight_4; }
	inline float* get_address_of_delayWeight_4() { return &___delayWeight_4; }
	inline void set_delayWeight_4(float value)
	{
		___delayWeight_4 = value;
	}

	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(FaceUpdate_t2767690168, ___current_5)); }
	inline float get_current_5() const { return ___current_5; }
	inline float* get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(float value)
	{
		___current_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
