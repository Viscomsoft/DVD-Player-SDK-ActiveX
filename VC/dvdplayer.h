// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CDVDPlayer wrapper class

class CDVDPlayer : public CWnd
{
protected:
	DECLARE_DYNCREATE(CDVDPlayer)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xf266d043, 0xd178, 0x423f, { 0x9d, 0xd5, 0x2b, 0x6e, 0x65, 0x6f, 0x59, 0x54 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
	short GetClearFullScreenKey();
	void SetClearFullScreenKey(short);
	short GetClearFullScreenMouseButton();
	void SetClearFullScreenMouseButton(short);
	short GetClearFullScreenType();
	void SetClearFullScreenType(short);
	CString GetLicenseKey();
	void SetLicenseKey(LPCTSTR);
	long GetSoundVolume();
	void SetSoundVolume(long);
	long GetReceivedFullScreenHWnd();
	void SetReceivedFullScreenHWnd(long);
	BOOL GetEnableSpanMultiMonitor();
	void SetEnableSpanMultiMonitor(BOOL);
	BOOL GetEnableAudioPitch();
	void SetEnableAudioPitch(BOOL);

// Operations
public:
	void Play();
	void Pause();
	void SetTitle(short iTitle);
	void SetChapter(short iChapter);
	void Mute();
	void PlayPrevChapter();
	void PlayNextChapter();
	void GoRootMenu();
	void GoTitleMenu();
	short GetTitlesCount();
	short GetCurTitle();
	short GetChaptersCount(short iTitle);
	short GetAudioStreamCount();
	CString GetAudioStreamName(short iIndex);
	BOOL SetAudioStream(short iStreamIndex);
	short GetSubTitlesCount();
	CString GetSubTitlesName(short iIndex);
	BOOL SetSubTitlesStream(short iStreamIndex);
	void SetSubTitlesEnable(BOOL bEnable);
	BOOL SetPlaybackRate(double iRate);
	BOOL SetClosedCaptionsEnable(BOOL bEnable);
	void StepFrame(short iFrame);
	BOOL ShowFullScreen(BOOL bFull);
	CString GetCurPosStrFormat();
	double GetCurPos();
	CString GetDurationStrFormat();
	double GetDuration();
	BOOL OpenDVD();
	BOOL OpenDVDFolder(LPCTSTR strFolderTitle);
	void ResizeControl(short iWidth, short iHeight);
	short GetCurChapter();
	void MenuSelectAtPosition(long iX, long iY);
	void MenuSelectKeyboardButton(short iKey);
	void Stop();
	void SetPos(double iPosValue);
	BOOL MenuSelectButton(short iIndex);
	void MenuActivateButton();
	BOOL OpenDVDPath(LPCTSTR strDVDPath);
	void Brightness(float iBrightness);
	void Contrast(float iContrast);
	void Hue(float iHue);
	void Saturation(float iSaturation);
	void SetDeinterlaceMode(short iMode);
	void ChangePitch(short iPitch);
	void ChangeTempo(short iTempo);
	void AboutBox();
};