#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_UITween_CurrentAnimation_States1726894645.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UITween.AnimationParts
struct AnimationParts_t3954978936;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITween.CurrentAnimation
struct  CurrentAnimation_t3102868305  : public Il2CppObject
{
public:
	// UITween.AnimationParts UITween.CurrentAnimation::animationPart
	AnimationParts_t3954978936 * ___animationPart_0;
	// System.Single UITween.CurrentAnimation::counterTween
	float ___counterTween_1;
	// UITween.CurrentAnimation/States UITween.CurrentAnimation::AnimationStates
	int32_t ___AnimationStates_2;
	// UnityEngine.AnimationCurve UITween.CurrentAnimation::currentAnimationCurvePos
	AnimationCurve_t3306541151 * ___currentAnimationCurvePos_3;
	// UnityEngine.Vector3 UITween.CurrentAnimation::currentStartPos
	Vector3_t2243707580  ___currentStartPos_4;
	// UnityEngine.Vector3 UITween.CurrentAnimation::currentEndPos
	Vector3_t2243707580  ___currentEndPos_5;
	// UnityEngine.AnimationCurve UITween.CurrentAnimation::currentAnimationCurveScale
	AnimationCurve_t3306541151 * ___currentAnimationCurveScale_6;
	// UnityEngine.Vector3 UITween.CurrentAnimation::currentStartScale
	Vector3_t2243707580  ___currentStartScale_7;
	// UnityEngine.Vector3 UITween.CurrentAnimation::currentEndScale
	Vector3_t2243707580  ___currentEndScale_8;
	// UnityEngine.AnimationCurve UITween.CurrentAnimation::currentAnimationCurveRot
	AnimationCurve_t3306541151 * ___currentAnimationCurveRot_9;
	// UnityEngine.Vector3 UITween.CurrentAnimation::currentStartRot
	Vector3_t2243707580  ___currentStartRot_10;
	// UnityEngine.Vector3 UITween.CurrentAnimation::currentEndRot
	Vector3_t2243707580  ___currentEndRot_11;
	// System.Single UITween.CurrentAnimation::startAlphaValue
	float ___startAlphaValue_12;
	// System.Single UITween.CurrentAnimation::endAlphaValue
	float ___endAlphaValue_13;

public:
	inline static int32_t get_offset_of_animationPart_0() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___animationPart_0)); }
	inline AnimationParts_t3954978936 * get_animationPart_0() const { return ___animationPart_0; }
	inline AnimationParts_t3954978936 ** get_address_of_animationPart_0() { return &___animationPart_0; }
	inline void set_animationPart_0(AnimationParts_t3954978936 * value)
	{
		___animationPart_0 = value;
		Il2CppCodeGenWriteBarrier(&___animationPart_0, value);
	}

	inline static int32_t get_offset_of_counterTween_1() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___counterTween_1)); }
	inline float get_counterTween_1() const { return ___counterTween_1; }
	inline float* get_address_of_counterTween_1() { return &___counterTween_1; }
	inline void set_counterTween_1(float value)
	{
		___counterTween_1 = value;
	}

	inline static int32_t get_offset_of_AnimationStates_2() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___AnimationStates_2)); }
	inline int32_t get_AnimationStates_2() const { return ___AnimationStates_2; }
	inline int32_t* get_address_of_AnimationStates_2() { return &___AnimationStates_2; }
	inline void set_AnimationStates_2(int32_t value)
	{
		___AnimationStates_2 = value;
	}

	inline static int32_t get_offset_of_currentAnimationCurvePos_3() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___currentAnimationCurvePos_3)); }
	inline AnimationCurve_t3306541151 * get_currentAnimationCurvePos_3() const { return ___currentAnimationCurvePos_3; }
	inline AnimationCurve_t3306541151 ** get_address_of_currentAnimationCurvePos_3() { return &___currentAnimationCurvePos_3; }
	inline void set_currentAnimationCurvePos_3(AnimationCurve_t3306541151 * value)
	{
		___currentAnimationCurvePos_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentAnimationCurvePos_3, value);
	}

	inline static int32_t get_offset_of_currentStartPos_4() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___currentStartPos_4)); }
	inline Vector3_t2243707580  get_currentStartPos_4() const { return ___currentStartPos_4; }
	inline Vector3_t2243707580 * get_address_of_currentStartPos_4() { return &___currentStartPos_4; }
	inline void set_currentStartPos_4(Vector3_t2243707580  value)
	{
		___currentStartPos_4 = value;
	}

	inline static int32_t get_offset_of_currentEndPos_5() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___currentEndPos_5)); }
	inline Vector3_t2243707580  get_currentEndPos_5() const { return ___currentEndPos_5; }
	inline Vector3_t2243707580 * get_address_of_currentEndPos_5() { return &___currentEndPos_5; }
	inline void set_currentEndPos_5(Vector3_t2243707580  value)
	{
		___currentEndPos_5 = value;
	}

	inline static int32_t get_offset_of_currentAnimationCurveScale_6() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___currentAnimationCurveScale_6)); }
	inline AnimationCurve_t3306541151 * get_currentAnimationCurveScale_6() const { return ___currentAnimationCurveScale_6; }
	inline AnimationCurve_t3306541151 ** get_address_of_currentAnimationCurveScale_6() { return &___currentAnimationCurveScale_6; }
	inline void set_currentAnimationCurveScale_6(AnimationCurve_t3306541151 * value)
	{
		___currentAnimationCurveScale_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentAnimationCurveScale_6, value);
	}

	inline static int32_t get_offset_of_currentStartScale_7() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___currentStartScale_7)); }
	inline Vector3_t2243707580  get_currentStartScale_7() const { return ___currentStartScale_7; }
	inline Vector3_t2243707580 * get_address_of_currentStartScale_7() { return &___currentStartScale_7; }
	inline void set_currentStartScale_7(Vector3_t2243707580  value)
	{
		___currentStartScale_7 = value;
	}

	inline static int32_t get_offset_of_currentEndScale_8() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___currentEndScale_8)); }
	inline Vector3_t2243707580  get_currentEndScale_8() const { return ___currentEndScale_8; }
	inline Vector3_t2243707580 * get_address_of_currentEndScale_8() { return &___currentEndScale_8; }
	inline void set_currentEndScale_8(Vector3_t2243707580  value)
	{
		___currentEndScale_8 = value;
	}

	inline static int32_t get_offset_of_currentAnimationCurveRot_9() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___currentAnimationCurveRot_9)); }
	inline AnimationCurve_t3306541151 * get_currentAnimationCurveRot_9() const { return ___currentAnimationCurveRot_9; }
	inline AnimationCurve_t3306541151 ** get_address_of_currentAnimationCurveRot_9() { return &___currentAnimationCurveRot_9; }
	inline void set_currentAnimationCurveRot_9(AnimationCurve_t3306541151 * value)
	{
		___currentAnimationCurveRot_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentAnimationCurveRot_9, value);
	}

	inline static int32_t get_offset_of_currentStartRot_10() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___currentStartRot_10)); }
	inline Vector3_t2243707580  get_currentStartRot_10() const { return ___currentStartRot_10; }
	inline Vector3_t2243707580 * get_address_of_currentStartRot_10() { return &___currentStartRot_10; }
	inline void set_currentStartRot_10(Vector3_t2243707580  value)
	{
		___currentStartRot_10 = value;
	}

	inline static int32_t get_offset_of_currentEndRot_11() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___currentEndRot_11)); }
	inline Vector3_t2243707580  get_currentEndRot_11() const { return ___currentEndRot_11; }
	inline Vector3_t2243707580 * get_address_of_currentEndRot_11() { return &___currentEndRot_11; }
	inline void set_currentEndRot_11(Vector3_t2243707580  value)
	{
		___currentEndRot_11 = value;
	}

	inline static int32_t get_offset_of_startAlphaValue_12() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___startAlphaValue_12)); }
	inline float get_startAlphaValue_12() const { return ___startAlphaValue_12; }
	inline float* get_address_of_startAlphaValue_12() { return &___startAlphaValue_12; }
	inline void set_startAlphaValue_12(float value)
	{
		___startAlphaValue_12 = value;
	}

	inline static int32_t get_offset_of_endAlphaValue_13() { return static_cast<int32_t>(offsetof(CurrentAnimation_t3102868305, ___endAlphaValue_13)); }
	inline float get_endAlphaValue_13() const { return ___endAlphaValue_13; }
	inline float* get_address_of_endAlphaValue_13() { return &___endAlphaValue_13; }
	inline void set_endAlphaValue_13(float value)
	{
		___endAlphaValue_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
