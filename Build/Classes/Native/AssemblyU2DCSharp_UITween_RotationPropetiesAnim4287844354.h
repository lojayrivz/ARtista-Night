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

// UITween.RotationPropetiesAnim
struct  RotationPropetiesAnim_t4287844354  : public Il2CppObject
{
public:
	// System.Boolean UITween.RotationPropetiesAnim::rotationEnabled
	bool ___rotationEnabled_0;
	// UnityEngine.AnimationCurve UITween.RotationPropetiesAnim::TweenCurveEnterRot
	AnimationCurve_t3306541151 * ___TweenCurveEnterRot_1;
	// UnityEngine.AnimationCurve UITween.RotationPropetiesAnim::TweenCurveExitRot
	AnimationCurve_t3306541151 * ___TweenCurveExitRot_2;
	// UnityEngine.Vector3 UITween.RotationPropetiesAnim::StartRot
	Vector3_t2243707580  ___StartRot_3;
	// UnityEngine.Vector3 UITween.RotationPropetiesAnim::EndRot
	Vector3_t2243707580  ___EndRot_4;

public:
	inline static int32_t get_offset_of_rotationEnabled_0() { return static_cast<int32_t>(offsetof(RotationPropetiesAnim_t4287844354, ___rotationEnabled_0)); }
	inline bool get_rotationEnabled_0() const { return ___rotationEnabled_0; }
	inline bool* get_address_of_rotationEnabled_0() { return &___rotationEnabled_0; }
	inline void set_rotationEnabled_0(bool value)
	{
		___rotationEnabled_0 = value;
	}

	inline static int32_t get_offset_of_TweenCurveEnterRot_1() { return static_cast<int32_t>(offsetof(RotationPropetiesAnim_t4287844354, ___TweenCurveEnterRot_1)); }
	inline AnimationCurve_t3306541151 * get_TweenCurveEnterRot_1() const { return ___TweenCurveEnterRot_1; }
	inline AnimationCurve_t3306541151 ** get_address_of_TweenCurveEnterRot_1() { return &___TweenCurveEnterRot_1; }
	inline void set_TweenCurveEnterRot_1(AnimationCurve_t3306541151 * value)
	{
		___TweenCurveEnterRot_1 = value;
		Il2CppCodeGenWriteBarrier(&___TweenCurveEnterRot_1, value);
	}

	inline static int32_t get_offset_of_TweenCurveExitRot_2() { return static_cast<int32_t>(offsetof(RotationPropetiesAnim_t4287844354, ___TweenCurveExitRot_2)); }
	inline AnimationCurve_t3306541151 * get_TweenCurveExitRot_2() const { return ___TweenCurveExitRot_2; }
	inline AnimationCurve_t3306541151 ** get_address_of_TweenCurveExitRot_2() { return &___TweenCurveExitRot_2; }
	inline void set_TweenCurveExitRot_2(AnimationCurve_t3306541151 * value)
	{
		___TweenCurveExitRot_2 = value;
		Il2CppCodeGenWriteBarrier(&___TweenCurveExitRot_2, value);
	}

	inline static int32_t get_offset_of_StartRot_3() { return static_cast<int32_t>(offsetof(RotationPropetiesAnim_t4287844354, ___StartRot_3)); }
	inline Vector3_t2243707580  get_StartRot_3() const { return ___StartRot_3; }
	inline Vector3_t2243707580 * get_address_of_StartRot_3() { return &___StartRot_3; }
	inline void set_StartRot_3(Vector3_t2243707580  value)
	{
		___StartRot_3 = value;
	}

	inline static int32_t get_offset_of_EndRot_4() { return static_cast<int32_t>(offsetof(RotationPropetiesAnim_t4287844354, ___EndRot_4)); }
	inline Vector3_t2243707580  get_EndRot_4() const { return ___EndRot_4; }
	inline Vector3_t2243707580 * get_address_of_EndRot_4() { return &___EndRot_4; }
	inline void set_EndRot_4(Vector3_t2243707580  value)
	{
		___EndRot_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
