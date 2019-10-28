#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController.CameraController
struct  CameraController_t1654381065  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 CameraController.CameraController::focus
	Vector3_t2243707580  ___focus_2;
	// UnityEngine.GameObject CameraController.CameraController::focusObj
	GameObject_t1756533147 * ___focusObj_3;
	// System.Boolean CameraController.CameraController::showInstWindow
	bool ___showInstWindow_4;
	// UnityEngine.Vector3 CameraController.CameraController::oldPos
	Vector3_t2243707580  ___oldPos_5;

public:
	inline static int32_t get_offset_of_focus_2() { return static_cast<int32_t>(offsetof(CameraController_t1654381065, ___focus_2)); }
	inline Vector3_t2243707580  get_focus_2() const { return ___focus_2; }
	inline Vector3_t2243707580 * get_address_of_focus_2() { return &___focus_2; }
	inline void set_focus_2(Vector3_t2243707580  value)
	{
		___focus_2 = value;
	}

	inline static int32_t get_offset_of_focusObj_3() { return static_cast<int32_t>(offsetof(CameraController_t1654381065, ___focusObj_3)); }
	inline GameObject_t1756533147 * get_focusObj_3() const { return ___focusObj_3; }
	inline GameObject_t1756533147 ** get_address_of_focusObj_3() { return &___focusObj_3; }
	inline void set_focusObj_3(GameObject_t1756533147 * value)
	{
		___focusObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___focusObj_3, value);
	}

	inline static int32_t get_offset_of_showInstWindow_4() { return static_cast<int32_t>(offsetof(CameraController_t1654381065, ___showInstWindow_4)); }
	inline bool get_showInstWindow_4() const { return ___showInstWindow_4; }
	inline bool* get_address_of_showInstWindow_4() { return &___showInstWindow_4; }
	inline void set_showInstWindow_4(bool value)
	{
		___showInstWindow_4 = value;
	}

	inline static int32_t get_offset_of_oldPos_5() { return static_cast<int32_t>(offsetof(CameraController_t1654381065, ___oldPos_5)); }
	inline Vector3_t2243707580  get_oldPos_5() const { return ___oldPos_5; }
	inline Vector3_t2243707580 * get_address_of_oldPos_5() { return &___oldPos_5; }
	inline void set_oldPos_5(Vector3_t2243707580  value)
	{
		___oldPos_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
