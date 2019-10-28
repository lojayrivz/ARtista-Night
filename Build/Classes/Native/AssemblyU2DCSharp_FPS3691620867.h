#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPS
struct  FPS_t3691620867  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rect FPS::fpsRect
	Rect_t3681755626  ___fpsRect_2;
	// UnityEngine.GUIStyle FPS::style
	GUIStyle_t1799908754 * ___style_3;

public:
	inline static int32_t get_offset_of_fpsRect_2() { return static_cast<int32_t>(offsetof(FPS_t3691620867, ___fpsRect_2)); }
	inline Rect_t3681755626  get_fpsRect_2() const { return ___fpsRect_2; }
	inline Rect_t3681755626 * get_address_of_fpsRect_2() { return &___fpsRect_2; }
	inline void set_fpsRect_2(Rect_t3681755626  value)
	{
		___fpsRect_2 = value;
	}

	inline static int32_t get_offset_of_style_3() { return static_cast<int32_t>(offsetof(FPS_t3691620867, ___style_3)); }
	inline GUIStyle_t1799908754 * get_style_3() const { return ___style_3; }
	inline GUIStyle_t1799908754 ** get_address_of_style_3() { return &___style_3; }
	inline void set_style_3(GUIStyle_t1799908754 * value)
	{
		___style_3 = value;
		Il2CppCodeGenWriteBarrier(&___style_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
