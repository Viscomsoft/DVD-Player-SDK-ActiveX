Public Class Form1
    Sub Clear_Control()
        ListAudiolang.Items.Clear()
        ListSubTitle.Items.Clear()
        Me.cbochapter.Items.Clear()
        Me.cbotitle.Items.Clear()

    End Sub
    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Clear_Control()
        If chkmultimonitor.Checked Then
            AxDVDPlayer1.EnableSpanMultiMonitor = True
        Else
            AxDVDPlayer1.EnableSpanMultiMonitor = False
        End If

        AxDVDPlayer1.OpenDVD()
    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click

        Dim bResult As Boolean

        If chkmultimonitor.Checked Then
            AxDVDPlayer1.EnableSpanMultiMonitor = True
        Else
            AxDVDPlayer1.EnableSpanMultiMonitor = False
        End If

        Clear_Control()

        bResult = AxDVDPlayer1.OpenDVDFolder("Please select VIDEO_TS Folder")

        If bResult <> True Then
            MessageBox.Show("Please select VIDEO_TS Folder")
        End If
    End Sub
    Sub UpdateAudioLangSubTitle()

        Dim iCount As Integer
        Dim i As Integer
        Dim iSubTitleCount As Integer

        iCount = AxDVDPlayer1.GetAudioStreamCount
        ListAudiolang.Items.Clear()

        For i = 0 To iCount - 1
            ListAudiolang.Items.Add(AxDVDPlayer1.GetAudioStreamName(i))
        Next

        iSubTitleCount = AxDVDPlayer1.GetSubTitlesCount
        ListSubTitle.Items.Clear()

        For i = 0 To iSubTitleCount - 1
            ListSubTitle.Items.Add(AxDVDPlayer1.GetSubTitlesName(i))
        Next

        If chkshowsubtitle.Checked Then
            AxDVDPlayer1.SetSubTitlesEnable(True)
        Else
            AxDVDPlayer1.SetSubTitlesEnable(False)

        End If

    End Sub
    Private Sub AxDVDPlayer1_DisplayingTitleMenu(ByVal sender As Object, ByVal e As System.EventArgs) Handles AxDVDPlayer1.DisplayingTitleMenu
        UpdateAudioLangSubTitle()

    End Sub

    Private Sub AxDVDPlayer1_FirstPlay(ByVal sender As Object, ByVal e As System.EventArgs) Handles AxDVDPlayer1.FirstPlay
        Dim iCount As Integer
        Dim i As Integer

        iCount = AxDVDPlayer1.GetTitlesCount

        For i = 1 To iCount
            cbotitle.Items.Add("Title " + i.ToString)
        Next

        cbotitle.SelectedIndex = 0

    End Sub

    Private Sub AxDVDPlayer1_OnPlaying(ByVal sender As Object, ByVal e As AxDVDPLAYERLib._DDVDPlayerEvents_OnPlayingEvent) Handles AxDVDPlayer1.OnPlaying
        TrackBar1.Maximum = e.iDuration
        TrackBar1.Value = e.iCurPos
        lblcur.Text = e.strCurPos
        lbldur.Text = e.strDuration
      

    End Sub

    Private Sub AxDVDPlayer1_TitleChange(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles AxDVDPlayer1.TitleChange
        UpdateAudioLangSubTitle()
    End Sub

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load


        AxDVDPlayer1.ReceivedFullScreenHWnd = Me.Handle

        cboclearkey.Items.Add("Spacebar Key")
        cboclearkey.Items.Add("Q Key")
        cboclearkey.Items.Add("X Key")
        cboclearkey.SelectedIndex = 0


        cboclearmousebutton.Items.Add("Left ButtonDown")
        cboclearmousebutton.Items.Add("Right ButtonDown")
        cboclearmousebutton.SelectedIndex = 0
    End Sub

    Private Sub cbotitle_Click(ByVal sender As Object, ByVal e As System.EventArgs) Handles cbotitle.Click
      
    End Sub

    

    Private Sub ListAudiolang_Click(ByVal sender As Object, ByVal e As System.EventArgs) Handles ListAudiolang.Click
        If ListAudiolang.SelectedIndex <> -1 Then
            AxDVDPlayer1.SetAudioStream(ListAudiolang.SelectedIndex)
        End If

    End Sub

    Private Sub ListSubTitle_Click(ByVal sender As Object, ByVal e As System.EventArgs) Handles ListSubTitle.Click
        If ListSubTitle.SelectedIndex <> -1 Then
            AxDVDPlayer1.SetSubTitlesStream(ListSubTitle.SelectedIndex)
        End If

    End Sub

 
    Private Sub ListSubTitle_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ListSubTitle.SelectedIndexChanged

    End Sub

    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click
        AxDVDPlayer1.Play()
    End Sub

    Private Sub Button4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button4.Click
        AxDVDPlayer1.Pause()
    End Sub

    Private Sub cbotitle_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles cbotitle.SelectedIndexChanged
        Dim iChapterCount As Integer
        Dim i As Integer
        AxDVDPlayer1.SetTitle(cbotitle.SelectedIndex + 1)

        If cbotitle.SelectedIndex <> -1 Then
            iChapterCount = AxDVDPlayer1.GetChaptersCount(cbotitle.SelectedIndex + 1)
            cbochapter.Items.Clear()

            For i = 1 To iChapterCount
                cbochapter.Items.Add("Chapter " + i.ToString)
            Next

            If cbochapter.Items.Count > 0 Then
                cbochapter.SelectedIndex = 0
            End If

        End If
    End Sub

    Private Sub cbochapter_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles cbochapter.SelectedIndexChanged
        Dim iSelChapter As Integer
        iSelChapter = cbochapter.SelectedIndex

        If iSelChapter <> -1 Then
            AxDVDPlayer1.SetChapter(iSelChapter + 1)

        End If
    End Sub

    Private Sub chkshowsubtitle_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles chkshowsubtitle.CheckedChanged
       
    End Sub

    Private Sub chkshowsubtitle_Click(ByVal sender As Object, ByVal e As System.EventArgs) Handles chkshowsubtitle.Click
        If chkshowsubtitle.Checked Then
            AxDVDPlayer1.SetSubTitlesEnable(True)
        Else
            AxDVDPlayer1.SetSubTitlesEnable(False)
        End If
    End Sub

    Private Sub Button5_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button5.Click
        AxDVDPlayer1.StepFrame(1)
    End Sub

    Private Sub Button6_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button6.Click

        If radioButtonClear.Checked Then
            AxDVDPlayer1.ClearFullScreenType = 0
        Else
            AxDVDPlayer1.ClearFullScreenType = 1
        End If


        AxDVDPlayer1.ShowFullScreen(True)



    End Sub

    Private Sub Button7_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button7.Click
        AxDVDPlayer1.SetPlaybackRate(1)
    End Sub

    Private Sub Button8_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button8.Click
        AxDVDPlayer1.SetPlaybackRate(0.5)
    End Sub

    Private Sub Button9_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button9.Click
        AxDVDPlayer1.SetPlaybackRate(4)
    End Sub

    Private Sub Button10_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button10.Click
        AxDVDPlayer1.SetPlaybackRate(8)
    End Sub

    Private Sub Button11_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button11.Click
        AxDVDPlayer1.SetPlaybackRate(16)
    End Sub

    Private Sub Button12_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button12.Click
        AxDVDPlayer1.SetPlaybackRate(-2)
    End Sub

    Private Sub Button13_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button13.Click
        AxDVDPlayer1.SetPlaybackRate(-4)
    End Sub

    Private Sub Button14_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button14.Click
        AxDVDPlayer1.SetPlaybackRate(-8)
    End Sub

    Private Sub Button15_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button15.Click
        AxDVDPlayer1.GoRootMenu()
    End Sub

    Private Sub Button16_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button16.Click
        AxDVDPlayer1.GoTitleMenu()
    End Sub

    Private Sub Button17_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button17.Click
        AxDVDPlayer1.SetPos(Me.txtmarkpos.Text)
    End Sub

    Private Sub chkmark_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs)

    End Sub

    Private Sub Button18_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button18.Click
        AxDVDPlayer1.ResizeControl(txtWidth.Text, txtHeight.Text)
    End Sub

    Private Sub Form1_KeyDown(ByVal sender As System.Object, ByVal e As System.Windows.Forms.KeyEventArgs) Handles MyBase.KeyDown

        
        If radioButtonClear.Checked Then

            If e.KeyData = Keys.Space Then
                If cboclearkey.SelectedIndex = 0 Then AxDVDPlayer1.ShowFullScreen(False)
            End If

            If e.KeyData = Keys.Q Then
                If cboclearkey.SelectedIndex = 1 Then AxDVDPlayer1.ShowFullScreen(False)
            End If


            If e.KeyData = Keys.X Then
                If cboclearkey.SelectedIndex = 2 Then AxDVDPlayer1.ShowFullScreen(False)
            End If
        End If


        
    End Sub

    
    Private Sub Form1_MouseDown(ByVal sender As System.Object, ByVal e As System.Windows.Forms.MouseEventArgs) Handles MyBase.MouseDown
        If radioButtonClear2.Checked Then

            If e.Button = MouseButtons.Left Then
                If cboclearmousebutton.SelectedIndex = 0 Then AxDVDPlayer1.ShowFullScreen(False)
            End If


            If e.Button = MouseButtons.Right Then
                If cboclearmousebutton.SelectedIndex = 1 Then AxDVDPlayer1.ShowFullScreen(False)
            End If
        End If

    End Sub

    Private Sub radioButtonClear2_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles radioButtonClear2.CheckedChanged

    End Sub

    Private Sub chkmultimonitor_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles chkmultimonitor.CheckedChanged
        If chkmultimonitor.Checked Then
            Button6.Enabled = False
        Else
            Button6.Enabled = True
        End If

    End Sub
End Class
