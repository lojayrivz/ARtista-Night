#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.KenScript
struct  KenScript_t392190869  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Vuforia.KenScript::Run
	Transform_t3275118058 * ___Run_2;
	// UnityEngine.Animator Vuforia.KenScript::Anim
	Animator_t69676727 * ___Anim_3;
	// System.Boolean Vuforia.KenScript::click
	bool ___click_4;
	// System.Boolean Vuforia.KenScript::state
	bool ___state_5;

public:
	inline static int32_t get_offset_of_Run_2() { return static_cast<int32_t>(offsetof(KenScript_t392190869, ___Run_2)); }
	inline Transform_t3275118058 * get_Run_2() const { return ___Run_2; }
	inline Transform_t3275118058 ** get_address_of_Run_2() { return &___Run_2; }
	inline void set_Run_2(Transform_t3275118058 * value)
	{
		___Run_2 = value;
		Il2CppCodeGenWriteBarrier(&___Run_2, value);
	}

	inline static int32_t get_offset_of_Anim_3() { return static_cast<int32_t>(offsetof(KenScript_t392190869, ___Anim_3)); }
	inline Animator_t69676727 * get_Anim_3() const { return ___Anim_3; }
	inline Animator_t69676727 ** get_address_of_Anim_3() { return &___Anim_3; }
	inline void set_Anim_3(Animator_t69676727 * value)
	{
		___Anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___Anim_3, value);
	}

	inline static int32_t get_offset_of_click_4() { return static_cast<int32_t>(offsetof(KenScript_t392190869, ___click_4)); }
	inline bool get_click_4() const { return ___click_4; }
	inline bool* get_address_of_click_4() { return &___click_4; }
	inline void set_click_4(bool value)
	{
		___click_4 = value;
	}

	inline static int32_t get_offset_of_state_5() { return static_cast<int32_t>(offsetof(KenScript_t392190869, ___state_5)); }
	inline bool get_state_5() const { return ___state_5; }
	inline bool* get_address_of_state_5() { return &___state_5; }
	inline void set_state_5(bool value)
	{
		___state_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
