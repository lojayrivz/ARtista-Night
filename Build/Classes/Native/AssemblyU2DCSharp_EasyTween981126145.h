#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UITween.AnimationParts
struct AnimationParts_t3954978936;
// UITween.CurrentAnimation
struct CurrentAnimation_t3102868305;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyTween
struct  EasyTween_t981126145  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform EasyTween::rectTransform
	RectTransform_t3349966182 * ___rectTransform_2;
	// UITween.AnimationParts EasyTween::animationParts
	AnimationParts_t3954978936 * ___animationParts_3;
	// UITween.CurrentAnimation EasyTween::currentAnimationGoing
	CurrentAnimation_t3102868305 * ___currentAnimationGoing_4;

public:
	inline static int32_t get_offset_of_rectTransform_2() { return static_cast<int32_t>(offsetof(EasyTween_t981126145, ___rectTransform_2)); }
	inline RectTransform_t3349966182 * get_rectTransform_2() const { return ___rectTransform_2; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_2() { return &___rectTransform_2; }
	inline void set_rectTransform_2(RectTransform_t3349966182 * value)
	{
		___rectTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_2, value);
	}

	inline static int32_t get_offset_of_animationParts_3() { return static_cast<int32_t>(offsetof(EasyTween_t981126145, ___animationParts_3)); }
	inline AnimationParts_t3954978936 * get_animationParts_3() const { return ___animationParts_3; }
	inline AnimationParts_t3954978936 ** get_address_of_animationParts_3() { return &___animationParts_3; }
	inline void set_animationParts_3(AnimationParts_t3954978936 * value)
	{
		___animationParts_3 = value;
		Il2CppCodeGenWriteBarrier(&___animationParts_3, value);
	}

	inline static int32_t get_offset_of_currentAnimationGoing_4() { return static_cast<int32_t>(offsetof(EasyTween_t981126145, ___currentAnimationGoing_4)); }
	inline CurrentAnimation_t3102868305 * get_currentAnimationGoing_4() const { return ___currentAnimationGoing_4; }
	inline CurrentAnimation_t3102868305 ** get_address_of_currentAnimationGoing_4() { return &___currentAnimationGoing_4; }
	inline void set_currentAnimationGoing_4(CurrentAnimation_t3102868305 * value)
	{
		___currentAnimationGoing_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentAnimationGoing_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
