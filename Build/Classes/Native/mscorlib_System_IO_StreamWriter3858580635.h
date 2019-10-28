#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_TextWriter4027217640.h"

// System.Text.Encoding
struct Encoding_t663144255;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.IO.StreamWriter
struct StreamWriter_t3858580635;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t3858580635  : public TextWriter_t4027217640
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t663144255 * ___internalEncoding_6;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t3255436806 * ___internalStream_7;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_8;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t3397334013* ___byte_buf_9;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_10;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t1328083999* ___decode_buf_11;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_12;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_13;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_14;

public:
	inline static int32_t get_offset_of_internalEncoding_6() { return static_cast<int32_t>(offsetof(StreamWriter_t3858580635, ___internalEncoding_6)); }
	inline Encoding_t663144255 * get_internalEncoding_6() const { return ___internalEncoding_6; }
	inline Encoding_t663144255 ** get_address_of_internalEncoding_6() { return &___internalEncoding_6; }
	inline void set_internalEncoding_6(Encoding_t663144255 * value)
	{
		___internalEncoding_6 = value;
		Il2CppCodeGenWriteBarrier(&___internalEncoding_6, value);
	}

	inline static int32_t get_offset_of_internalStream_7() { return static_cast<int32_t>(offsetof(StreamWriter_t3858580635, ___internalStream_7)); }
	inline Stream_t3255436806 * get_internalStream_7() const { return ___internalStream_7; }
	inline Stream_t3255436806 ** get_address_of_internalStream_7() { return &___internalStream_7; }
	inline void set_internalStream_7(Stream_t3255436806 * value)
	{
		___internalStream_7 = value;
		Il2CppCodeGenWriteBarrier(&___internalStream_7, value);
	}

	inline static int32_t get_offset_of_iflush_8() { return static_cast<int32_t>(offsetof(StreamWriter_t3858580635, ___iflush_8)); }
	inline bool get_iflush_8() const { return ___iflush_8; }
	inline bool* get_address_of_iflush_8() { return &___iflush_8; }
	inline void set_iflush_8(bool value)
	{
		___iflush_8 = value;
	}

	inline static int32_t get_offset_of_byte_buf_9() { return static_cast<int32_t>(offsetof(StreamWriter_t3858580635, ___byte_buf_9)); }
	inline ByteU5BU5D_t3397334013* get_byte_buf_9() const { return ___byte_buf_9; }
	inline ByteU5BU5D_t3397334013** get_address_of_byte_buf_9() { return &___byte_buf_9; }
	inline void set_byte_buf_9(ByteU5BU5D_t3397334013* value)
	{
		___byte_buf_9 = value;
		Il2CppCodeGenWriteBarrier(&___byte_buf_9, value);
	}

	inline static int32_t get_offset_of_byte_pos_10() { return static_cast<int32_t>(offsetof(StreamWriter_t3858580635, ___byte_pos_10)); }
	inline int32_t get_byte_pos_10() const { return ___byte_pos_10; }
	inline int32_t* get_address_of_byte_pos_10() { return &___byte_pos_10; }
	inline void set_byte_pos_10(int32_t value)
	{
		___byte_pos_10 = value;
	}

	inline static int32_t get_offset_of_decode_buf_11() { return static_cast<int32_t>(offsetof(StreamWriter_t3858580635, ___decode_buf_11)); }
	inline CharU5BU5D_t1328083999* get_decode_buf_11() const { return ___decode_buf_11; }
	inline CharU5BU5D_t1328083999** get_address_of_decode_buf_11() { return &___decode_buf_11; }
	inline void set_decode_buf_11(CharU5BU5D_t1328083999* value)
	{
		___decode_buf_11 = value;
		Il2CppCodeGenWriteBarrier(&___decode_buf_11, value);
	}

	inline static int32_t get_offset_of_decode_pos_12() { return static_cast<int32_t>(offsetof(StreamWriter_t3858580635, ___decode_pos_12)); }
	inline int32_t get_decode_pos_12() const { return ___decode_pos_12; }
	inline int32_t* get_address_of_decode_pos_12() { return &___decode_pos_12; }
	inline void set_decode_pos_12(int32_t value)
	{
		___decode_pos_12 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_13() { return static_cast<int32_t>(offsetof(StreamWriter_t3858580635, ___DisposedAlready_13)); }
	inline bool get_DisposedAlready_13() const { return ___DisposedAlready_13; }
	inline bool* get_address_of_DisposedAlready_13() { return &___DisposedAlready_13; }
	inline void set_DisposedAlready_13(bool value)
	{
		___DisposedAlready_13 = value;
	}

	inline static int32_t get_offset_of_preamble_done_14() { return static_cast<int32_t>(offsetof(StreamWriter_t3858580635, ___preamble_done_14)); }
	inline bool get_preamble_done_14() const { return ___preamble_done_14; }
	inline bool* get_address_of_preamble_done_14() { return &___preamble_done_14; }
	inline void set_preamble_done_14(bool value)
	{
		___preamble_done_14 = value;
	}
};

struct StreamWriter_t3858580635_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3858580635 * ___Null_15;

public:
	inline static int32_t get_offset_of_Null_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3858580635_StaticFields, ___Null_15)); }
	inline StreamWriter_t3858580635 * get_Null_15() const { return ___Null_15; }
	inline StreamWriter_t3858580635 ** get_address_of_Null_15() { return &___Null_15; }
	inline void set_Null_15(StreamWriter_t3858580635 * value)
	{
		___Null_15 = value;
		Il2CppCodeGenWriteBarrier(&___Null_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
