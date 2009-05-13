/*
    (c) 2009 by Leon Winter, see LICENSE file
*/

/* general settings */
static const char startpage[]           = "https://projects.ring0.de/webkitbrowser/";
static const char userstylesheet[]      = "";

/* appearance */
static const char sslbgcolor[]          = "#b0ff00";    /* background color for SSL */

/* scrolling */
static unsigned int scrollstep          = 40;   /* cursor difference in pixel */
static unsigned int pagingkeep          = 40;   /* pixels kept when paging */
#define             DISABLE_SCROLLBAR

/* key bindings for normal mode */
static Key keys[] = {
    { GDK_SHIFT_MASK,   GDK_dollar,     scroll,     {ScrollJumpTo | DirectionRight} },
    { 0,                GDK_0,          scroll,     {ScrollJumpTo | DirectionLeft} },
};
