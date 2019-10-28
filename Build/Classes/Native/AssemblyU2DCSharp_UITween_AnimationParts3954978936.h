#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts_State2983100523.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts_EndTweenC2528583118.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts_CallbackC3327148979.h"

// UITween.AnimationParts/DisableOrDestroy
struct DisableOrDestroy_t2349129871;
// UITween.PositionPropetiesAnim
struct PositionPropetiesAnim_t2935382029;
// UITween.ScalePropetiesAnim
struct ScalePropetiesAnim_t4139284246;
// UITween.RotationPropetiesAnim
struct RotationPropetiesAnim_t4287844354;
// UITween.FadePropetiesAnim
struct FadePropetiesAnim_t586868896;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITween.AnimationParts
struct  AnimationParts_t3954978936  : public Il2CppObject
{
public:
	// UITween.PositionPropetiesAnim UITween.AnimationParts::PositionPropetiesAnim
	PositionPropetiesAnim_t2935382029 * ___PositionPropetiesAnim_1;
	// UITween.ScalePropetiesAnim UITween.AnimationParts::ScalePropetiesAnim
	ScalePropetiesAnim_t4139284246 * ___ScalePropetiesAnim_2;
	// UITween.RotationPropetiesAnim UITween.AnimationParts::RotationPropetiesAnim
	RotationPropetiesAnim_t4287844354 * ___RotationPropetiesAnim_3;
	// UITween.FadePropetiesAnim UITween.AnimationParts::FadePropetiesAnim
	FadePropetiesAnim_t586868896 * ___FadePropetiesAnim_4;
	// System.Boolean UITween.AnimationParts::UnscaledTimeAnimation
	bool ___UnscaledTimeAnimation_5;
	// System.Boolean UITween.AnimationParts::SaveState
	bool ___SaveState_6;
	// System.Boolean UITween.AnimationParts::AtomicAnimation
	bool ___AtomicAnimation_7;
	// UITween.AnimationParts/State UITween.AnimationParts::ObjectState
	int32_t ___ObjectState_8;
	// UITween.AnimationParts/EndTweenClose UITween.AnimationParts::EndState
	int32_t ___EndState_9;
	// UITween.AnimationParts/CallbackCall UITween.AnimationParts::CallCallback
	int32_t ___CallCallback_10;
	// UnityEngine.Events.UnityEvent UITween.AnimationParts::IntroEvents
	UnityEvent_t408735097 * ___IntroEvents_11;
	// UnityEngine.Events.UnityEvent UITween.AnimationParts::ExitEvents
	UnityEvent_t408735097 * ___ExitEvents_12;
	// UnityEngine.Events.UnityEvent UITween.AnimationParts::CallBackObject
	UnityEvent_t408735097 * ___CallBackObject_13;
	// System.Boolean UITween.AnimationParts::CheckNextFrame
	bool ___CheckNextFrame_14;
	// System.Boolean UITween.AnimationParts::CallOnThisFrame
	bool ___CallOnThisFrame_15;
	// System.Single UITween.AnimationParts::animationDuration
	float ___animationDuration_16;

public:
	inline static int32_t get_offset_of_PositionPropetiesAnim_1() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___PositionPropetiesAnim_1)); }
	inline PositionPropetiesAnim_t2935382029 * get_PositionPropetiesAnim_1() const { return ___PositionPropetiesAnim_1; }
	inline PositionPropetiesAnim_t2935382029 ** get_address_of_PositionPropetiesAnim_1() { return &___PositionPropetiesAnim_1; }
	inline void set_PositionPropetiesAnim_1(PositionPropetiesAnim_t2935382029 * value)
	{
		___PositionPropetiesAnim_1 = value;
		Il2CppCodeGenWriteBarrier(&___PositionPropetiesAnim_1, value);
	}

	inline static int32_t get_offset_of_ScalePropetiesAnim_2() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___ScalePropetiesAnim_2)); }
	inline ScalePropetiesAnim_t4139284246 * get_ScalePropetiesAnim_2() const { return ___ScalePropetiesAnim_2; }
	inline ScalePropetiesAnim_t4139284246 ** get_address_of_ScalePropetiesAnim_2() { return &___ScalePropetiesAnim_2; }
	inline void set_ScalePropetiesAnim_2(ScalePropetiesAnim_t4139284246 * value)
	{
		___ScalePropetiesAnim_2 = value;
		Il2CppCodeGenWriteBarrier(&___ScalePropetiesAnim_2, value);
	}

	inline static int32_t get_offset_of_RotationPropetiesAnim_3() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___RotationPropetiesAnim_3)); }
	inline RotationPropetiesAnim_t4287844354 * get_RotationPropetiesAnim_3() const { return ___RotationPropetiesAnim_3; }
	inline RotationPropetiesAnim_t4287844354 ** get_address_of_RotationPropetiesAnim_3() { return &___RotationPropetiesAnim_3; }
	inline void set_RotationPropetiesAnim_3(RotationPropetiesAnim_t4287844354 * value)
	{
		___RotationPropetiesAnim_3 = value;
		Il2CppCodeGenWriteBarrier(&___RotationPropetiesAnim_3, value);
	}

	inline static int32_t get_offset_of_FadePropetiesAnim_4() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___FadePropetiesAnim_4)); }
	inline FadePropetiesAnim_t586868896 * get_FadePropetiesAnim_4() const { return ___FadePropetiesAnim_4; }
	inline FadePropetiesAnim_t586868896 ** get_address_of_FadePropetiesAnim_4() { return &___FadePropetiesAnim_4; }
	inline void set_FadePropetiesAnim_4(FadePropetiesAnim_t586868896 * value)
	{
		___FadePropetiesAnim_4 = value;
		Il2CppCodeGenWriteBarrier(&___FadePropetiesAnim_4, value);
	}

	inline static int32_t get_offset_of_UnscaledTimeAnimation_5() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___UnscaledTimeAnimation_5)); }
	inline bool get_UnscaledTimeAnimation_5() const { return ___UnscaledTimeAnimation_5; }
	inline bool* get_address_of_UnscaledTimeAnimation_5() { return &___UnscaledTimeAnimation_5; }
	inline void set_UnscaledTimeAnimation_5(bool value)
	{
		___UnscaledTimeAnimation_5 = value;
	}

	inline static int32_t get_offset_of_SaveState_6() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___SaveState_6)); }
	inline bool get_SaveState_6() const { return ___SaveState_6; }
	inline bool* get_address_of_SaveState_6() { return &___SaveState_6; }
	inline void set_SaveState_6(bool value)
	{
		___SaveState_6 = value;
	}

	inline static int32_t get_offset_of_AtomicAnimation_7() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___AtomicAnimation_7)); }
	inline bool get_AtomicAnimation_7() const { return ___AtomicAnimation_7; }
	inline bool* get_address_of_AtomicAnimation_7() { return &___AtomicAnimation_7; }
	inline void set_AtomicAnimation_7(bool value)
	{
		___AtomicAnimation_7 = value;
	}

	inline static int32_t get_offset_of_ObjectState_8() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___ObjectState_8)); }
	inline int32_t get_ObjectState_8() const { return ___ObjectState_8; }
	inline int32_t* get_address_of_ObjectState_8() { return &___ObjectState_8; }
	inline void set_ObjectState_8(int32_t value)
	{
		___ObjectState_8 = value;
	}

	inline static int32_t get_offset_of_EndState_9() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___EndState_9)); }
	inline int32_t get_EndState_9() const { return ___EndState_9; }
	inline int32_t* get_address_of_EndState_9() { return &___EndState_9; }
	inline void set_EndState_9(int32_t value)
	{
		___EndState_9 = value;
	}

	inline static int32_t get_offset_of_CallCallback_10() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___CallCallback_10)); }
	inline int32_t get_CallCallback_10() const { return ___CallCallback_10; }
	inline int32_t* get_address_of_CallCallback_10() { return &___CallCallback_10; }
	inline void set_CallCallback_10(int32_t value)
	{
		___CallCallback_10 = value;
	}

	inline static int32_t get_offset_of_IntroEvents_11() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___IntroEvents_11)); }
	inline UnityEvent_t408735097 * get_IntroEvents_11() const { return ___IntroEvents_11; }
	inline UnityEvent_t408735097 ** get_address_of_IntroEvents_11() { return &___IntroEvents_11; }
	inline void set_IntroEvents_11(UnityEvent_t408735097 * value)
	{
		___IntroEvents_11 = value;
		Il2CppCodeGenWriteBarrier(&___IntroEvents_11, value);
	}

	inline static int32_t get_offset_of_ExitEvents_12() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___ExitEvents_12)); }
	inline UnityEvent_t408735097 * get_ExitEvents_12() const { return ___ExitEvents_12; }
	inline UnityEvent_t408735097 ** get_address_of_ExitEvents_12() { return &___ExitEvents_12; }
	inline void set_ExitEvents_12(UnityEvent_t408735097 * value)
	{
		___ExitEvents_12 = value;
		Il2CppCodeGenWriteBarrier(&___ExitEvents_12, value);
	}

	inline static int32_t get_offset_of_CallBackObject_13() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___CallBackObject_13)); }
	inline UnityEvent_t408735097 * get_CallBackObject_13() const { return ___CallBackObject_13; }
	inline UnityEvent_t408735097 ** get_address_of_CallBackObject_13() { return &___CallBackObject_13; }
	inline void set_CallBackObject_13(UnityEvent_t408735097 * value)
	{
		___CallBackObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___CallBackObject_13, value);
	}

	inline static int32_t get_offset_of_CheckNextFrame_14() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___CheckNextFrame_14)); }
	inline bool get_CheckNextFrame_14() const { return ___CheckNextFrame_14; }
	inline bool* get_address_of_CheckNextFrame_14() { return &___CheckNextFrame_14; }
	inline void set_CheckNextFrame_14(bool value)
	{
		___CheckNextFrame_14 = value;
	}

	inline static int32_t get_offset_of_CallOnThisFrame_15() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___CallOnThisFrame_15)); }
	inline bool get_CallOnThisFrame_15() const { return ___CallOnThisFrame_15; }
	inline bool* get_address_of_CallOnThisFrame_15() { return &___CallOnThisFrame_15; }
	inline void set_CallOnThisFrame_15(bool value)
	{
		___CallOnThisFrame_15 = value;
	}

	inline static int32_t get_offset_of_animationDuration_16() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936, ___animationDuration_16)); }
	inline float get_animationDuration_16() const { return ___animationDuration_16; }
	inline float* get_address_of_animationDuration_16() { return &___animationDuration_16; }
	inline void set_animationDuration_16(float value)
	{
		___animationDuration_16 = value;
	}
};

struct AnimationParts_t3954978936_StaticFields
{
public:
	// UITween.AnimationParts/DisableOrDestroy UITween.AnimationParts::OnDisableOrDestroy
	DisableOrDestroy_t2349129871 * ___OnDisableOrDestroy_0;

public:
	inline static int32_t get_offset_of_OnDisableOrDestroy_0() { return static_cast<int32_t>(offsetof(AnimationParts_t3954978936_StaticFields, ___OnDisableOrDestroy_0)); }
	inline DisableOrDestroy_t2349129871 * get_OnDisableOrDestroy_0() const { return ___OnDisableOrDestroy_0; }
	inline DisableOrDestroy_t2349129871 ** get_address_of_OnDisableOrDestroy_0() { return &___OnDisableOrDestroy_0; }
	inline void set_OnDisableOrDestroy_0(DisableOrDestroy_t2349129871 * value)
	{
		___OnDisableOrDestroy_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnDisableOrDestroy_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
