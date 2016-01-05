// sampleDlg.h : header file
//
//{{AFX_INCLUDES()
#include "dvdplayer.h"
//}}AFX_INCLUDES

#if !defined(AFX_SAMPLEDLG_H__AB14C2DC_F7D7_4D28_9EEE_0F4D7F2603A4__INCLUDED_)
#define AFX_SAMPLEDLG_H__AB14C2DC_F7D7_4D28_9EEE_0F4D7F2603A4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSampleDlg dialog

class CSampleDlg : public CDialog
{
// Construction
public:
	void ClearControl();
	CSampleDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSampleDlg)
	enum { IDD = IDD_SAMPLE_DIALOG };
	CSliderCtrl	m_SliderSaturation;
	CSliderCtrl	m_SliderHue;
	CSliderCtrl	m_SliderContrast;
	CSliderCtrl	m_SliderBrightness;
	CSliderCtrl	m_SliderTempoDecrease;
	CSliderCtrl	m_SliderTempoIncrease;
	CButton	m_ChkUseAudioPitch;
	CSliderCtrl	m_SliderPitch;
	CButton	m_ChkEnableMultiMonitor;
	CSliderCtrl	m_SliderPos;
	CComboBox	m_CboChapter;
	CListBox	m_ListSubTitle;
	CComboBox	m_CboTitle;
	CListBox	m_ListAudioLang;
	CDVDPlayer	m_DVDPlayer;
	BOOL	m_bShowSubTitle;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSampleDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSampleDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBtnopendvd();
	afx_msg void OnBtnopendvdfolder();
	afx_msg void OnTitleChangeDvdplayerctrl1();
	afx_msg void OnFirstPlayDvdplayerctrl1();
	afx_msg void OnSelchangeCbotitle();
	afx_msg void OnButton1();
	afx_msg void OnDisplayingTitleMenuDvdplayerctrl1();
	afx_msg void OnSelchangeAudiolanglist();
	afx_msg void OnSelchangeSubtitle();
	afx_msg void OnChkshowsubtitle();
	afx_msg void OnBtnplay();
	afx_msg void OnBtnpause();
	afx_msg void OnOnPlayingDvdplayerctrl1(double iCurPos, double iDuration, LPCTSTR strCurPos, LPCTSTR strDuration);
	afx_msg void OnBtnstepframe();
	afx_msg void OnSelchangeCbochapter();
	afx_msg void OnBtnfullscreen();
	afx_msg void OnBtnroot();
	afx_msg void OnBtntitle();
	afx_msg void OnBtnnextchap();
	afx_msg void OnBtnprevchap();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnButton7();
	afx_msg void OnButton2();
	afx_msg void OnButton4();
	afx_msg void OnButton3();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	afx_msg void OnCheck1();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnButton10();
	afx_msg void OnChkuseaudiopitch();
	afx_msg void OnButton11();
	afx_msg void OnButton12();
	afx_msg void OnButton13();
	afx_msg void OnButton14();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAMPLEDLG_H__AB14C2DC_F7D7_4D28_9EEE_0F4D7F2603A4__INCLUDED_)
