#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PluginMsgHandler
struct PluginMsgHandler_t65305924;
// System.Collections.Generic.Dictionary`2<System.Int32,PluginMsgReceiver>
struct Dictionary_2_t1029002842;
// System.IO.StreamWriter
struct StreamWriter_t3858580635;
// PluginMsgHandler/ShowKeyboardDelegate
struct ShowKeyboardDelegate_t1795315790;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PluginMsgHandler
struct  PluginMsgHandler_t65305924  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 PluginMsgHandler::snCurReceiverIdx
	int32_t ___snCurReceiverIdx_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,PluginMsgReceiver> PluginMsgHandler::m_dictReceiver
	Dictionary_2_t1029002842 * ___m_dictReceiver_5;
	// PluginMsgHandler/ShowKeyboardDelegate PluginMsgHandler::OnShowKeyboard
	ShowKeyboardDelegate_t1795315790 * ___OnShowKeyboard_7;

public:
	inline static int32_t get_offset_of_snCurReceiverIdx_4() { return static_cast<int32_t>(offsetof(PluginMsgHandler_t65305924, ___snCurReceiverIdx_4)); }
	inline int32_t get_snCurReceiverIdx_4() const { return ___snCurReceiverIdx_4; }
	inline int32_t* get_address_of_snCurReceiverIdx_4() { return &___snCurReceiverIdx_4; }
	inline void set_snCurReceiverIdx_4(int32_t value)
	{
		___snCurReceiverIdx_4 = value;
	}

	inline static int32_t get_offset_of_m_dictReceiver_5() { return static_cast<int32_t>(offsetof(PluginMsgHandler_t65305924, ___m_dictReceiver_5)); }
	inline Dictionary_2_t1029002842 * get_m_dictReceiver_5() const { return ___m_dictReceiver_5; }
	inline Dictionary_2_t1029002842 ** get_address_of_m_dictReceiver_5() { return &___m_dictReceiver_5; }
	inline void set_m_dictReceiver_5(Dictionary_2_t1029002842 * value)
	{
		___m_dictReceiver_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_dictReceiver_5, value);
	}

	inline static int32_t get_offset_of_OnShowKeyboard_7() { return static_cast<int32_t>(offsetof(PluginMsgHandler_t65305924, ___OnShowKeyboard_7)); }
	inline ShowKeyboardDelegate_t1795315790 * get_OnShowKeyboard_7() const { return ___OnShowKeyboard_7; }
	inline ShowKeyboardDelegate_t1795315790 ** get_address_of_OnShowKeyboard_7() { return &___OnShowKeyboard_7; }
	inline void set_OnShowKeyboard_7(ShowKeyboardDelegate_t1795315790 * value)
	{
		___OnShowKeyboard_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnShowKeyboard_7, value);
	}
};

struct PluginMsgHandler_t65305924_StaticFields
{
public:
	// PluginMsgHandler PluginMsgHandler::inst
	PluginMsgHandler_t65305924 * ___inst_2;
	// System.Boolean PluginMsgHandler::sPluginInitialized
	bool ___sPluginInitialized_3;
	// System.IO.StreamWriter PluginMsgHandler::fileWriter
	StreamWriter_t3858580635 * ___fileWriter_6;
	// System.String PluginMsgHandler::MSG_SHOW_KEYBOARD
	String_t* ___MSG_SHOW_KEYBOARD_8;
	// System.String PluginMsgHandler::DEFAULT_NAME
	String_t* ___DEFAULT_NAME_9;
	// System.Boolean PluginMsgHandler::ENABLE_WRITE_LOG
	bool ___ENABLE_WRITE_LOG_10;
	// UnityEngine.GameObject PluginMsgHandler::instance
	GameObject_t1756533147 * ___instance_11;

public:
	inline static int32_t get_offset_of_inst_2() { return static_cast<int32_t>(offsetof(PluginMsgHandler_t65305924_StaticFields, ___inst_2)); }
	inline PluginMsgHandler_t65305924 * get_inst_2() const { return ___inst_2; }
	inline PluginMsgHandler_t65305924 ** get_address_of_inst_2() { return &___inst_2; }
	inline void set_inst_2(PluginMsgHandler_t65305924 * value)
	{
		___inst_2 = value;
		Il2CppCodeGenWriteBarrier(&___inst_2, value);
	}

	inline static int32_t get_offset_of_sPluginInitialized_3() { return static_cast<int32_t>(offsetof(PluginMsgHandler_t65305924_StaticFields, ___sPluginInitialized_3)); }
	inline bool get_sPluginInitialized_3() const { return ___sPluginInitialized_3; }
	inline bool* get_address_of_sPluginInitialized_3() { return &___sPluginInitialized_3; }
	inline void set_sPluginInitialized_3(bool value)
	{
		___sPluginInitialized_3 = value;
	}

	inline static int32_t get_offset_of_fileWriter_6() { return static_cast<int32_t>(offsetof(PluginMsgHandler_t65305924_StaticFields, ___fileWriter_6)); }
	inline StreamWriter_t3858580635 * get_fileWriter_6() const { return ___fileWriter_6; }
	inline StreamWriter_t3858580635 ** get_address_of_fileWriter_6() { return &___fileWriter_6; }
	inline void set_fileWriter_6(StreamWriter_t3858580635 * value)
	{
		___fileWriter_6 = value;
		Il2CppCodeGenWriteBarrier(&___fileWriter_6, value);
	}

	inline static int32_t get_offset_of_MSG_SHOW_KEYBOARD_8() { return static_cast<int32_t>(offsetof(PluginMsgHandler_t65305924_StaticFields, ___MSG_SHOW_KEYBOARD_8)); }
	inline String_t* get_MSG_SHOW_KEYBOARD_8() const { return ___MSG_SHOW_KEYBOARD_8; }
	inline String_t** get_address_of_MSG_SHOW_KEYBOARD_8() { return &___MSG_SHOW_KEYBOARD_8; }
	inline void set_MSG_SHOW_KEYBOARD_8(String_t* value)
	{
		___MSG_SHOW_KEYBOARD_8 = value;
		Il2CppCodeGenWriteBarrier(&___MSG_SHOW_KEYBOARD_8, value);
	}

	inline static int32_t get_offset_of_DEFAULT_NAME_9() { return static_cast<int32_t>(offsetof(PluginMsgHandler_t65305924_StaticFields, ___DEFAULT_NAME_9)); }
	inline String_t* get_DEFAULT_NAME_9() const { return ___DEFAULT_NAME_9; }
	inline String_t** get_address_of_DEFAULT_NAME_9() { return &___DEFAULT_NAME_9; }
	inline void set_DEFAULT_NAME_9(String_t* value)
	{
		___DEFAULT_NAME_9 = value;
		Il2CppCodeGenWriteBarrier(&___DEFAULT_NAME_9, value);
	}

	inline static int32_t get_offset_of_ENABLE_WRITE_LOG_10() { return static_cast<int32_t>(offsetof(PluginMsgHandler_t65305924_StaticFields, ___ENABLE_WRITE_LOG_10)); }
	inline bool get_ENABLE_WRITE_LOG_10() const { return ___ENABLE_WRITE_LOG_10; }
	inline bool* get_address_of_ENABLE_WRITE_LOG_10() { return &___ENABLE_WRITE_LOG_10; }
	inline void set_ENABLE_WRITE_LOG_10(bool value)
	{
		___ENABLE_WRITE_LOG_10 = value;
	}

	inline static int32_t get_offset_of_instance_11() { return static_cast<int32_t>(offsetof(PluginMsgHandler_t65305924_StaticFields, ___instance_11)); }
	inline GameObject_t1756533147 * get_instance_11() const { return ___instance_11; }
	inline GameObject_t1756533147 ** get_address_of_instance_11() { return &___instance_11; }
	inline void set_instance_11(GameObject_t1756533147 * value)
	{
		___instance_11 = value;
		Il2CppCodeGenWriteBarrier(&___instance_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
