/**
 * @file
 * @authors
 * Matt "MateoConLechuga" Waltz\n
 * Jacob "jacobly" Young
 * @brief Core CE define file
 */

#ifndef _TICE_H
#define _TICE_H

#include <sys/basicusb.h>
#include <sys/lcd.h>
#include <sys/power.h>
#include <sys/rtc.h>
#include <sys/timers.h>
#include <sys/util.h>
#include <ti/debug.h>
#include <ti/error.h>
#include <ti/flags.h>
#include <ti/getcsc.h>
#include <ti/getkey.h>
#include <ti/screen.h>
#include <ti/info.h>
#include <ti/real.h>
#include <ti/tokens.h>
#include <ti/ui.h>
#include <ti/vars.h>

/* Compatibility defines */
#define prgm_CleanUp()
#define pgrm_CleanUp()
#define memset_fast memset
#define _OS(function) function()
#define asm_NewLine os_NewLine
#define asm_MoveUp os_MoveUp
#define asm_MoveDown os_MoveDown
#define asm_HomeUp os_HomeUp
#define asm_RunIndicOn os_RunIndicOn
#define asm_RunIndicOff os_RunIndicOff
#define asm_DisableAPD os_DisableAPD
#define asm_EnableAPD os_EnableAPD
#define asm_ArcChk os_ArcChk
#define asm_ClrLCDFull os_ClrLCDFull
#define asm_ClrLCD os_ClrLCD
#define asm_DrawStatusBar os_DrawStatusBar
#define asm_DelRes os_DelRes
#define asm_ClrTxtShd os_ClrTxtShd
/* @endcond */

#define timer_GetLow(n) (_Pragma("GCC warning \"'timer_GetLow' is deprecated, use 'timer_Get' or 'timer_GetSafe' instead as appropriate\"") (uint24_t)timer_Get(n))

#endif
