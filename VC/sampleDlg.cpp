// sampleDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sample.h"
#include "sampleDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSampleDlg dialog

CSampleDlg::CSampleDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSampleDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSampleDlg)
	m_bShowSubTitle = TRUE;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSampleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSampleDlg)
	DDX_Control(pDX, IDC_SLIDERSATURATION, m_SliderSaturation);
	DDX_Control(pDX, IDC_SLIDERHUE, m_SliderHue);
	DDX_Control(pDX, IDC_SLIDERCONTRAST, m_SliderContrast);
	DDX_Control(pDX, IDC_SLIDERBRIGHTNESS, m_SliderBrightness);
	DDX_Control(pDX, IDC_SLIDERTEMPODEC, m_SliderTempoDecrease);
	DDX_Control(pDX, IDC_SLIDERTEMPOINC, m_SliderTempoIncrease);
	DDX_Control(pDX, IDC_CHKUSEAUDIOPITCH, m_ChkUseAudioPitch);
	DDX_Control(pDX, IDC_SLIDERPITCH, m_SliderPitch);
	DDX_Control(pDX, IDC_CHECK1, m_ChkEnableMultiMonitor);
	DDX_Control(pDX, IDC_SLIDER1, m_SliderPos);
	DDX_Control(pDX, IDC_CBOCHAPTER, m_CboChapter);
	DDX_Control(pDX, IDC_SUBTITLE, m_ListSubTitle);
	DDX_Control(pDX, IDC_CBOTITLE, m_CboTitle);
	DDX_Control(pDX, IDC_AUDIOLANGLIST, m_ListAudioLang);
	DDX_Control(pDX, IDC_DVDPLAYERCTRL1, m_DVDPlayer);
	DDX_Check(pDX, IDC_CHKSHOWSUBTITLE, m_bShowSubTitle);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSampleDlg, CDialog)
	//{{AFX_MSG_MAP(CSampleDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTNOPENDVD, OnBtnopendvd)
	ON_BN_CLICKED(IDC_BTNOPENDVDFOLDER, OnBtnopendvdfolder)
	ON_CBN_SELCHANGE(IDC_CBOTITLE, OnSelchangeCbotitle)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_LBN_SELCHANGE(IDC_AUDIOLANGLIST, OnSelchangeAudiolanglist)
	ON_LBN_SELCHANGE(IDC_SUBTITLE, OnSelchangeSubtitle)
	ON_BN_CLICKED(IDC_CHKSHOWSUBTITLE, OnChkshowsubtitle)
	ON_BN_CLICKED(IDC_BTNPLAY, OnBtnplay)
	ON_BN_CLICKED(IDC_BTNPAUSE, OnBtnpause)
	ON_BN_CLICKED(IDC_BTNSTEPFRAME, OnBtnstepframe)
	ON_CBN_SELCHANGE(IDC_CBOCHAPTER, OnSelchangeCbochapter)
	ON_BN_CLICKED(IDC_BTNFULLSCREEN, OnBtnfullscreen)
	ON_BN_CLICKED(IDC_BTNROOT, OnBtnroot)
	ON_BN_CLICKED(IDC_BTNTITLE, OnBtntitle)
	ON_BN_CLICKED(IDC_BTNNEXTCHAP, OnBtnnextchap)
	ON_BN_CLICKED(IDC_BTNPREVCHAP, OnBtnprevchap)
	ON_WM_MOUSEMOVE()
	ON_WM_KEYDOWN()
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	ON_BN_CLICKED(IDC_CHECK1, OnCheck1)
	ON_WM_HSCROLL()
	ON_BN_CLICKED(IDC_BUTTON10, OnButton10)
	ON_BN_CLICKED(IDC_CHKUSEAUDIOPITCH, OnChkuseaudiopitch)
	ON_BN_CLICKED(IDC_BUTTON11, OnButton11)
	ON_BN_CLICKED(IDC_BUTTON12, OnButton12)
	ON_BN_CLICKED(IDC_BUTTON13, OnButton13)
	ON_BN_CLICKED(IDC_BUTTON14, OnButton14)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSampleDlg message handlers

BOOL CSampleDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	m_SliderPitch.SetRange(0,24);
	m_SliderPitch.SetPos(12);

	m_SliderTempoIncrease.SetRange(0,100);
	m_SliderTempoDecrease.SetRange(0,50);

	m_SliderBrightness.SetRange(0,500);
	m_SliderBrightness.SetPos(255);

	m_SliderContrast.SetRange(0,10);
	m_SliderContrast.SetPos(1);

	m_SliderHue.SetRange(0,360);
	m_SliderHue.SetPos(180);

	m_SliderSaturation.SetRange(0,10);
	m_SliderSaturation.SetPos(1);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSampleDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSampleDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSampleDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CSampleDlg::OnBtnopendvd() 
{
	// TODO: Add your control notification handler code here
	ClearControl();
	
	if(this->m_ChkEnableMultiMonitor.GetCheck()==1)
		m_DVDPlayer.SetEnableSpanMultiMonitor(true);
	else
		m_DVDPlayer.SetEnableSpanMultiMonitor(false);
	
	if(this->m_ChkUseAudioPitch.GetCheck()==1)
		m_DVDPlayer.SetEnableAudioPitch(true);
	else
		m_DVDPlayer.SetEnableAudioPitch(false);

	m_DVDPlayer.OpenDVD();
}

void CSampleDlg::OnBtnopendvdfolder() 
{
	ClearControl();
	// TODO: Add your control notification handler code here

	if(this->m_ChkEnableMultiMonitor.GetCheck()==1)
		m_DVDPlayer.SetEnableSpanMultiMonitor(true);
	else
		m_DVDPlayer.SetEnableSpanMultiMonitor(false);

	if(this->m_ChkUseAudioPitch.GetCheck()==1)
		m_DVDPlayer.SetEnableAudioPitch(true);
	else
		m_DVDPlayer.SetEnableAudioPitch(false);

	m_DVDPlayer.OpenDVDFolder("Select VS_FOLDER");
	
}

BEGIN_EVENTSINK_MAP(CSampleDlg, CDialog)
    //{{AFX_EVENTSINK_MAP(CSampleDlg)
	ON_EVENT(CSampleDlg, IDC_DVDPLAYERCTRL1, 1 /* TitleChange */, OnTitleChangeDvdplayerctrl1, VTS_NONE)
	ON_EVENT(CSampleDlg, IDC_DVDPLAYERCTRL1, 6 /* FirstPlay */, OnFirstPlayDvdplayerctrl1, VTS_NONE)
	ON_EVENT(CSampleDlg, IDC_DVDPLAYERCTRL1, 4 /* DisplayingTitleMenu */, OnDisplayingTitleMenuDvdplayerctrl1, VTS_NONE)
	ON_EVENT(CSampleDlg, IDC_DVDPLAYERCTRL1, 9 /* OnPlaying */, OnOnPlayingDvdplayerctrl1, VTS_R8 VTS_R8 VTS_BSTR VTS_BSTR)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void CSampleDlg::OnTitleChangeDvdplayerctrl1() 
{
	// TODO: Add your control notification handler code here
	UpdateData(FALSE);

	int iCount = m_DVDPlayer.GetAudioStreamCount();

	for(int i=0; i< iCount; i++)
		m_ListAudioLang.DeleteString(0);


	for(i=0; i< iCount; i++)
	{
		m_ListAudioLang.AddString(m_DVDPlayer.GetAudioStreamName(i));
	}

	int iSubTitleCount = m_DVDPlayer.GetSubTitlesCount();
	
	for(i=0; i< iSubTitleCount;i++)
		m_ListSubTitle.DeleteString(0);

	for(i=0; i< iSubTitleCount; i++)
	{
		m_ListSubTitle.AddString(m_DVDPlayer.GetSubTitlesName(i));
	}

	if(m_bShowSubTitle)
			m_DVDPlayer.SetSubTitlesEnable(TRUE);
	else
			m_DVDPlayer.SetSubTitlesEnable(FALSE);
	
//	int iSelTitle = this->m_CboTitle.GetCurSel();

//	m_SliderPos.SetRange(0,m_DVDPlayer.GetDuration());
//	m_SliderPos.SetPos(0);
	
}

void CSampleDlg::OnFirstPlayDvdplayerctrl1() 
{
	// TODO: Add your control notification handler code here
	
	int iCount = m_DVDPlayer.GetTitlesCount();

	for(int i=1; i<= iCount;i ++)
	{
		CString str;
		str.Format("Title %d",i);
		m_CboTitle.AddString(str);

	}
	m_CboTitle.SetCurSel(0);

	OnSelchangeCbotitle();
	
	/*
	int iChapterCount = m_DVDPlayer.GetChaptersCount(1);

	for(i=1; i<= iChapterCount;i ++)
	{
			CString str;
		str.Format("Chapter %d",i);
		this->m_CboChapter.AddString(str);

	}

	if(m_CboChapter.GetCurSel() >0)
		m_CboChapter.SetCurSel(0);
	*/

}

void CSampleDlg::OnSelchangeCbotitle() 
{
	// TODO: Add your control notification handler code here
	int iSelTitle =m_CboTitle.GetCurSel()+1;

		for(int i=0; i< 50;i++)
				m_CboChapter.DeleteString(0);

	m_DVDPlayer.SetTitle(iSelTitle);

//	int iCurTitle = m_DVDPlayer.GetCurTitle();

	if(iSelTitle!=-1)
	{

		int iChapterCount = m_DVDPlayer.GetChaptersCount(iSelTitle);
		
		//CString str1;

		//str1.Format("%d %d",iSelTitle, iChapterCount);
		//AfxMessageBox(str1);

			for(i=0; i< 50;i++)
				m_CboChapter.DeleteString(0);

			
		for(i=1; i<= iChapterCount; i++)
		{
			CString str;
			str.Format("Chapter %d",i);

			this->m_CboChapter.AddString(str);
		}

		if(m_CboChapter.GetCount()>0)
			m_CboChapter.SetCurSel(0);
	}	

}

void CSampleDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	m_SliderPitch.SetPos(12);
	m_DVDPlayer.ChangePitch(m_SliderPitch.GetPos()-12);

}

void CSampleDlg::OnDisplayingTitleMenuDvdplayerctrl1() 
{
	// TODO: Add your control notification handler code here
	OnTitleChangeDvdplayerctrl1();

}

void CSampleDlg::OnSelchangeAudiolanglist() 
{
	// TODO: Add your control notification handler code here
		int iSelAudioLang =this->m_ListAudioLang.GetCurSel();

		if(iSelAudioLang!=-1)
			m_DVDPlayer.SetAudioStream(iSelAudioLang);
}

void CSampleDlg::OnSelchangeSubtitle() 
{
	// TODO: Add your control notification handler code here
		int iSelSubTitle =this->m_ListSubTitle.GetCurSel();

	

		if(iSelSubTitle!=-1)
			m_DVDPlayer.SetSubTitlesStream(iSelSubTitle);
}

void CSampleDlg::OnChkshowsubtitle() 
{
	// TODO: Add your control notification handler code here
	if(((CButton*)GetDlgItem(IDC_CHKSHOWSUBTITLE))->GetCheck()==1)
			m_DVDPlayer.SetSubTitlesEnable(TRUE);
	else
			m_DVDPlayer.SetSubTitlesEnable(FALSE);
}

void CSampleDlg::OnBtnplay() 
{
	// TODO: Add your control notification handler code here

	m_DVDPlayer.Play();

}

void CSampleDlg::OnBtnpause() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.Pause();

}

void CSampleDlg::OnOnPlayingDvdplayerctrl1(double iCurPos, double iDuration, LPCTSTR strCurPos, LPCTSTR strDuration) 
{
	// TODO: Add your control notification handler code here
	GetDlgItem(IDC_EDITCURPOS)->SetWindowText(strCurPos);
	GetDlgItem(IDC_EDITDUR)->SetWindowText(strDuration);
	m_SliderPos.SetRange(0,iDuration);
	m_SliderPos.SetPos(iCurPos);
	
}

void CSampleDlg::OnBtnstepframe() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.StepFrame(1);
}

void CSampleDlg::OnSelchangeCbochapter() 
{
	// TODO: Add your control notification handler code here
	int iSel =m_CboChapter.GetCurSel();

	if(iSel!=-1)
	m_DVDPlayer.SetChapter(iSel+1);
}

void CSampleDlg::OnBtnfullscreen() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.SetReceivedFullScreenHWnd((long)m_hWnd);
	m_DVDPlayer.ShowFullScreen(TRUE);
}

BOOL CSampleDlg::PreTranslateMessage(MSG* pMsg) 
{
	// TODO: Add your specialized code here and/or call the base class
		
	
		if((pMsg->message == WM_KEYDOWN) && (pMsg->wParam == VK_ESCAPE))
		{
			//if(this->m_CboKey.GetCurSel()==0)
				
				m_DVDPlayer.ShowFullScreen(FALSE);
				return TRUE;
		
		}	
	


	return CDialog::PreTranslateMessage(pMsg);
}

void CSampleDlg::OnBtnroot() 
{
	// TODO: Add your control notification handler code here

	m_DVDPlayer.GoRootMenu();

}

void CSampleDlg::OnBtntitle() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.GoTitleMenu();

}

void CSampleDlg::ClearControl()
{

		for(int i=0; i< 50;i++)
				m_CboChapter.DeleteString(0);

		for(i=0;i< 50;i++)
			m_CboTitle.DeleteString(0);
	
		for(i=0;i< 10;i++)
		m_ListSubTitle.DeleteString(0);

		for(i=0;i< 10;i++)
		this->m_ListAudioLang.DeleteString(0);

}

void CSampleDlg::OnBtnnextchap() 
{
	// TODO: Add your control notification handler code here

	m_DVDPlayer.PlayNextChapter();

}

void CSampleDlg::OnBtnprevchap() 
{
	// TODO: Add your control notification handler code here
		m_DVDPlayer.PlayPrevChapter();

}

void CSampleDlg::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	m_DVDPlayer.MenuSelectAtPosition(point.x,point.y);

	CDialog::OnMouseMove(nFlags, point);
}

void CSampleDlg::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default


	CDialog::OnKeyDown(nChar, nRepCnt, nFlags);
}

void CSampleDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}

void CSampleDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	
//	CDialog::OnCancel();
}

void CSampleDlg::OnButton7() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.SetPlaybackRate(-4.0);

}

void CSampleDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
		m_DVDPlayer.SetPlaybackRate(1.0);

}

void CSampleDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
		m_DVDPlayer.SetPlaybackRate(4.0);
}

void CSampleDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
		m_DVDPlayer.SetPlaybackRate(0.5);
}

void CSampleDlg::OnButton5() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.SetPlaybackRate(8.0);
}

void CSampleDlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.SetPlaybackRate(16.0);
}

void CSampleDlg::OnButton8() 
{
	// TODO: Add your control notification handler code here
		m_DVDPlayer.SetPlaybackRate(-8.0);
}

void CSampleDlg::OnButton9() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.SetPlaybackRate(-16.0);	
}

void CSampleDlg::OnCheck1() 
{
	// TODO: Add your control notification handler code here
		if(this->m_ChkEnableMultiMonitor.GetCheck()==1)
		{
			GetDlgItem(IDC_BTNFULLSCREEN)->EnableWindow(FALSE);
		}
		else
			GetDlgItem(IDC_BTNFULLSCREEN)->EnableWindow(TRUE);

}

void CSampleDlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar) 
{
	// TODO: Add your message handler code here and/or call default
	if(pScrollBar->GetDlgCtrlID()==IDC_SLIDERPITCH)
	{
		m_DVDPlayer.ChangePitch(m_SliderPitch.GetPos()-12);
	}
	else if(pScrollBar->GetDlgCtrlID()==IDC_SLIDERTEMPOINC)
	{

		m_DVDPlayer.ChangeTempo(m_SliderTempoIncrease.GetPos());
	}
	else if(pScrollBar->GetDlgCtrlID()==IDC_SLIDERTEMPODEC)
	{

		m_DVDPlayer.ChangeTempo(m_SliderTempoDecrease.GetPos()*-1);
	}
	else if(pScrollBar->GetDlgCtrlID()==IDC_SLIDERBRIGHTNESS)
	{

		m_DVDPlayer.Brightness(m_SliderBrightness.GetPos()-255);
	}
	else if(pScrollBar->GetDlgCtrlID()==IDC_SLIDERCONTRAST)
	{

		m_DVDPlayer.Contrast(m_SliderContrast.GetPos());
	}
	else if(pScrollBar->GetDlgCtrlID()==IDC_SLIDERHUE)
	{

		m_DVDPlayer.Hue(m_SliderHue.GetPos()-180);
	}
	else if(pScrollBar->GetDlgCtrlID()==IDC_SLIDERSATURATION)
	{

		m_DVDPlayer.Saturation(m_SliderSaturation.GetPos());
	}

	CDialog::OnHScroll(nSBCode, nPos, pScrollBar);
}

void CSampleDlg::OnButton10() 
{
	// TODO: Add your control notification handler code here
		m_SliderTempoIncrease.SetPos(0);
		m_SliderTempoDecrease.SetPos(0);
	m_DVDPlayer.ChangeTempo(0);
}

void CSampleDlg::OnChkuseaudiopitch() 
{
	// TODO: Add your control notification handler code here
		if(m_ChkUseAudioPitch.GetCheck()==1)
		{
			GetDlgItem(IDC_BUTTON1)->EnableWindow(TRUE);
			m_SliderTempoIncrease.EnableWindow(TRUE);
			m_SliderTempoDecrease.EnableWindow(TRUE);
			m_SliderPitch.EnableWindow(TRUE);
			GetDlgItem(IDC_BUTTON10)->EnableWindow(TRUE);
			
		}
		else
		{
			GetDlgItem(IDC_BUTTON1)->EnableWindow(FALSE);
			GetDlgItem(IDC_BUTTON10)->EnableWindow(FALSE);
			m_SliderTempoIncrease.EnableWindow(FALSE);
			m_SliderTempoDecrease.EnableWindow(FALSE);
			m_SliderPitch.EnableWindow(FALSE);


		}
}

void CSampleDlg::OnButton11() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.Brightness(0);
	m_SliderBrightness.SetPos(255);
}

void CSampleDlg::OnButton12() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.Contrast(1);
	m_SliderContrast.SetPos(1);

}

void CSampleDlg::OnButton13() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.Hue(0);
	m_SliderHue.SetPos(180);

}

void CSampleDlg::OnButton14() 
{
	// TODO: Add your control notification handler code here
	m_DVDPlayer.Saturation(1);
	m_SliderSaturation.SetPos(1);
}
