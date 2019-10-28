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
#include "UnityEngine_UnityEngine_AnimatorStateInfo2577870592.h"

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t720607407;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityChanControlScriptWithRgidBody
struct  UnityChanControlScriptWithRgidBody_t2695330427  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UnityChanControlScriptWithRgidBody::animSpeed
	float ___animSpeed_2;
	// System.Single UnityChanControlScriptWithRgidBody::lookSmoother
	float ___lookSmoother_3;
	// System.Boolean UnityChanControlScriptWithRgidBody::useCurves
	bool ___useCurves_4;
	// System.Single UnityChanControlScriptWithRgidBody::useCurvesHeight
	float ___useCurvesHeight_5;
	// System.Single UnityChanControlScriptWithRgidBody::forwardSpeed
	float ___forwardSpeed_6;
	// System.Single UnityChanControlScriptWithRgidBody::backwardSpeed
	float ___backwardSpeed_7;
	// System.Single UnityChanControlScriptWithRgidBody::rotateSpeed
	float ___rotateSpeed_8;
	// System.Single UnityChanControlScriptWithRgidBody::jumpPower
	float ___jumpPower_9;
	// UnityEngine.CapsuleCollider UnityChanControlScriptWithRgidBody::col
	CapsuleCollider_t720607407 * ___col_10;
	// UnityEngine.Rigidbody UnityChanControlScriptWithRgidBody::rb
	Rigidbody_t4233889191 * ___rb_11;
	// UnityEngine.Vector3 UnityChanControlScriptWithRgidBody::velocity
	Vector3_t2243707580  ___velocity_12;
	// System.Single UnityChanControlScriptWithRgidBody::orgColHight
	float ___orgColHight_13;
	// UnityEngine.Vector3 UnityChanControlScriptWithRgidBody::orgVectColCenter
	Vector3_t2243707580  ___orgVectColCenter_14;
	// UnityEngine.Animator UnityChanControlScriptWithRgidBody::anim
	Animator_t69676727 * ___anim_15;
	// UnityEngine.AnimatorStateInfo UnityChanControlScriptWithRgidBody::currentBaseState
	AnimatorStateInfo_t2577870592  ___currentBaseState_16;
	// UnityEngine.GameObject UnityChanControlScriptWithRgidBody::cameraObject
	GameObject_t1756533147 * ___cameraObject_17;

public:
	inline static int32_t get_offset_of_animSpeed_2() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___animSpeed_2)); }
	inline float get_animSpeed_2() const { return ___animSpeed_2; }
	inline float* get_address_of_animSpeed_2() { return &___animSpeed_2; }
	inline void set_animSpeed_2(float value)
	{
		___animSpeed_2 = value;
	}

	inline static int32_t get_offset_of_lookSmoother_3() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___lookSmoother_3)); }
	inline float get_lookSmoother_3() const { return ___lookSmoother_3; }
	inline float* get_address_of_lookSmoother_3() { return &___lookSmoother_3; }
	inline void set_lookSmoother_3(float value)
	{
		___lookSmoother_3 = value;
	}

	inline static int32_t get_offset_of_useCurves_4() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___useCurves_4)); }
	inline bool get_useCurves_4() const { return ___useCurves_4; }
	inline bool* get_address_of_useCurves_4() { return &___useCurves_4; }
	inline void set_useCurves_4(bool value)
	{
		___useCurves_4 = value;
	}

	inline static int32_t get_offset_of_useCurvesHeight_5() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___useCurvesHeight_5)); }
	inline float get_useCurvesHeight_5() const { return ___useCurvesHeight_5; }
	inline float* get_address_of_useCurvesHeight_5() { return &___useCurvesHeight_5; }
	inline void set_useCurvesHeight_5(float value)
	{
		___useCurvesHeight_5 = value;
	}

	inline static int32_t get_offset_of_forwardSpeed_6() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___forwardSpeed_6)); }
	inline float get_forwardSpeed_6() const { return ___forwardSpeed_6; }
	inline float* get_address_of_forwardSpeed_6() { return &___forwardSpeed_6; }
	inline void set_forwardSpeed_6(float value)
	{
		___forwardSpeed_6 = value;
	}

	inline static int32_t get_offset_of_backwardSpeed_7() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___backwardSpeed_7)); }
	inline float get_backwardSpeed_7() const { return ___backwardSpeed_7; }
	inline float* get_address_of_backwardSpeed_7() { return &___backwardSpeed_7; }
	inline void set_backwardSpeed_7(float value)
	{
		___backwardSpeed_7 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_8() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___rotateSpeed_8)); }
	inline float get_rotateSpeed_8() const { return ___rotateSpeed_8; }
	inline float* get_address_of_rotateSpeed_8() { return &___rotateSpeed_8; }
	inline void set_rotateSpeed_8(float value)
	{
		___rotateSpeed_8 = value;
	}

	inline static int32_t get_offset_of_jumpPower_9() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___jumpPower_9)); }
	inline float get_jumpPower_9() const { return ___jumpPower_9; }
	inline float* get_address_of_jumpPower_9() { return &___jumpPower_9; }
	inline void set_jumpPower_9(float value)
	{
		___jumpPower_9 = value;
	}

	inline static int32_t get_offset_of_col_10() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___col_10)); }
	inline CapsuleCollider_t720607407 * get_col_10() const { return ___col_10; }
	inline CapsuleCollider_t720607407 ** get_address_of_col_10() { return &___col_10; }
	inline void set_col_10(CapsuleCollider_t720607407 * value)
	{
		___col_10 = value;
		Il2CppCodeGenWriteBarrier(&___col_10, value);
	}

	inline static int32_t get_offset_of_rb_11() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___rb_11)); }
	inline Rigidbody_t4233889191 * get_rb_11() const { return ___rb_11; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_11() { return &___rb_11; }
	inline void set_rb_11(Rigidbody_t4233889191 * value)
	{
		___rb_11 = value;
		Il2CppCodeGenWriteBarrier(&___rb_11, value);
	}

	inline static int32_t get_offset_of_velocity_12() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___velocity_12)); }
	inline Vector3_t2243707580  get_velocity_12() const { return ___velocity_12; }
	inline Vector3_t2243707580 * get_address_of_velocity_12() { return &___velocity_12; }
	inline void set_velocity_12(Vector3_t2243707580  value)
	{
		___velocity_12 = value;
	}

	inline static int32_t get_offset_of_orgColHight_13() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___orgColHight_13)); }
	inline float get_orgColHight_13() const { return ___orgColHight_13; }
	inline float* get_address_of_orgColHight_13() { return &___orgColHight_13; }
	inline void set_orgColHight_13(float value)
	{
		___orgColHight_13 = value;
	}

	inline static int32_t get_offset_of_orgVectColCenter_14() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___orgVectColCenter_14)); }
	inline Vector3_t2243707580  get_orgVectColCenter_14() const { return ___orgVectColCenter_14; }
	inline Vector3_t2243707580 * get_address_of_orgVectColCenter_14() { return &___orgVectColCenter_14; }
	inline void set_orgVectColCenter_14(Vector3_t2243707580  value)
	{
		___orgVectColCenter_14 = value;
	}

	inline static int32_t get_offset_of_anim_15() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___anim_15)); }
	inline Animator_t69676727 * get_anim_15() const { return ___anim_15; }
	inline Animator_t69676727 ** get_address_of_anim_15() { return &___anim_15; }
	inline void set_anim_15(Animator_t69676727 * value)
	{
		___anim_15 = value;
		Il2CppCodeGenWriteBarrier(&___anim_15, value);
	}

	inline static int32_t get_offset_of_currentBaseState_16() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___currentBaseState_16)); }
	inline AnimatorStateInfo_t2577870592  get_currentBaseState_16() const { return ___currentBaseState_16; }
	inline AnimatorStateInfo_t2577870592 * get_address_of_currentBaseState_16() { return &___currentBaseState_16; }
	inline void set_currentBaseState_16(AnimatorStateInfo_t2577870592  value)
	{
		___currentBaseState_16 = value;
	}

	inline static int32_t get_offset_of_cameraObject_17() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427, ___cameraObject_17)); }
	inline GameObject_t1756533147 * get_cameraObject_17() const { return ___cameraObject_17; }
	inline GameObject_t1756533147 ** get_address_of_cameraObject_17() { return &___cameraObject_17; }
	inline void set_cameraObject_17(GameObject_t1756533147 * value)
	{
		___cameraObject_17 = value;
		Il2CppCodeGenWriteBarrier(&___cameraObject_17, value);
	}
};

struct UnityChanControlScriptWithRgidBody_t2695330427_StaticFields
{
public:
	// System.Int32 UnityChanControlScriptWithRgidBody::idleState
	int32_t ___idleState_18;
	// System.Int32 UnityChanControlScriptWithRgidBody::locoState
	int32_t ___locoState_19;
	// System.Int32 UnityChanControlScriptWithRgidBody::jumpState
	int32_t ___jumpState_20;
	// System.Int32 UnityChanControlScriptWithRgidBody::restState
	int32_t ___restState_21;

public:
	inline static int32_t get_offset_of_idleState_18() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427_StaticFields, ___idleState_18)); }
	inline int32_t get_idleState_18() const { return ___idleState_18; }
	inline int32_t* get_address_of_idleState_18() { return &___idleState_18; }
	inline void set_idleState_18(int32_t value)
	{
		___idleState_18 = value;
	}

	inline static int32_t get_offset_of_locoState_19() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427_StaticFields, ___locoState_19)); }
	inline int32_t get_locoState_19() const { return ___locoState_19; }
	inline int32_t* get_address_of_locoState_19() { return &___locoState_19; }
	inline void set_locoState_19(int32_t value)
	{
		___locoState_19 = value;
	}

	inline static int32_t get_offset_of_jumpState_20() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427_StaticFields, ___jumpState_20)); }
	inline int32_t get_jumpState_20() const { return ___jumpState_20; }
	inline int32_t* get_address_of_jumpState_20() { return &___jumpState_20; }
	inline void set_jumpState_20(int32_t value)
	{
		___jumpState_20 = value;
	}

	inline static int32_t get_offset_of_restState_21() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_t2695330427_StaticFields, ___restState_21)); }
	inline int32_t get_restState_21() const { return ___restState_21; }
	inline int32_t* get_address_of_restState_21() { return &___restState_21; }
	inline void set_restState_21(int32_t value)
	{
		___restState_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
