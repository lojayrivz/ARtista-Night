#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// NativeEditBox
struct NativeEditBox_t1672268476;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// demo
struct  demo_t3455197153  : public MonoBehaviour_t1158329972
{
public:
	// NativeEditBox demo::testNativeEdit
	NativeEditBox_t1672268476 * ___testNativeEdit_2;
	// UnityEngine.Canvas demo::mainCanvas
	Canvas_t209405766 * ___mainCanvas_3;
	// UnityEngine.RectTransform demo::rectTrans
	RectTransform_t3349966182 * ___rectTrans_4;
	// System.Boolean demo::bTempFocus
	bool ___bTempFocus_5;
	// System.Boolean demo::bTempVisible
	bool ___bTempVisible_6;

public:
	inline static int32_t get_offset_of_testNativeEdit_2() { return static_cast<int32_t>(offsetof(demo_t3455197153, ___testNativeEdit_2)); }
	inline NativeEditBox_t1672268476 * get_testNativeEdit_2() const { return ___testNativeEdit_2; }
	inline NativeEditBox_t1672268476 ** get_address_of_testNativeEdit_2() { return &___testNativeEdit_2; }
	inline void set_testNativeEdit_2(NativeEditBox_t1672268476 * value)
	{
		___testNativeEdit_2 = value;
		Il2CppCodeGenWriteBarrier(&___testNativeEdit_2, value);
	}

	inline static int32_t get_offset_of_mainCanvas_3() { return static_cast<int32_t>(offsetof(demo_t3455197153, ___mainCanvas_3)); }
	inline Canvas_t209405766 * get_mainCanvas_3() const { return ___mainCanvas_3; }
	inline Canvas_t209405766 ** get_address_of_mainCanvas_3() { return &___mainCanvas_3; }
	inline void set_mainCanvas_3(Canvas_t209405766 * value)
	{
		___mainCanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainCanvas_3, value);
	}

	inline static int32_t get_offset_of_rectTrans_4() { return static_cast<int32_t>(offsetof(demo_t3455197153, ___rectTrans_4)); }
	inline RectTransform_t3349966182 * get_rectTrans_4() const { return ___rectTrans_4; }
	inline RectTransform_t3349966182 ** get_address_of_rectTrans_4() { return &___rectTrans_4; }
	inline void set_rectTrans_4(RectTransform_t3349966182 * value)
	{
		___rectTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___rectTrans_4, value);
	}

	inline static int32_t get_offset_of_bTempFocus_5() { return static_cast<int32_t>(offsetof(demo_t3455197153, ___bTempFocus_5)); }
	inline bool get_bTempFocus_5() const { return ___bTempFocus_5; }
	inline bool* get_address_of_bTempFocus_5() { return &___bTempFocus_5; }
	inline void set_bTempFocus_5(bool value)
	{
		___bTempFocus_5 = value;
	}

	inline static int32_t get_offset_of_bTempVisible_6() { return static_cast<int32_t>(offsetof(demo_t3455197153, ___bTempVisible_6)); }
	inline bool get_bTempVisible_6() const { return ___bTempVisible_6; }
	inline bool* get_address_of_bTempVisible_6() { return &___bTempVisible_6; }
	inline void set_bTempVisible_6(bool value)
	{
		___bTempVisible_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
