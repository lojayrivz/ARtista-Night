#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PluginMsgReceiver2021177207.h"
#include "AssemblyU2DCSharp_NativeEditBox_ReturnKeyType1446573074.h"
#include "AssemblyU2DCSharp_NativeEditBox_EditBoxConfig913871520.h"

// System.Action
struct Action_t3226471752;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeEditBox
struct  NativeEditBox_t1672268476  : public PluginMsgReceiver_t2021177207
{
public:
	// System.Boolean NativeEditBox::withDoneButton
	bool ___withDoneButton_3;
	// NativeEditBox/ReturnKeyType NativeEditBox::returnKeyType
	int32_t ___returnKeyType_4;
	// System.Action NativeEditBox::returnPressed
	Action_t3226471752 * ___returnPressed_5;
	// System.Boolean NativeEditBox::updateRectEveryFrame
	bool ___updateRectEveryFrame_6;
	// System.Boolean NativeEditBox::useInputFieldFont
	bool ___useInputFieldFont_7;
	// UnityEngine.Events.UnityEvent NativeEditBox::OnReturnPressed
	UnityEvent_t408735097 * ___OnReturnPressed_8;
	// System.Boolean NativeEditBox::bNativeEditCreated
	bool ___bNativeEditCreated_9;
	// UnityEngine.UI.InputField NativeEditBox::objUnityInput
	InputField_t1631627530 * ___objUnityInput_10;
	// UnityEngine.UI.Text NativeEditBox::objUnityText
	Text_t356221433 * ___objUnityText_11;
	// System.Boolean NativeEditBox::focusOnCreate
	bool ___focusOnCreate_12;
	// System.Boolean NativeEditBox::visibleOnCreate
	bool ___visibleOnCreate_13;
	// System.Boolean NativeEditBox::<Visible>k__BackingField
	bool ___U3CVisibleU3Ek__BackingField_25;
	// NativeEditBox/EditBoxConfig NativeEditBox::mConfig
	EditBoxConfig_t913871520  ___mConfig_26;

public:
	inline static int32_t get_offset_of_withDoneButton_3() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___withDoneButton_3)); }
	inline bool get_withDoneButton_3() const { return ___withDoneButton_3; }
	inline bool* get_address_of_withDoneButton_3() { return &___withDoneButton_3; }
	inline void set_withDoneButton_3(bool value)
	{
		___withDoneButton_3 = value;
	}

	inline static int32_t get_offset_of_returnKeyType_4() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___returnKeyType_4)); }
	inline int32_t get_returnKeyType_4() const { return ___returnKeyType_4; }
	inline int32_t* get_address_of_returnKeyType_4() { return &___returnKeyType_4; }
	inline void set_returnKeyType_4(int32_t value)
	{
		___returnKeyType_4 = value;
	}

	inline static int32_t get_offset_of_returnPressed_5() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___returnPressed_5)); }
	inline Action_t3226471752 * get_returnPressed_5() const { return ___returnPressed_5; }
	inline Action_t3226471752 ** get_address_of_returnPressed_5() { return &___returnPressed_5; }
	inline void set_returnPressed_5(Action_t3226471752 * value)
	{
		___returnPressed_5 = value;
		Il2CppCodeGenWriteBarrier(&___returnPressed_5, value);
	}

	inline static int32_t get_offset_of_updateRectEveryFrame_6() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___updateRectEveryFrame_6)); }
	inline bool get_updateRectEveryFrame_6() const { return ___updateRectEveryFrame_6; }
	inline bool* get_address_of_updateRectEveryFrame_6() { return &___updateRectEveryFrame_6; }
	inline void set_updateRectEveryFrame_6(bool value)
	{
		___updateRectEveryFrame_6 = value;
	}

	inline static int32_t get_offset_of_useInputFieldFont_7() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___useInputFieldFont_7)); }
	inline bool get_useInputFieldFont_7() const { return ___useInputFieldFont_7; }
	inline bool* get_address_of_useInputFieldFont_7() { return &___useInputFieldFont_7; }
	inline void set_useInputFieldFont_7(bool value)
	{
		___useInputFieldFont_7 = value;
	}

	inline static int32_t get_offset_of_OnReturnPressed_8() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___OnReturnPressed_8)); }
	inline UnityEvent_t408735097 * get_OnReturnPressed_8() const { return ___OnReturnPressed_8; }
	inline UnityEvent_t408735097 ** get_address_of_OnReturnPressed_8() { return &___OnReturnPressed_8; }
	inline void set_OnReturnPressed_8(UnityEvent_t408735097 * value)
	{
		___OnReturnPressed_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnReturnPressed_8, value);
	}

	inline static int32_t get_offset_of_bNativeEditCreated_9() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___bNativeEditCreated_9)); }
	inline bool get_bNativeEditCreated_9() const { return ___bNativeEditCreated_9; }
	inline bool* get_address_of_bNativeEditCreated_9() { return &___bNativeEditCreated_9; }
	inline void set_bNativeEditCreated_9(bool value)
	{
		___bNativeEditCreated_9 = value;
	}

	inline static int32_t get_offset_of_objUnityInput_10() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___objUnityInput_10)); }
	inline InputField_t1631627530 * get_objUnityInput_10() const { return ___objUnityInput_10; }
	inline InputField_t1631627530 ** get_address_of_objUnityInput_10() { return &___objUnityInput_10; }
	inline void set_objUnityInput_10(InputField_t1631627530 * value)
	{
		___objUnityInput_10 = value;
		Il2CppCodeGenWriteBarrier(&___objUnityInput_10, value);
	}

	inline static int32_t get_offset_of_objUnityText_11() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___objUnityText_11)); }
	inline Text_t356221433 * get_objUnityText_11() const { return ___objUnityText_11; }
	inline Text_t356221433 ** get_address_of_objUnityText_11() { return &___objUnityText_11; }
	inline void set_objUnityText_11(Text_t356221433 * value)
	{
		___objUnityText_11 = value;
		Il2CppCodeGenWriteBarrier(&___objUnityText_11, value);
	}

	inline static int32_t get_offset_of_focusOnCreate_12() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___focusOnCreate_12)); }
	inline bool get_focusOnCreate_12() const { return ___focusOnCreate_12; }
	inline bool* get_address_of_focusOnCreate_12() { return &___focusOnCreate_12; }
	inline void set_focusOnCreate_12(bool value)
	{
		___focusOnCreate_12 = value;
	}

	inline static int32_t get_offset_of_visibleOnCreate_13() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___visibleOnCreate_13)); }
	inline bool get_visibleOnCreate_13() const { return ___visibleOnCreate_13; }
	inline bool* get_address_of_visibleOnCreate_13() { return &___visibleOnCreate_13; }
	inline void set_visibleOnCreate_13(bool value)
	{
		___visibleOnCreate_13 = value;
	}

	inline static int32_t get_offset_of_U3CVisibleU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___U3CVisibleU3Ek__BackingField_25)); }
	inline bool get_U3CVisibleU3Ek__BackingField_25() const { return ___U3CVisibleU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CVisibleU3Ek__BackingField_25() { return &___U3CVisibleU3Ek__BackingField_25; }
	inline void set_U3CVisibleU3Ek__BackingField_25(bool value)
	{
		___U3CVisibleU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_mConfig_26() { return static_cast<int32_t>(offsetof(NativeEditBox_t1672268476, ___mConfig_26)); }
	inline EditBoxConfig_t913871520  get_mConfig_26() const { return ___mConfig_26; }
	inline EditBoxConfig_t913871520 * get_address_of_mConfig_26() { return &___mConfig_26; }
	inline void set_mConfig_26(EditBoxConfig_t913871520  value)
	{
		___mConfig_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
