/**
 * This file has a different license to the rest of the uGFX system.
 * You can copy, modify and distribute this file as you see fit.
 * You do not need to publish your source modifications to this file.
 * The only thing you are not permitted to do is to relicense it
 * under a different license.
 */

/**
 * Copy this file into your project directory and rename it as gfxconf.h
 * Edit your copy to turn on the uGFX features you want to use.
 * The values below are the defaults. You should delete anything
 * you are leaving as default.
 *
 * Please use spaces instead of tabs in this file.
 */

#ifndef _GFXCONF_H
#define _GFXCONF_H

/* The operating system to use. One of these must be defined - preferably in your Makefile */
//#define GFX_USE_OS_CHIBIOS                         TRUE
//#define GFX_USE_OS_WIN32                           TRUE
//#define GFX_USE_OS_LINUX                           TRUE
//#define GFX_USE_OS_OSX                             TRUE

///////////////////////////////////////////////////////////////////////////
// GDISP                                                                 //
///////////////////////////////////////////////////////////////////////////
#define GFX_USE_GDISP                                TRUE

//#define GDISP_NEED_AUTOFLUSH                         FALSE
//#define GDISP_NEED_TIMERFLUSH                        FALSE
#define GDISP_NEED_VALIDATION                        TRUE
#define GDISP_NEED_CLIP                              TRUE
#define GDISP_NEED_TEXT                              TRUE
    #define GDISP_NEED_ANTIALIAS                     TRUE
    #define GDISP_NEED_UTF8                          TRUE
    #define GDISP_NEED_TEXT_KERNING                  TRUE
    #define GDISP_INCLUDE_FONT_DEJAVUSANS12          TRUE


///////////////////////////////////////////////////////////////////////////
// GWIN                                                                  //
///////////////////////////////////////////////////////////////////////////
#define GFX_USE_GWIN                                 TRUE

#define GWIN_NEED_WINDOWMANAGER                      TRUE

    #define GWIN_NEED_LABEL                          TRUE
        #define GWIN_LABEL_ATTRIBUTE                 TRUE

///////////////////////////////////////////////////////////////////////////
// GEVENT                                                                //
///////////////////////////////////////////////////////////////////////////
#define GFX_USE_GEVENT                               TRUE

///////////////////////////////////////////////////////////////////////////
// GTIMER                                                                //
///////////////////////////////////////////////////////////////////////////
#define GFX_USE_GTIMER                               TRUE

///////////////////////////////////////////////////////////////////////////
// GQUEUE                                                                //
///////////////////////////////////////////////////////////////////////////
#define GFX_USE_GQUEUE                               TRUE

#define GQUEUE_NEED_ASYNC                            TRUE

///////////////////////////////////////////////////////////////////////////
// GINPUT                                                                //
///////////////////////////////////////////////////////////////////////////
#define GFX_USE_GINPUT                               TRUE

#define GINPUT_NEED_MOUSE                            TRUE

#endif /* _GFXCONF_H */
