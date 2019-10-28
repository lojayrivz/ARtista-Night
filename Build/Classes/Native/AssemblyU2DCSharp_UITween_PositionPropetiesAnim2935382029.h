#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITween.PositionPropetiesAnim
struct  PositionPropetiesAnim_t2935382029  : public Il2CppObject
{
public:
	// System.Boolean UITween.PositionPropetiesAnim::positionEnabled
	bool ___positionEnabled_0;
	// UnityEngine.AnimationCurve UITween.PositionPropetiesAnim::TweenCurveEnterPos
	AnimationCurve_t3306541151 * ___TweenCurveEnterPos_1;
	// UnityEngine.AnimationCurve UITween.PositionPropetiesAnim::TweenCurveExitPos
	AnimationCurve_t3306541151 * ___TweenCurveExitPos_2;
	// UnityEngine.Vector3 UITween.PositionPropetiesAnim::StartPos
	Vector3_t2243707580  ___StartPos_3;
	// UnityEngine.Vector3 UITween.PositionPropetiesAnim::EndPos
	Vector3_t2243707580  ___EndPos_4;

public:
	inline static int32_t get_offset_of_positionEnabled_0() { return static_cast<int32_t>(offsetof(PositionPropetiesAnim_t2935382029, ___positionEnabled_0)); }
	inline bool get_positionEnabled_0() const { return ___positionEnabled_0; }
	inline bool* get_address_of_positionEnabled_0() { return &___positionEnabled_0; }
	inline void set_positionEnabled_0(bool value)
	{
		___positionEnabled_0 = value;
	}

	inline static int32_t get_offset_of_TweenCurveEnterPos_1() { return static_cast<int32_t>(offsetof(PositionPropetiesAnim_t2935382029, ___TweenCurveEnterPos_1)); }
	inline AnimationCurve_t3306541151 * get_TweenCurveEnterPos_1() const { return ___TweenCurveEnterPos_1; }
	inline AnimationCurve_t3306541151 ** get_address_of_TweenCurveEnterPos_1() { return &___TweenCurveEnterPos_1; }
	inline void set_TweenCurveEnterPos_1(AnimationCurve_t3306541151 * value)
	{
		___TweenCurveEnterPos_1 = value;
		Il2CppCodeGenWriteBarrier(&___TweenCurveEnterPos_1, value);
	}

	inline static int32_t get_offset_of_TweenCurveExitPos_2() { return static_cast<int32_t>(offsetof(PositionPropetiesAnim_t2935382029, ___TweenCurveExitPos_2)); }
	inline AnimationCurve_t3306541151 * get_TweenCurveExitPos_2() const { return ___TweenCurveExitPos_2; }
	inline AnimationCurve_t3306541151 ** get_address_of_TweenCurveExitPos_2() { return &___TweenCurveExitPos_2; }
	inline void set_TweenCurveExitPos_2(AnimationCurve_t3306541151 * value)
	{
		___TweenCurveExitPos_2 = value;
		Il2CppCodeGenWriteBarrier(&___TweenCurveExitPos_2, value);
	}

	inline static int32_t get_offset_of_StartPos_3() { return static_cast<int32_t>(offsetof(PositionPropetiesAnim_t2935382029, ___StartPos_3)); }
	inline Vector3_t2243707580  get_StartPos_3() const { return ___StartPos_3; }
	inline Vector3_t2243707580 * get_address_of_StartPos_3() { return &___StartPos_3; }
	inline void set_StartPos_3(Vector3_t2243707580  value)
	{
		___StartPos_3 = value;
	}

	inline static int32_t get_offset_of_EndPos_4() { return static_cast<int32_t>(offsetof(PositionPropetiesAnim_t2935382029, ___EndPos_4)); }
	inline Vector3_t2243707580  get_EndPos_4() const { return ___EndPos_4; }
	inline Vector3_t2243707580 * get_address_of_EndPos_4() { return &___EndPos_4; }
	inline void set_EndPos_4(Vector3_t2243707580  value)
	{
		___EndPos_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
