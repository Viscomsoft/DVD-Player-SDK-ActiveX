VERSION 5.00
Object = "{3165C26F-E381-44B6-9669-75394C28F2A8}#1.0#0"; "DVDPLA~1.OCX"
Object = "{831FDD16-0C5C-11D2-A9FC-0000F8754DA1}#2.0#0"; "mscomctl.ocx"
Begin VB.Form Form1 
   Caption         =   "DVD Player"
   ClientHeight    =   11490
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   18135
   LinkTopic       =   "Form1"
   ScaleHeight     =   11490
   ScaleWidth      =   18135
   StartUpPosition =   3  'Windows Default
   Begin VB.ComboBox cbodeinterlace 
      Height          =   315
      Left            =   13920
      Style           =   2  'Dropdown List
      TabIndex        =   78
      Top             =   8280
      Width           =   1815
   End
   Begin VB.CommandButton Command19 
      Caption         =   "default"
      Height          =   255
      Left            =   17040
      TabIndex        =   74
      Top             =   5400
      Width           =   735
   End
   Begin VB.Frame Frame5 
      Height          =   3735
      Left            =   12240
      TabIndex        =   64
      Top             =   4440
      Width           =   5775
      Begin VB.CommandButton Command21 
         Caption         =   "default"
         Height          =   255
         Left            =   4800
         TabIndex        =   76
         Top             =   2880
         Width           =   735
      End
      Begin VB.CommandButton Command20 
         Caption         =   "default"
         Height          =   255
         Left            =   4800
         TabIndex        =   75
         Top             =   1920
         Width           =   735
      End
      Begin VB.CommandButton Command18 
         Caption         =   "default"
         Height          =   255
         Left            =   4800
         TabIndex        =   73
         Top             =   240
         Width           =   735
      End
      Begin MSComctlLib.Slider SliderSaturation 
         Height          =   375
         Left            =   240
         TabIndex        =   72
         Top             =   3120
         Width           =   5295
         _ExtentX        =   9340
         _ExtentY        =   661
         _Version        =   393216
      End
      Begin MSComctlLib.Slider SliderHue 
         Height          =   375
         Left            =   240
         TabIndex        =   70
         Top             =   2160
         Width           =   5295
         _ExtentX        =   9340
         _ExtentY        =   661
         _Version        =   393216
         Max             =   360
      End
      Begin MSComctlLib.Slider SliderContrast 
         Height          =   495
         Left            =   240
         TabIndex        =   67
         Top             =   1200
         Width           =   5295
         _ExtentX        =   9340
         _ExtentY        =   873
         _Version        =   393216
      End
      Begin MSComctlLib.Slider SliderBrightness 
         Height          =   375
         Left            =   240
         TabIndex        =   65
         Top             =   480
         Width           =   5295
         _ExtentX        =   9340
         _ExtentY        =   661
         _Version        =   393216
         Max             =   500
      End
      Begin VB.Label Label15 
         Caption         =   "Saturation"
         Height          =   375
         Left            =   360
         TabIndex        =   71
         Top             =   2760
         Width           =   855
      End
      Begin VB.Label Label14 
         Caption         =   "Hue"
         Height          =   375
         Left            =   360
         TabIndex        =   69
         Top             =   1920
         Width           =   495
      End
      Begin VB.Label Label13 
         Caption         =   "Contrast"
         Height          =   255
         Left            =   360
         TabIndex        =   68
         Top             =   840
         Width           =   1095
      End
      Begin VB.Label Label12 
         Caption         =   "Brightness"
         Height          =   255
         Left            =   360
         TabIndex        =   66
         Top             =   240
         Width           =   1335
      End
   End
   Begin VB.CheckBox chkuseaudiopitch 
      Caption         =   "Use Audio Pitch"
      Height          =   375
      Left            =   120
      TabIndex        =   62
      Top             =   1320
      Width           =   1935
   End
   Begin VB.Frame Frame4 
      Caption         =   "Pitch and Tempo"
      Height          =   2895
      Left            =   240
      TabIndex        =   51
      Top             =   8280
      Width           =   6135
      Begin VB.CommandButton cmdtemporestore 
         Caption         =   "Restore Default"
         Enabled         =   0   'False
         Height          =   375
         Left            =   4800
         TabIndex        =   53
         Top             =   1680
         Width           =   1335
      End
      Begin VB.CommandButton cmdpitchrestore 
         Caption         =   "Restore Default"
         Enabled         =   0   'False
         Height          =   375
         Left            =   4800
         TabIndex        =   52
         Top             =   840
         Width           =   1335
      End
      Begin MSComctlLib.Slider SliderPitch 
         Height          =   255
         Left            =   360
         TabIndex        =   54
         Top             =   840
         Width           =   3015
         _ExtentX        =   5318
         _ExtentY        =   450
         _Version        =   393216
         Enabled         =   0   'False
         Max             =   24
      End
      Begin MSComctlLib.Slider SliderTempoIncrease 
         Height          =   255
         Left            =   360
         TabIndex        =   55
         Top             =   1440
         Width           =   4335
         _ExtentX        =   7646
         _ExtentY        =   450
         _Version        =   393216
         Enabled         =   0   'False
         Max             =   100
         TickFrequency   =   10
      End
      Begin MSComctlLib.Slider SliderTempoDecrease 
         Height          =   255
         Left            =   360
         TabIndex        =   56
         Top             =   2160
         Width           =   4335
         _ExtentX        =   7646
         _ExtentY        =   450
         _Version        =   393216
         Enabled         =   0   'False
         Max             =   50
         TickFrequency   =   10
      End
      Begin VB.Label lbldisablepitch 
         Caption         =   "Disable these features"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   20.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         ForeColor       =   &H000000FF&
         Height          =   495
         Left            =   1440
         TabIndex        =   63
         Top             =   120
         Width           =   4455
      End
      Begin VB.Label Label29 
         Caption         =   "Tempo Decrease"
         BeginProperty Font 
            Name            =   "Verdana"
            Size            =   6.75
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   0
         TabIndex        =   61
         Top             =   1800
         Width           =   1335
      End
      Begin VB.Label Label30 
         Caption         =   "Tempo Increase"
         BeginProperty Font 
            Name            =   "Verdana"
            Size            =   6.75
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   0
         TabIndex        =   60
         Top             =   1200
         Width           =   1335
      End
      Begin VB.Label Label31 
         Caption         =   "Pitch"
         BeginProperty Font 
            Name            =   "Verdana"
            Size            =   6.75
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   120
         TabIndex        =   59
         Top             =   360
         Width           =   855
      End
      Begin VB.Label Label32 
         Caption         =   "voice to man <-"
         Height          =   255
         Left            =   120
         TabIndex        =   58
         Top             =   600
         Width           =   1335
      End
      Begin VB.Label Label33 
         Caption         =   "-> voice to child"
         Height          =   255
         Left            =   2520
         TabIndex        =   57
         Top             =   600
         Width           =   1335
      End
   End
   Begin VB.CheckBox chkspanmultimonitor 
      Caption         =   "Enable Playback video spanned on Multi-Monitor"
      Height          =   375
      Left            =   120
      TabIndex        =   49
      Top             =   120
      Width           =   3135
   End
   Begin VB.TextBox txtmarkpos 
      Height          =   285
      Left            =   11400
      TabIndex        =   47
      Text            =   "0"
      Top             =   7080
      Width           =   735
   End
   Begin VB.CommandButton Command17 
      Caption         =   "Go to"
      Height          =   255
      Left            =   9240
      TabIndex        =   46
      Top             =   7080
      Width           =   1935
   End
   Begin VB.Frame Frame3 
      Caption         =   "Clear Full Screen Type"
      Height          =   1455
      Left            =   12240
      TabIndex        =   41
      Top             =   2880
      Width           =   4935
      Begin VB.ComboBox cbomousebutton 
         Enabled         =   0   'False
         Height          =   315
         Left            =   1920
         Style           =   2  'Dropdown List
         TabIndex        =   45
         Top             =   840
         Width           =   1935
      End
      Begin VB.ComboBox cbokey 
         Height          =   315
         Left            =   1920
         Style           =   2  'Dropdown List
         TabIndex        =   44
         Top             =   360
         Width           =   1935
      End
      Begin VB.OptionButton optcleartype2 
         Caption         =   "Mouse Button"
         Height          =   375
         Left            =   240
         TabIndex        =   43
         Top             =   840
         Width           =   1335
      End
      Begin VB.OptionButton optcleartype1 
         Caption         =   "Key"
         Height          =   255
         Left            =   240
         TabIndex        =   42
         Top             =   360
         Value           =   -1  'True
         Width           =   975
      End
   End
   Begin VB.CommandButton Command16 
      Caption         =   "Full Screen"
      Height          =   315
      Left            =   6960
      TabIndex        =   40
      Top             =   7080
      Width           =   1095
   End
   Begin VB.Frame Frame2 
      Caption         =   "Resize"
      Height          =   1455
      Left            =   12240
      TabIndex        =   34
      Top             =   1320
      Width           =   4935
      Begin VB.CommandButton Command15 
         Caption         =   "Resize"
         Height          =   255
         Left            =   120
         TabIndex        =   39
         Top             =   840
         Width           =   1215
      End
      Begin VB.TextBox Text2 
         Height          =   285
         Left            =   2760
         TabIndex        =   38
         Text            =   "240"
         Top             =   360
         Width           =   855
      End
      Begin VB.TextBox Text1 
         Height          =   285
         Left            =   840
         TabIndex        =   36
         Text            =   "320"
         Top             =   360
         Width           =   735
      End
      Begin VB.Label Label9 
         Caption         =   "Height"
         Height          =   255
         Left            =   1800
         TabIndex        =   37
         Top             =   360
         Width           =   735
      End
      Begin VB.Label Label8 
         Caption         =   "Width"
         Height          =   375
         Left            =   120
         TabIndex        =   35
         Top             =   360
         Width           =   615
      End
   End
   Begin VB.CommandButton Command14 
      Caption         =   "8X Reverse"
      Height          =   255
      Left            =   15000
      TabIndex        =   33
      Top             =   840
      Width           =   1215
   End
   Begin VB.CommandButton Command13 
      Caption         =   "2X Reverse"
      Height          =   255
      Left            =   12360
      TabIndex        =   32
      Top             =   840
      Width           =   1215
   End
   Begin VB.CommandButton Command12 
      Caption         =   "4X Reverse"
      Height          =   255
      Left            =   13680
      TabIndex        =   31
      Top             =   840
      Width           =   1215
   End
   Begin VB.CommandButton Command11 
      Caption         =   "16x"
      Height          =   255
      Left            =   16200
      TabIndex        =   30
      Top             =   480
      Width           =   855
   End
   Begin VB.CommandButton Command10 
      Caption         =   "8x"
      Height          =   255
      Left            =   15240
      TabIndex        =   29
      Top             =   480
      Width           =   855
   End
   Begin VB.CommandButton Command9 
      Caption         =   "4x"
      Height          =   255
      Left            =   14280
      TabIndex        =   28
      Top             =   480
      Width           =   855
   End
   Begin VB.CommandButton Command8 
      Caption         =   "1/2"
      Height          =   255
      Left            =   13320
      TabIndex        =   27
      Top             =   480
      Width           =   855
   End
   Begin VB.CommandButton Command7 
      Caption         =   "Next Chapter"
      BeginProperty Font 
         Name            =   "Arial"
         Size            =   6.75
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   -1  'True
         Strikethrough   =   0   'False
      EndProperty
      Height          =   315
      Left            =   2280
      TabIndex        =   26
      Top             =   6240
      Width           =   1455
   End
   Begin VB.CommandButton Command6 
      Caption         =   "Previous Chapter"
      BeginProperty Font 
         Name            =   "Arial"
         Size            =   6.75
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   -1  'True
         Strikethrough   =   0   'False
      EndProperty
      Height          =   315
      Left            =   840
      TabIndex        =   25
      Top             =   6240
      Width           =   1335
   End
   Begin VB.CommandButton cmdstep 
      Caption         =   "Step Frame"
      Height          =   315
      Left            =   5760
      TabIndex        =   23
      Top             =   7080
      Width           =   1095
   End
   Begin VB.CommandButton cmdpause 
      Caption         =   "Pause"
      Height          =   315
      Left            =   4800
      TabIndex        =   22
      Top             =   7080
      Width           =   855
   End
   Begin VB.CommandButton cmdplay 
      Caption         =   "Play"
      Height          =   315
      Left            =   3840
      TabIndex        =   21
      Top             =   7080
      Width           =   855
   End
   Begin VB.Frame Frame1 
      Caption         =   "Playback rate"
      Height          =   1095
      Left            =   12240
      TabIndex        =   20
      Top             =   120
      Width           =   4935
      Begin VB.CommandButton Command5 
         Caption         =   "Normal"
         Height          =   255
         Left            =   120
         TabIndex        =   24
         Top             =   360
         Width           =   855
      End
   End
   Begin VB.CommandButton Command4 
      Caption         =   "Go Title menu"
      Height          =   375
      Left            =   1560
      TabIndex        =   19
      Top             =   7560
      Width           =   1335
   End
   Begin VB.CommandButton Command3 
      Caption         =   "Go Root menu"
      Height          =   375
      Left            =   120
      TabIndex        =   18
      Top             =   7560
      Width           =   1335
   End
   Begin MSComctlLib.Slider Slider1 
      Height          =   255
      Left            =   3720
      TabIndex        =   14
      Top             =   7440
      Width           =   8295
      _ExtentX        =   14631
      _ExtentY        =   450
      _Version        =   393216
   End
   Begin VB.CheckBox chkshowsubtitle 
      Caption         =   "Show Subtitle"
      Height          =   255
      Left            =   1200
      TabIndex        =   12
      Top             =   3600
      Value           =   1  'Checked
      Width           =   1815
   End
   Begin VB.ComboBox cbochapter 
      Height          =   315
      Left            =   0
      Style           =   2  'Dropdown List
      TabIndex        =   11
      Top             =   6600
      Width           =   3375
   End
   Begin VB.ComboBox cbotitle 
      Height          =   315
      Left            =   0
      Style           =   2  'Dropdown List
      TabIndex        =   8
      Top             =   5280
      Width           =   3375
   End
   Begin VB.ListBox ListSubTitle 
      Height          =   645
      Left            =   0
      TabIndex        =   6
      Top             =   3960
      Width           =   3495
   End
   Begin VB.ListBox ListAudiolang 
      BeginProperty Font 
         Name            =   "Arial"
         Size            =   6.75
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   780
      Left            =   0
      TabIndex        =   4
      Top             =   2640
      Width           =   3495
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Open DVD Folder"
      Height          =   375
      Left            =   1920
      TabIndex        =   2
      Top             =   1800
      Width           =   1815
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Open DVD"
      Height          =   375
      Left            =   0
      TabIndex        =   1
      Top             =   1800
      Width           =   1815
   End
   Begin DVDPLAYERLib.DVDPlayer DVDPlayer1 
      Height          =   6975
      Left            =   3840
      TabIndex        =   0
      Top             =   0
      Width           =   8295
      _Version        =   65536
      _ExtentX        =   14631
      _ExtentY        =   12303
      _StockProps     =   0
   End
   Begin VB.Label Label16 
      Caption         =   "Deinterlace Mode"
      Height          =   255
      Left            =   12240
      TabIndex        =   77
      Top             =   8280
      Width           =   1335
   End
   Begin VB.Label Label11 
      Caption         =   $"Form1.frx":0000
      Height          =   615
      Left            =   120
      TabIndex        =   50
      Top             =   600
      Width           =   3615
   End
   Begin VB.Label Label10 
      Caption         =   "s"
      Height          =   255
      Left            =   12240
      TabIndex        =   48
      Top             =   7080
      Width           =   855
   End
   Begin VB.Label Label7 
      Caption         =   "/"
      Height          =   255
      Left            =   10680
      TabIndex        =   17
      Top             =   7800
      Width           =   135
   End
   Begin VB.Label lbldur 
      Caption         =   "00:00:00"
      Height          =   255
      Left            =   10920
      TabIndex        =   16
      Top             =   7800
      Width           =   975
   End
   Begin VB.Label lblcur 
      Caption         =   "00:00:00"
      Height          =   255
      Left            =   9960
      TabIndex        =   15
      Top             =   7800
      Width           =   855
   End
   Begin VB.Label Label6 
      Caption         =   "Select the item, go to specific chapter"
      ForeColor       =   &H000000FF&
      Height          =   255
      Left            =   0
      TabIndex        =   13
      Top             =   7080
      Width           =   2775
   End
   Begin VB.Label Label5 
      Caption         =   "Chapters"
      Height          =   255
      Left            =   0
      TabIndex        =   10
      Top             =   6240
      Width           =   615
   End
   Begin VB.Label Label4 
      Caption         =   "Select the item, go to specific title"
      ForeColor       =   &H000000FF&
      Height          =   255
      Left            =   0
      TabIndex        =   9
      Top             =   5640
      Width           =   2775
   End
   Begin VB.Label Label3 
      Caption         =   "Titles"
      Height          =   255
      Left            =   0
      TabIndex        =   7
      Top             =   4800
      Width           =   615
   End
   Begin VB.Label Label2 
      Caption         =   "SubTitles"
      Height          =   255
      Left            =   0
      TabIndex        =   5
      Top             =   3600
      Width           =   855
   End
   Begin VB.Label Label1 
      Caption         =   "Audio Language"
      Height          =   255
      Left            =   120
      TabIndex        =   3
      Top             =   2280
      Width           =   3135
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub cbochapter_Click()
    
  iSelChapter = Me.cbochapter.ListIndex
    
    If iSelChapter <> -1 Then
        DVDPlayer1.SetChapter iSelChapter + 1
    
    End If
    
End Sub

Sub Clear_Control()

ListAudiolang.Clear
ListSubTitle.Clear
cbotitle.Clear

cbochapter.Clear


End Sub

Private Sub cbodeinterlace_Click()
Me.DVDPlayer1.SetDeinterlaceMode cbodeinterlace.ListIndex
End Sub

Private Sub cbokey_Click()
Control_Clearfullscreenkey

End Sub

Private Sub cbomousebutton_Click()
Control_Clearfullscreenkey
End Sub

Private Sub cbotitle_Click()
DVDPlayer1.SetTitle (cbotitle.ListIndex + 1)

If cbotitle.ListIndex <> -1 Then

    
    iChapterCount = DVDPlayer1.GetChaptersCount(cbotitle.ListIndex + 1)
    
    cbochapter.Clear
    
    For i = 1 To iChapterCount
        
        cbochapter.AddItem "Chapter " + Trim(Str(i))
    Next
    
    If cbochapter.ListCount > 0 Then
         cbochapter.ListIndex = 0
    End If
    
End If


End Sub

Private Sub chkloop_Click()

End Sub



Private Sub chkspanmultimonitor_Click()

If chkspanmultimonitor.Value = 1 Then
    Command16.Enabled = False
    
Else
    Command16.Enabled = True
    
End If

End Sub

Private Sub chkuseaudiopitch_Click()

If chkuseaudiopitch.Value = 1 Then
    SliderPitch.Enabled = True
    cmdpitchrestore.Enabled = True
   lbldisablepitch.Visible = False
   SliderTempoIncrease.Enabled = True
   SliderTempoDecrease.Enabled = True
   cmdtemporestore.Enabled = True
   
Else
 lbldisablepitch.Visible = True
    SliderPitch.Enabled = False
    cmdpitchrestore.Enabled = False
    SliderTempoIncrease.Enabled = False
    SliderTempoDecrease.Enabled = False
    cmdtemporestore.Enabled = False
    
    
End If


End Sub

Private Sub cmdpause_Click()
Me.DVDPlayer1.Pause
End Sub

Private Sub cmdpitchrestore_Click()
SliderPitch.Value = 12
End Sub

Private Sub cmdplay_Click()
Me.DVDPlayer1.Play
End Sub

Private Sub cmdstep_Click()
DVDPlayer1.StepFrame 1
End Sub

Private Sub cmdtemporestore_Click()
Me.SliderTempoDecrease.Value = 0
Me.SliderTempoIncrease.Value = 0
End Sub

Private Sub Command1_Click()

DVDPlayer1.EnableSpanMultiMonitor = chkspanmultimonitor.Value
DVDPlayer1.EnableAudioPitch = chkuseaudiopitch.Value

Clear_Control
DVDPlayer1.OpenDVD
End Sub

Private Sub Command10_Click()
DVDPlayer1.SetPlaybackRate 8
End Sub

Private Sub Command11_Click()
DVDPlayer1.SetPlaybackRate 16
End Sub

Private Sub Command12_Click()
    DVDPlayer1.SetPlaybackRate -4
End Sub

Private Sub Command13_Click()
    DVDPlayer1.SetPlaybackRate -2
End Sub

Private Sub Command14_Click()
   DVDPlayer1.SetPlaybackRate -8
End Sub

Private Sub Command15_Click()
DVDPlayer1.ResizeControl Text1, Text2
End Sub

Private Sub Command16_Click()
DVDPlayer1.ShowFullScreen True
End Sub

Private Sub Command17_Click()
DVDPlayer1.SetPos CDbl(txtmarkpos)
End Sub

Private Sub Command18_Click()
SliderBrightness.Value = 255
DVDPlayer1.Brightness 0
End Sub

Private Sub Command19_Click()
SliderContrast.Value = 1
DVDPlayer1.Contrast 1

End Sub

Private Sub Command2_Click()

DVDPlayer1.EnableSpanMultiMonitor = chkspanmultimonitor.Value

DVDPlayer1.EnableAudioPitch = chkuseaudiopitch.Value

Clear_Control

bresult = DVDPlayer1.OpenDVDFolder("Please select VIDEO_TS Folder")

If bresult <> True Then
    MsgBox "Please select VIDEO_TS Folder"

End If

End Sub

Private Sub Command20_Click()
SliderHue.Value = 180
DVDPlayer1.Hue 0

End Sub

Private Sub Command21_Click()
DVDPlayer1.Saturation 1
SliderSaturation.Value = 1
End Sub

Private Sub Command3_Click()
DVDPlayer1.GoRootMenu
End Sub

Private Sub Command4_Click()
DVDPlayer1.GoTitleMenu
End Sub

Private Sub Command5_Click()
DVDPlayer1.SetPlaybackRate 1

End Sub

Private Sub Command6_Click()
DVDPlayer1.PlayPrevChapter
End Sub

Private Sub Command7_Click()
DVDPlayer1.PlayNextChapter
End Sub

Private Sub Command8_Click()
DVDPlayer1.SetPlaybackRate 0.5
End Sub

Private Sub Command9_Click()
DVDPlayer1.SetPlaybackRate 4
End Sub





Private Sub DVDPlayer1_DisplayingTitleMenu()
iCount = DVDPlayer1.GetAudioStreamCount()

    ListAudiolang.Clear
        
    For i = 0 To iCount - 1
        ListAudiolang.AddItem DVDPlayer1.GetAudioStreamName(i)
    Next
    
iSubTitleCount = DVDPlayer1.GetSubTitlesCount

    Me.ListSubTitle.Clear
    
    For i = 0 To iSubTitleCount - 1
        ListSubTitle.AddItem DVDPlayer1.GetSubTitlesName(i)
    Next
    
    
    If chkshowsubtitle.Value = 1 Then
    
        DVDPlayer1.SetSubTitlesEnable (True)
    Else
        DVDPlayer1.SetSubTitlesEnable (False)
    End If

DVDPlayer1.MenuSelectButton 1
DVDPlayer1.MenuActivateButton
End Sub

Private Sub DVDPlayer1_FirstPlay()

    
    iCount = DVDPlayer1.GetTitlesCount()

    For i = 1 To iCount
       cbotitle.AddItem "Title " + Trim(Str(i))

    Next
    
   cbotitle.ListIndex = 0
   
    
End Sub



Private Sub DVDPlayer1_OnPlaying(ByVal iCurPos As Double, ByVal iDuration As Double, ByVal strCurPos As String, ByVal strDuration As String)

If iDuration > 0 Then
    'Slider1.Max = iDuration
    'Slider1.Min = 0
   
   If Slider1.Max <> iDuration Then
    Slider1.Max = iDuration
   End If
   
    
    Slider1.Value = iCurPos
End If

Me.lblcur = strCurPos




Me.lbldur = strDuration

End Sub



Private Sub DVDPlayer1_TitleChange()

iCount = DVDPlayer1.GetAudioStreamCount()

    ListAudiolang.Clear
        
    For i = 0 To iCount - 1
        ListAudiolang.AddItem DVDPlayer1.GetAudioStreamName(i)
    Next
    
iSubTitleCount = DVDPlayer1.GetSubTitlesCount

    Me.ListSubTitle.Clear
    
    For i = 0 To iSubTitleCount - 1
        ListSubTitle.AddItem DVDPlayer1.GetSubTitlesName(i)
    Next
    
    
    If chkshowsubtitle.Value = 1 Then
    
        DVDPlayer1.SetSubTitlesEnable (True)
    Else
        DVDPlayer1.SetSubTitlesEnable (False)
    End If
    

    
    
End Sub


Sub Control_Clearfullscreenkey()

If optcleartype1.Value = True Then
   DVDPlayer1.ClearFullScreenType = 0
   
   Select Case Me.cbokey.ListIndex
    Case 0
           DVDPlayer1.ClearFullScreenKey = 27 'esc
    Case 1
           DVDPlayer1.ClearFullScreenKey = 13  'enter
    Case 2
            DVDPlayer1.ClearFullScreenKey = 32 'space bar
     Case 3
           DVDPlayer1.ClearFullScreenKey = 81 'q key
   End Select
 
    
Else
   DVDPlayer1.ClearFullScreenType = 1
   DVDPlayer1.ClearFullScreenMouseButton = cbomousebutton.ListIndex
End If

End Sub

Private Sub Form_Load()

cbodeinterlace.AddItem "Normal"
cbodeinterlace.AddItem "Weave"
cbodeinterlace.AddItem "Bob"
cbodeinterlace.AddItem "FieldShift"
cbodeinterlace.ListIndex = 0


cbokey.AddItem "Esc Key"
cbokey.AddItem "Enter Key"
cbokey.AddItem "SpaceBar Key"
cbokey.AddItem "Q Key"
cbokey.ListIndex = 0

cbomousebutton.AddItem "Left ButtonDown"
cbomousebutton.AddItem "Left ButtonDblClk"
cbomousebutton.AddItem "Right ButtonDown"
cbomousebutton.AddItem "Right ButtonDblClk"
cbomousebutton.ListIndex = 0

SliderPitch.Min = 0
SliderPitch.Max = 24

SliderPitch.Value = 12

SliderBrightness.Value = 255

SliderTempoIncrease.Max = 100
SliderTempoIncrease.Min = 0

SliderTempoDecrease.Max = 50
SliderTempoDecrease.Min = 0

SliderContrast.Value = 1

SliderHue.Value = 180

SliderSaturation.Value = 1


End Sub

Private Sub ListAudiolang_Click()
If ListAudiolang.ListIndex <> -1 Then
    DVDPlayer1.SetAudioStream ListAudiolang.ListIndex
End If



End Sub

Private Sub ListSubTitle_Click()
If ListSubTitle.ListIndex <> -1 Then
    DVDPlayer1.SetSubTitlesStream ListSubTitle.ListIndex
End If

End Sub

Private Sub optcleartype1_Click()
cbokey.Enabled = True
cbomousebutton.Enabled = False

Control_Clearfullscreenkey

End Sub

Private Sub optcleartype2_Click()
cbokey.Enabled = False
cbomousebutton.Enabled = True

Control_Clearfullscreenkey
End Sub

Private Sub SliderBrightness_Change()
DVDPlayer1.Brightness Me.SliderBrightness.Value - 255
End Sub

Private Sub SliderContrast_Click()
DVDPlayer1.Contrast Me.SliderContrast.Value
End Sub

Private Sub SliderHue_Change()
DVDPlayer1.Hue SliderHue.Value - 180
End Sub

Private Sub SliderPitch_Change()
 Me.DVDPlayer1.ChangePitch (SliderPitch.Value - 12)
End Sub



Private Sub SliderSaturation_Change()
Me.DVDPlayer1.Saturation SliderSaturation.Value
End Sub

Private Sub SliderTempoDecrease_Change()
 Me.DVDPlayer1.ChangeTempo (SliderTempoDecrease.Value * -1)
End Sub



Private Sub SliderTempoIncrease_Change()
Me.DVDPlayer1.ChangeTempo (SliderTempoIncrease.Value)
End Sub

