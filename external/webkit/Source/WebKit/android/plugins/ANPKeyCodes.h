/*
 * Copyright 2008, The Android Open Source Project
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef ANPKeyCodes_DEFINED
#define ANPKeyCodes_DEFINED

/*  List the key codes that are set to a plugin in the ANPKeyEvent.
 
    These exactly match the values in android/view/KeyEvent.java and the
    corresponding .h file android/keycodes.h.
*/
enum ANPKeyCodes {
    kUnknown_ANPKeyCode = 0,

    kSoftLeft_ANPKeyCode = 1,
    kSoftRight_ANPKeyCode = 2,
    kHome_ANPKeyCode = 3,
    kBack_ANPKeyCode = 4,
    kCall_ANPKeyCode = 5,
    kEndCall_ANPKeyCode = 6,
    k0_ANPKeyCode = 7,
    k1_ANPKeyCode = 8,
    k2_ANPKeyCode = 9,
    k3_ANPKeyCode = 10,
    k4_ANPKeyCode = 11,
    k5_ANPKeyCode = 12,
    k6_ANPKeyCode = 13,
    k7_ANPKeyCode = 14,
    k8_ANPKeyCode = 15,
    k9_ANPKeyCode = 16,
    kStar_ANPKeyCode = 17,
    kPound_ANPKeyCode = 18,
    kDpadUp_ANPKeyCode = 19,
    kDpadDown_ANPKeyCode = 20,
    kDpadLeft_ANPKeyCode = 21,
    kDpadRight_ANPKeyCode = 22,
    kDpadCenter_ANPKeyCode = 23,
    kVolumeUp_ANPKeyCode = 24,
    kVolumeDown_ANPKeyCode = 25,
    kPower_ANPKeyCode = 26,
    kCamera_ANPKeyCode = 27,
    kClear_ANPKeyCode = 28,
    kA_ANPKeyCode = 29,
    kB_ANPKeyCode = 30,
    kC_ANPKeyCode = 31,
    kD_ANPKeyCode = 32,
    kE_ANPKeyCode = 33,
    kF_ANPKeyCode = 34,
    kG_ANPKeyCode = 35,
    kH_ANPKeyCode = 36,
    kI_ANPKeyCode = 37,
    kJ_ANPKeyCode = 38,
    kK_ANPKeyCode = 39,
    kL_ANPKeyCode = 40,
    kM_ANPKeyCode = 41,
    kN_ANPKeyCode = 42,
    kO_ANPKeyCode = 43,
    kP_ANPKeyCode = 44,
    kQ_ANPKeyCode = 45,
    kR_ANPKeyCode = 46,
    kS_ANPKeyCode = 47,
    kT_ANPKeyCode = 48,
    kU_ANPKeyCode = 49,
    kV_ANPKeyCode = 50,
    kW_ANPKeyCode = 51,
    kX_ANPKeyCode = 52,
    kY_ANPKeyCode = 53,
    kZ_ANPKeyCode = 54,
    kComma_ANPKeyCode = 55,
    kPeriod_ANPKeyCode = 56,
    kAltLeft_ANPKeyCode = 57,
    kAltRight_ANPKeyCode = 58,
    kShiftLeft_ANPKeyCode = 59,
    kShiftRight_ANPKeyCode = 60,
    kTab_ANPKeyCode = 61,
    kSpace_ANPKeyCode = 62,
    kSym_ANPKeyCode = 63,
    kExplorer_ANPKeyCode = 64,
    kEnvelope_ANPKeyCode = 65,
    kNewline_ANPKeyCode = 66,
    kDel_ANPKeyCode = 67,
    kGrave_ANPKeyCode = 68,
    kMinus_ANPKeyCode = 69,
    kEquals_ANPKeyCode = 70,
    kLeftBracket_ANPKeyCode = 71,
    kRightBracket_ANPKeyCode = 72,
    kBackslash_ANPKeyCode = 73,
    kSemicolon_ANPKeyCode = 74,
    kApostrophe_ANPKeyCode = 75,
    kSlash_ANPKeyCode = 76,
    kAt_ANPKeyCode = 77,
    kNum_ANPKeyCode = 78,
    kHeadSetHook_ANPKeyCode = 79,
    kFocus_ANPKeyCode = 80,
    kPlus_ANPKeyCode = 81,
    kMenu_ANPKeyCode = 82,
    kNotification_ANPKeyCode = 83,
    kSearch_ANPKeyCode = 84,
    kMediaPlayPause_ANPKeyCode = 85,
    kMediaStop_ANPKeyCode = 86,
    kMediaNext_ANPKeyCode = 87,
    kMediaPrevious_ANPKeyCode = 88,
    kMediaRewind_ANPKeyCode = 89,
    kMediaFastForward_ANPKeyCode = 90,
    kMute_ANPKeyCode = 91,
    kPageUp_ANPKeyCode = 92,
    kPageDown_ANPKeyCode = 93,
    kPictsymbols_ANPKeyCode = 94,
    kSwitchCharset_ANPKeyCode = 95,
    kButtonA_ANPKeyCode = 96,
    kButtonB_ANPKeyCode = 97,
    kButtonC_ANPKeyCode = 98,
    kButtonX_ANPKeyCode = 99,
    kButtonY_ANPKeyCode = 100,
    kButtonZ_ANPKeyCode = 101,
    kButtonL1_ANPKeyCode = 102,
    kButtonR1_ANPKeyCode = 103,
    kButtonL2_ANPKeyCode = 104,
    kButtonR2_ANPKeyCode = 105,
    kButtonThumbL_ANPKeyCode = 106,
    kButtonThumbR_ANPKeyCode = 107,
    kButtonStart_ANPKeyCode = 108,
    kButtonSelect_ANPKeyCode = 109,
    kButtonMode_ANPKeyCode = 110,
    kEscape_ANPKeyCode = 111,
    kForwardDel_ANPKeyCode = 112,
    kCtrlLeft_ANPKeyCode = 113,
    kCtrlRight_ANPKeyCode = 114,
    kCapsLock_ANPKeyCode = 115,
    kScrollLock_ANPKeyCode = 116,
    kMetaLeft_ANPKeyCode = 117,
    kMetaRight_ANPKeyCode = 118,
    kFunction_ANPKeyCode = 119,
    kSysRq_ANPKeyCode = 120,
    kBreak_ANPKeyCode = 121,
    kMoveHome_ANPKeyCode = 122,
    kMoveEnd_ANPKeyCode = 123,
    kInsert_ANPKeyCode = 124,
    kForward_ANPKeyCode = 125,
    kMediaPlay_ANPKeyCode = 126,
    kMediaPause_ANPKeyCode = 127,
    kMediaClose_ANPKeyCode = 128,
    kMediaEject_ANPKeyCode = 129,
    kMediaRecord_ANPKeyCode = 130,
    kF1_ANPKeyCode = 131,
    kF2_ANPKeyCode = 132,
    kF3_ANPKeyCode = 133,
    kF4_ANPKeyCode = 134,
    kF5_ANPKeyCode = 135,
    kF6_ANPKeyCode = 136,
    kF7_ANPKeyCode = 137,
    kF8_ANPKeyCode = 138,
    kF9_ANPKeyCode = 139,
    kF10_ANPKeyCode = 140,
    kF11_ANPKeyCode = 141,
    kF12_ANPKeyCode = 142,
    kNumLock_ANPKeyCode = 143,
    kNumPad0_ANPKeyCode = 144,
    kNumPad1_ANPKeyCode = 145,
    kNumPad2_ANPKeyCode = 146,
    kNumPad3_ANPKeyCode = 147,
    kNumPad4_ANPKeyCode = 148,
    kNumPad5_ANPKeyCode = 149,
    kNumPad6_ANPKeyCode = 150,
    kNumPad7_ANPKeyCode = 151,
    kNumPad8_ANPKeyCode = 152,
    kNumPad9_ANPKeyCode = 153,
    kNumPadDivide_ANPKeyCode = 154,
    kNumPadMultiply_ANPKeyCode = 155,
    kNumPadSubtract_ANPKeyCode = 156,
    kNumPadAdd_ANPKeyCode = 157,
    kNumPadDot_ANPKeyCode = 158,
    kNumPadComma_ANPKeyCode = 159,
    kNumPadEnter_ANPKeyCode = 160,
    kNumPadEquals_ANPKeyCode = 161,
    kNumPadLeftParen_ANPKeyCode = 162,
    kNumPadRightParen_ANPKeyCode = 163,
    kVolumeMute_ANPKeyCode = 164,
    kInfo_ANPKeyCode = 165,
    kChannelUp_ANPKeyCode = 166,
    kChannelDown_ANPKeyCode = 167,
    kZoomIn_ANPKeyCode = 168,
    kZoomOut_ANPKeyCode = 169,
    kTv_ANPKeyCode = 170,
    kWindow_ANPKeyCode = 171,
    kGuide_ANPKeyCode = 172,
    kDvr_ANPKeyCode = 173,
    kBookmark_ANPKeyCode = 174,
    kCaptions_ANPKeyCode = 175,
    kSettings_ANPKeyCode = 176,
    kTvPower_ANPKeyCode = 177,
    kTvInput_ANPKeyCode = 178,
    kStbPower_ANPKeyCode = 179,
    kStbInput_ANPKeyCode = 180,
    kAvrPower_ANPKeyCode = 181,
    kAvrInput_ANPKeyCode = 182,
    kProgRed_ANPKeyCode = 183,
    kProgGreen_ANPKeyCode = 184,
    kProgYellow_ANPKeyCode = 185,
    kProgBlue_ANPKeyCode = 186,
    kAppSwitch_ANPKeyCode = 187,
    kF13_ANPKeyCode = 211,
    kF14_ANPKeyCode = 212,
    kF15_ANPKeyCode = 213,
    kF16_ANPKeyCode = 214,
    kF17_ANPKeyCode = 215,
    kF18_ANPKeyCode = 216,
    kF19_ANPKeyCode = 217,
    kF20_ANPKeyCode = 218,
    kF21_ANPKeyCode = 219,
    kF22_ANPKeyCode = 220,

    // NOTE: If you add a new keycode here you must also add it to several other files.
    //       Refer to frameworks/base/core/java/android/view/KeyEvent.java for the full list.
};

#endif
