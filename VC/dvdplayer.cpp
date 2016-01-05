// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "dvdplayer.h"

/////////////////////////////////////////////////////////////////////////////
// CDVDPlayer

IMPLEMENT_DYNCREATE(CDVDPlayer, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CDVDPlayer properties

short CDVDPlayer::GetClearFullScreenKey()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void CDVDPlayer::SetClearFullScreenKey(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

short CDVDPlayer::GetClearFullScreenMouseButton()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void CDVDPlayer::SetClearFullScreenMouseButton(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

short CDVDPlayer::GetClearFullScreenType()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void CDVDPlayer::SetClearFullScreenType(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

CString CDVDPlayer::GetLicenseKey()
{
	CString result;
	GetProperty(0x4, VT_BSTR, (void*)&result);
	return result;
}

void CDVDPlayer::SetLicenseKey(LPCTSTR propVal)
{
	SetProperty(0x4, VT_BSTR, propVal);
}

long CDVDPlayer::GetSoundVolume()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void CDVDPlayer::SetSoundVolume(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

long CDVDPlayer::GetReceivedFullScreenHWnd()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void CDVDPlayer::SetReceivedFullScreenHWnd(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

BOOL CDVDPlayer::GetEnableSpanMultiMonitor()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void CDVDPlayer::SetEnableSpanMultiMonitor(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

BOOL CDVDPlayer::GetEnableAudioPitch()
{
	BOOL result;
	GetProperty(0x8, VT_BOOL, (void*)&result);
	return result;
}

void CDVDPlayer::SetEnableAudioPitch(BOOL propVal)
{
	SetProperty(0x8, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CDVDPlayer operations

void CDVDPlayer::Play()
{
	InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CDVDPlayer::Pause()
{
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CDVDPlayer::SetTitle(short iTitle)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iTitle);
}

void CDVDPlayer::SetChapter(short iChapter)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iChapter);
}

void CDVDPlayer::Mute()
{
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CDVDPlayer::PlayPrevChapter()
{
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CDVDPlayer::PlayNextChapter()
{
	InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CDVDPlayer::GoRootMenu()
{
	InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CDVDPlayer::GoTitleMenu()
{
	InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

short CDVDPlayer::GetTitlesCount()
{
	short result;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short CDVDPlayer::GetCurTitle()
{
	short result;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short CDVDPlayer::GetChaptersCount(short iTitle)
{
	short result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		iTitle);
	return result;
}

short CDVDPlayer::GetAudioStreamCount()
{
	short result;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

CString CDVDPlayer::GetAudioStreamName(short iIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		iIndex);
	return result;
}

BOOL CDVDPlayer::SetAudioStream(short iStreamIndex)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		iStreamIndex);
	return result;
}

short CDVDPlayer::GetSubTitlesCount()
{
	short result;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

CString CDVDPlayer::GetSubTitlesName(short iIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		iIndex);
	return result;
}

BOOL CDVDPlayer::SetSubTitlesStream(short iStreamIndex)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		iStreamIndex);
	return result;
}

void CDVDPlayer::SetSubTitlesEnable(BOOL bEnable)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bEnable);
}

BOOL CDVDPlayer::SetPlaybackRate(double iRate)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		iRate);
	return result;
}

BOOL CDVDPlayer::SetClosedCaptionsEnable(BOOL bEnable)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		bEnable);
	return result;
}

void CDVDPlayer::StepFrame(short iFrame)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iFrame);
}

BOOL CDVDPlayer::ShowFullScreen(BOOL bFull)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1f, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		bFull);
	return result;
}

CString CDVDPlayer::GetCurPosStrFormat()
{
	CString result;
	InvokeHelper(0x20, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CDVDPlayer::GetCurPos()
{
	double result;
	InvokeHelper(0x21, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CDVDPlayer::GetDurationStrFormat()
{
	CString result;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CDVDPlayer::GetDuration()
{
	double result;
	InvokeHelper(0x23, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CDVDPlayer::OpenDVD()
{
	BOOL result;
	InvokeHelper(0x24, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CDVDPlayer::OpenDVDFolder(LPCTSTR strFolderTitle)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x25, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		strFolderTitle);
	return result;
}

void CDVDPlayer::ResizeControl(short iWidth, short iHeight)
{
	static BYTE parms[] =
		VTS_I2 VTS_I2;
	InvokeHelper(0x26, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iWidth, iHeight);
}

short CDVDPlayer::GetCurChapter()
{
	short result;
	InvokeHelper(0x27, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

void CDVDPlayer::MenuSelectAtPosition(long iX, long iY)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x28, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iX, iY);
}

void CDVDPlayer::MenuSelectKeyboardButton(short iKey)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x29, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iKey);
}

void CDVDPlayer::Stop()
{
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CDVDPlayer::SetPos(double iPosValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x2b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iPosValue);
}

BOOL CDVDPlayer::MenuSelectButton(short iIndex)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x2c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		iIndex);
	return result;
}

void CDVDPlayer::MenuActivateButton()
{
	InvokeHelper(0x2d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CDVDPlayer::OpenDVDPath(LPCTSTR strDVDPath)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		strDVDPath);
	return result;
}

void CDVDPlayer::Brightness(float iBrightness)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x2f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iBrightness);
}

void CDVDPlayer::Contrast(float iContrast)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x30, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iContrast);
}

void CDVDPlayer::Hue(float iHue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x31, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iHue);
}

void CDVDPlayer::Saturation(float iSaturation)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x32, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iSaturation);
}

void CDVDPlayer::SetDeinterlaceMode(short iMode)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x33, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iMode);
}

void CDVDPlayer::ChangePitch(short iPitch)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x34, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iPitch);
}

void CDVDPlayer::ChangeTempo(short iTempo)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x35, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iTempo);
}

void CDVDPlayer::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}