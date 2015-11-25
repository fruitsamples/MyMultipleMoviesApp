/*	File:		MyApplication.h		Contains:	My Application Shell.	Written by:	John Wang	Copyright:	� 1994 by Apple Computer, Inc., all rights reserved.	Change History (most recent first):		<1>		03/14/94	JW		Re-Created for Universal Headers.	To Do:	*/#ifdef THINK_C#define		applec#endif//	Set the following according to your application's needs#define		kNEWDOCATSTARTUP	1	//	set to 1 if MyNew called at startup.  0 is not called.#define		kMYEVENTDEF			2	//	2 is per window.  1 is once per eventloop.  0 is never.#define		kMYIDLEDEF			2	//	2 is per window.  1 is once per eventloop.  0 is never.#define		kMENU_COLLECTION		160#define		kMENU_MACADDRESATOM		2#define		kMENU_MACADDALL			3#define		kMENU_CROSSADDALL		6#define		kMENU_BOTHADDALL		9#define		kMENU_MOVIES			161#define		kALERT_ERROROPEN		160#define		kALERT_BADDOCUMENT		161#define		kALERT_CANTNEW			162#define		kALERT_CANTOPEN			163#define		kALERT_SELECTEDMOVIE	164/* ------------------------------------------------------------------------- */OSErr		MyInitialize(void);Boolean		MyEvent(WindowPtr theWindow, EventRecord *myEvent);void		MyIdle(WindowPtr theWindow);OSErr		MyDoCommand(short theMenu, short theItem);void		MyDoKeyDown(EventRecord *myEvent);void		MyDraw(WindowPtr theWindow);void		MyFinishup(void);long		MyYieldTime(long message);void		MyInContent(WindowPtr foundWindow, Point where);void		MyZoomWindow(WindowPtr foundWindow, short windowPart);void		MyAdjustMenus(void);void		MyNew(void);void		MyOpen(FSSpec *theFSS);void		MyClose(void);void		MySave(void);void		MySaveAs(void);void		MyPageSetup(void);void		MyPrint(void);void		MyUndo(void);void		MyCut(void);void		MyCopy(void);void		MyPaste(void);void		MyClear(void);void		MySelectAll(void);