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
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Track
struct  Track_t1525950561  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Vuforia.Track::Found
	Transform_t3275118058 * ___Found_2;
	// System.Boolean Vuforia.Track::open
	bool ___open_3;
	// Vuforia.TrackableBehaviour Vuforia.Track::mTrackableBehaviour
	TrackableBehaviour_t1779888572 * ___mTrackableBehaviour_4;

public:
	inline static int32_t get_offset_of_Found_2() { return static_cast<int32_t>(offsetof(Track_t1525950561, ___Found_2)); }
	inline Transform_t3275118058 * get_Found_2() const { return ___Found_2; }
	inline Transform_t3275118058 ** get_address_of_Found_2() { return &___Found_2; }
	inline void set_Found_2(Transform_t3275118058 * value)
	{
		___Found_2 = value;
		Il2CppCodeGenWriteBarrier(&___Found_2, value);
	}

	inline static int32_t get_offset_of_open_3() { return static_cast<int32_t>(offsetof(Track_t1525950561, ___open_3)); }
	inline bool get_open_3() const { return ___open_3; }
	inline bool* get_address_of_open_3() { return &___open_3; }
	inline void set_open_3(bool value)
	{
		___open_3 = value;
	}

	inline static int32_t get_offset_of_mTrackableBehaviour_4() { return static_cast<int32_t>(offsetof(Track_t1525950561, ___mTrackableBehaviour_4)); }
	inline TrackableBehaviour_t1779888572 * get_mTrackableBehaviour_4() const { return ___mTrackableBehaviour_4; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mTrackableBehaviour_4() { return &___mTrackableBehaviour_4; }
	inline void set_mTrackableBehaviour_4(TrackableBehaviour_t1779888572 * value)
	{
		___mTrackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
