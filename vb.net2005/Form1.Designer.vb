<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        If disposing AndAlso components IsNot Nothing Then
            components.Dispose()
        End If
        MyBase.Dispose(disposing)
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form1))
        Me.AxDVDPlayer1 = New AxDVDPLAYERLib.AxDVDPlayer
        Me.Button1 = New System.Windows.Forms.Button
        Me.Button2 = New System.Windows.Forms.Button
        Me.Button3 = New System.Windows.Forms.Button
        Me.Label1 = New System.Windows.Forms.Label
        Me.ListAudiolang = New System.Windows.Forms.ListBox
        Me.Label2 = New System.Windows.Forms.Label
        Me.chkshowsubtitle = New System.Windows.Forms.CheckBox
        Me.ListSubTitle = New System.Windows.Forms.ListBox
        Me.Label3 = New System.Windows.Forms.Label
        Me.cbotitle = New System.Windows.Forms.ComboBox
        Me.Label4 = New System.Windows.Forms.Label
        Me.Label5 = New System.Windows.Forms.Label
        Me.cbochapter = New System.Windows.Forms.ComboBox
        Me.Label6 = New System.Windows.Forms.Label
        Me.Button4 = New System.Windows.Forms.Button
        Me.Button5 = New System.Windows.Forms.Button
        Me.Button6 = New System.Windows.Forms.Button
        Me.TrackBar1 = New System.Windows.Forms.TrackBar
        Me.lblcur = New System.Windows.Forms.Label
        Me.lbldur = New System.Windows.Forms.Label
        Me.Label7 = New System.Windows.Forms.Label
        Me.GroupBox1 = New System.Windows.Forms.GroupBox
        Me.Button14 = New System.Windows.Forms.Button
        Me.Button13 = New System.Windows.Forms.Button
        Me.Button12 = New System.Windows.Forms.Button
        Me.Button11 = New System.Windows.Forms.Button
        Me.Button10 = New System.Windows.Forms.Button
        Me.Button9 = New System.Windows.Forms.Button
        Me.Button8 = New System.Windows.Forms.Button
        Me.Button7 = New System.Windows.Forms.Button
        Me.Button15 = New System.Windows.Forms.Button
        Me.Button16 = New System.Windows.Forms.Button
        Me.Button17 = New System.Windows.Forms.Button
        Me.txtmarkpos = New System.Windows.Forms.TextBox
        Me.GroupBox2 = New System.Windows.Forms.GroupBox
        Me.Button18 = New System.Windows.Forms.Button
        Me.txtHeight = New System.Windows.Forms.TextBox
        Me.Label9 = New System.Windows.Forms.Label
        Me.txtWidth = New System.Windows.Forms.TextBox
        Me.Label8 = New System.Windows.Forms.Label
        Me.GroupBox3 = New System.Windows.Forms.GroupBox
        Me.cboclearmousebutton = New System.Windows.Forms.ComboBox
        Me.cboclearkey = New System.Windows.Forms.ComboBox
        Me.radioButtonClear2 = New System.Windows.Forms.RadioButton
        Me.radioButtonClear = New System.Windows.Forms.RadioButton
        Me.Label10 = New System.Windows.Forms.Label
        Me.Label11 = New System.Windows.Forms.Label
        Me.chkmultimonitor = New System.Windows.Forms.CheckBox
        Me.Label12 = New System.Windows.Forms.Label
        CType(Me.AxDVDPlayer1, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.TrackBar1, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.GroupBox1.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        Me.GroupBox3.SuspendLayout()
        Me.SuspendLayout()
        '
        'AxDVDPlayer1
        '
        Me.AxDVDPlayer1.Enabled = True
        Me.AxDVDPlayer1.Location = New System.Drawing.Point(262, 28)
        Me.AxDVDPlayer1.Name = "AxDVDPlayer1"
        Me.AxDVDPlayer1.OcxState = CType(resources.GetObject("AxDVDPlayer1.OcxState"), System.Windows.Forms.AxHost.State)
        Me.AxDVDPlayer1.Size = New System.Drawing.Size(526, 416)
        Me.AxDVDPlayer1.TabIndex = 0
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(9, 108)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(109, 26)
        Me.Button1.TabIndex = 1
        Me.Button1.TabStop = False
        Me.Button1.Text = "Open DVD"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'Button2
        '
        Me.Button2.Location = New System.Drawing.Point(124, 108)
        Me.Button2.Name = "Button2"
        Me.Button2.Size = New System.Drawing.Size(109, 25)
        Me.Button2.TabIndex = 2
        Me.Button2.TabStop = False
        Me.Button2.Text = "Open DVD Folder"
        Me.Button2.UseVisualStyleBackColor = True
        '
        'Button3
        '
        Me.Button3.Location = New System.Drawing.Point(262, 450)
        Me.Button3.Name = "Button3"
        Me.Button3.Size = New System.Drawing.Size(71, 24)
        Me.Button3.TabIndex = 3
        Me.Button3.TabStop = False
        Me.Button3.Text = "Play"
        Me.Button3.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(6, 153)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(85, 13)
        Me.Label1.TabIndex = 4
        Me.Label1.Text = "Audio Language"
        '
        'ListAudiolang
        '
        Me.ListAudiolang.Font = New System.Drawing.Font("Arial", 6.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ListAudiolang.FormattingEnabled = True
        Me.ListAudiolang.ItemHeight = 12
        Me.ListAudiolang.Location = New System.Drawing.Point(6, 175)
        Me.ListAudiolang.Name = "ListAudiolang"
        Me.ListAudiolang.Size = New System.Drawing.Size(250, 52)
        Me.ListAudiolang.TabIndex = 5
        Me.ListAudiolang.TabStop = False
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(11, 250)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(51, 13)
        Me.Label2.TabIndex = 6
        Me.Label2.Text = "SubTitles"
        '
        'chkshowsubtitle
        '
        Me.chkshowsubtitle.AutoSize = True
        Me.chkshowsubtitle.Checked = True
        Me.chkshowsubtitle.CheckState = System.Windows.Forms.CheckState.Checked
        Me.chkshowsubtitle.Location = New System.Drawing.Point(95, 249)
        Me.chkshowsubtitle.Name = "chkshowsubtitle"
        Me.chkshowsubtitle.Size = New System.Drawing.Size(100, 17)
        Me.chkshowsubtitle.TabIndex = 7
        Me.chkshowsubtitle.TabStop = False
        Me.chkshowsubtitle.Text = "Show SubTitles"
        Me.chkshowsubtitle.UseVisualStyleBackColor = True
        '
        'ListSubTitle
        '
        Me.ListSubTitle.FormattingEnabled = True
        Me.ListSubTitle.Location = New System.Drawing.Point(14, 279)
        Me.ListSubTitle.Name = "ListSubTitle"
        Me.ListSubTitle.Size = New System.Drawing.Size(245, 43)
        Me.ListSubTitle.TabIndex = 8
        Me.ListSubTitle.TabStop = False
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(12, 325)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(32, 13)
        Me.Label3.TabIndex = 9
        Me.Label3.Text = "Titles"
        '
        'cbotitle
        '
        Me.cbotitle.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbotitle.FormattingEnabled = True
        Me.cbotitle.Location = New System.Drawing.Point(15, 354)
        Me.cbotitle.Name = "cbotitle"
        Me.cbotitle.Size = New System.Drawing.Size(181, 21)
        Me.cbotitle.TabIndex = 10
        Me.cbotitle.TabStop = False
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.ForeColor = System.Drawing.Color.Red
        Me.Label4.Location = New System.Drawing.Point(17, 387)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(186, 13)
        Me.Label4.TabIndex = 11
        Me.Label4.Text = "Select specific item, go to specific title"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(18, 424)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(49, 13)
        Me.Label5.TabIndex = 12
        Me.Label5.Text = "Chapters"
        '
        'cbochapter
        '
        Me.cbochapter.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbochapter.FormattingEnabled = True
        Me.cbochapter.Location = New System.Drawing.Point(20, 450)
        Me.cbochapter.Name = "cbochapter"
        Me.cbochapter.Size = New System.Drawing.Size(181, 21)
        Me.cbochapter.TabIndex = 13
        Me.cbochapter.TabStop = False
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.ForeColor = System.Drawing.Color.Red
        Me.Label6.Location = New System.Drawing.Point(18, 484)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(206, 13)
        Me.Label6.TabIndex = 14
        Me.Label6.Text = "Select specific item, go to specific chapter"
        '
        'Button4
        '
        Me.Button4.Location = New System.Drawing.Point(339, 450)
        Me.Button4.Name = "Button4"
        Me.Button4.Size = New System.Drawing.Size(66, 24)
        Me.Button4.TabIndex = 15
        Me.Button4.TabStop = False
        Me.Button4.Text = "Pause"
        Me.Button4.UseVisualStyleBackColor = True
        '
        'Button5
        '
        Me.Button5.Location = New System.Drawing.Point(411, 450)
        Me.Button5.Name = "Button5"
        Me.Button5.Size = New System.Drawing.Size(73, 23)
        Me.Button5.TabIndex = 16
        Me.Button5.TabStop = False
        Me.Button5.Text = "Step Frame"
        Me.Button5.UseVisualStyleBackColor = True
        '
        'Button6
        '
        Me.Button6.Location = New System.Drawing.Point(490, 450)
        Me.Button6.Name = "Button6"
        Me.Button6.Size = New System.Drawing.Size(74, 23)
        Me.Button6.TabIndex = 17
        Me.Button6.TabStop = False
        Me.Button6.Text = "Full Screen"
        Me.Button6.UseVisualStyleBackColor = True
        '
        'TrackBar1
        '
        Me.TrackBar1.Location = New System.Drawing.Point(259, 490)
        Me.TrackBar1.Name = "TrackBar1"
        Me.TrackBar1.Size = New System.Drawing.Size(523, 45)
        Me.TrackBar1.TabIndex = 18
        Me.TrackBar1.TabStop = False
        '
        'lblcur
        '
        Me.lblcur.AutoSize = True
        Me.lblcur.Location = New System.Drawing.Point(791, 495)
        Me.lblcur.Name = "lblcur"
        Me.lblcur.Size = New System.Drawing.Size(49, 13)
        Me.lblcur.TabIndex = 19
        Me.lblcur.Text = "00:00:00"
        '
        'lbldur
        '
        Me.lbldur.AutoSize = True
        Me.lbldur.Location = New System.Drawing.Point(859, 495)
        Me.lbldur.Name = "lbldur"
        Me.lbldur.Size = New System.Drawing.Size(49, 13)
        Me.lbldur.TabIndex = 20
        Me.lbldur.Text = "00:00:00"
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.Location = New System.Drawing.Point(841, 494)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(12, 13)
        Me.Label7.TabIndex = 21
        Me.Label7.Text = "/"
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.Button14)
        Me.GroupBox1.Controls.Add(Me.Button13)
        Me.GroupBox1.Controls.Add(Me.Button12)
        Me.GroupBox1.Controls.Add(Me.Button11)
        Me.GroupBox1.Controls.Add(Me.Button10)
        Me.GroupBox1.Controls.Add(Me.Button9)
        Me.GroupBox1.Controls.Add(Me.Button8)
        Me.GroupBox1.Controls.Add(Me.Button7)
        Me.GroupBox1.Location = New System.Drawing.Point(794, 21)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(353, 70)
        Me.GroupBox1.TabIndex = 22
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Playback Rate"
        '
        'Button14
        '
        Me.Button14.Location = New System.Drawing.Point(238, 45)
        Me.Button14.Name = "Button14"
        Me.Button14.Size = New System.Drawing.Size(103, 21)
        Me.Button14.TabIndex = 7
        Me.Button14.TabStop = False
        Me.Button14.Text = "8x Reverse"
        Me.Button14.UseVisualStyleBackColor = True
        '
        'Button13
        '
        Me.Button13.Location = New System.Drawing.Point(120, 45)
        Me.Button13.Name = "Button13"
        Me.Button13.Size = New System.Drawing.Size(103, 21)
        Me.Button13.TabIndex = 6
        Me.Button13.TabStop = False
        Me.Button13.Text = "4x Reverse"
        Me.Button13.UseVisualStyleBackColor = True
        '
        'Button12
        '
        Me.Button12.Location = New System.Drawing.Point(11, 45)
        Me.Button12.Name = "Button12"
        Me.Button12.Size = New System.Drawing.Size(103, 21)
        Me.Button12.TabIndex = 5
        Me.Button12.TabStop = False
        Me.Button12.Text = "2x Reverse"
        Me.Button12.UseVisualStyleBackColor = True
        '
        'Button11
        '
        Me.Button11.Location = New System.Drawing.Point(283, 18)
        Me.Button11.Name = "Button11"
        Me.Button11.Size = New System.Drawing.Size(62, 21)
        Me.Button11.TabIndex = 4
        Me.Button11.TabStop = False
        Me.Button11.Text = "16x"
        Me.Button11.UseVisualStyleBackColor = True
        '
        'Button10
        '
        Me.Button10.Location = New System.Drawing.Point(215, 18)
        Me.Button10.Name = "Button10"
        Me.Button10.Size = New System.Drawing.Size(62, 21)
        Me.Button10.TabIndex = 3
        Me.Button10.TabStop = False
        Me.Button10.Text = "8x"
        Me.Button10.UseVisualStyleBackColor = True
        '
        'Button9
        '
        Me.Button9.Location = New System.Drawing.Point(147, 18)
        Me.Button9.Name = "Button9"
        Me.Button9.Size = New System.Drawing.Size(62, 21)
        Me.Button9.TabIndex = 2
        Me.Button9.TabStop = False
        Me.Button9.Text = "4x"
        Me.Button9.UseVisualStyleBackColor = True
        '
        'Button8
        '
        Me.Button8.Location = New System.Drawing.Point(79, 18)
        Me.Button8.Name = "Button8"
        Me.Button8.Size = New System.Drawing.Size(62, 21)
        Me.Button8.TabIndex = 1
        Me.Button8.TabStop = False
        Me.Button8.Text = "1/2"
        Me.Button8.UseVisualStyleBackColor = True
        '
        'Button7
        '
        Me.Button7.Location = New System.Drawing.Point(11, 18)
        Me.Button7.Name = "Button7"
        Me.Button7.Size = New System.Drawing.Size(62, 21)
        Me.Button7.TabIndex = 0
        Me.Button7.TabStop = False
        Me.Button7.Text = "Normal"
        Me.Button7.UseVisualStyleBackColor = True
        '
        'Button15
        '
        Me.Button15.Location = New System.Drawing.Point(9, 515)
        Me.Button15.Name = "Button15"
        Me.Button15.Size = New System.Drawing.Size(82, 19)
        Me.Button15.TabIndex = 23
        Me.Button15.TabStop = False
        Me.Button15.Text = "Root Menu"
        Me.Button15.UseVisualStyleBackColor = True
        '
        'Button16
        '
        Me.Button16.Location = New System.Drawing.Point(113, 515)
        Me.Button16.Name = "Button16"
        Me.Button16.Size = New System.Drawing.Size(82, 19)
        Me.Button16.TabIndex = 24
        Me.Button16.TabStop = False
        Me.Button16.Text = "Title Menu"
        Me.Button16.UseVisualStyleBackColor = True
        '
        'Button17
        '
        Me.Button17.Location = New System.Drawing.Point(636, 450)
        Me.Button17.Name = "Button17"
        Me.Button17.Size = New System.Drawing.Size(119, 24)
        Me.Button17.TabIndex = 26
        Me.Button17.TabStop = False
        Me.Button17.Text = "Go to "
        Me.Button17.UseVisualStyleBackColor = True
        '
        'txtmarkpos
        '
        Me.txtmarkpos.Location = New System.Drawing.Point(772, 451)
        Me.txtmarkpos.Name = "txtmarkpos"
        Me.txtmarkpos.Size = New System.Drawing.Size(43, 20)
        Me.txtmarkpos.TabIndex = 27
        Me.txtmarkpos.TabStop = False
        Me.txtmarkpos.Text = "0"
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.Button18)
        Me.GroupBox2.Controls.Add(Me.txtHeight)
        Me.GroupBox2.Controls.Add(Me.Label9)
        Me.GroupBox2.Controls.Add(Me.txtWidth)
        Me.GroupBox2.Controls.Add(Me.Label8)
        Me.GroupBox2.Location = New System.Drawing.Point(795, 97)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(352, 90)
        Me.GroupBox2.TabIndex = 28
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Resize"
        '
        'Button18
        '
        Me.Button18.Location = New System.Drawing.Point(27, 56)
        Me.Button18.Name = "Button18"
        Me.Button18.Size = New System.Drawing.Size(84, 27)
        Me.Button18.TabIndex = 4
        Me.Button18.TabStop = False
        Me.Button18.Text = "Resize"
        Me.Button18.UseVisualStyleBackColor = True
        '
        'txtHeight
        '
        Me.txtHeight.Location = New System.Drawing.Point(171, 23)
        Me.txtHeight.Name = "txtHeight"
        Me.txtHeight.Size = New System.Drawing.Size(52, 20)
        Me.txtHeight.TabIndex = 3
        Me.txtHeight.TabStop = False
        Me.txtHeight.Text = "200"
        '
        'Label9
        '
        Me.Label9.AutoSize = True
        Me.Label9.Location = New System.Drawing.Point(127, 23)
        Me.Label9.Name = "Label9"
        Me.Label9.Size = New System.Drawing.Size(38, 13)
        Me.Label9.TabIndex = 2
        Me.Label9.Text = "Height"
        '
        'txtWidth
        '
        Me.txtWidth.Location = New System.Drawing.Point(60, 23)
        Me.txtWidth.Name = "txtWidth"
        Me.txtWidth.Size = New System.Drawing.Size(52, 20)
        Me.txtWidth.TabIndex = 1
        Me.txtWidth.TabStop = False
        Me.txtWidth.Text = "200"
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Location = New System.Drawing.Point(12, 24)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(35, 13)
        Me.Label8.TabIndex = 0
        Me.Label8.Text = "Width"
        '
        'GroupBox3
        '
        Me.GroupBox3.Controls.Add(Me.cboclearmousebutton)
        Me.GroupBox3.Controls.Add(Me.cboclearkey)
        Me.GroupBox3.Controls.Add(Me.radioButtonClear2)
        Me.GroupBox3.Controls.Add(Me.radioButtonClear)
        Me.GroupBox3.Location = New System.Drawing.Point(794, 213)
        Me.GroupBox3.Name = "GroupBox3"
        Me.GroupBox3.Size = New System.Drawing.Size(353, 112)
        Me.GroupBox3.TabIndex = 29
        Me.GroupBox3.TabStop = False
        Me.GroupBox3.Text = "Clear Full Screen"
        '
        'cboclearmousebutton
        '
        Me.cboclearmousebutton.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cboclearmousebutton.FormattingEnabled = True
        Me.cboclearmousebutton.Location = New System.Drawing.Point(135, 58)
        Me.cboclearmousebutton.Name = "cboclearmousebutton"
        Me.cboclearmousebutton.Size = New System.Drawing.Size(189, 21)
        Me.cboclearmousebutton.TabIndex = 3
        Me.cboclearmousebutton.TabStop = False
        '
        'cboclearkey
        '
        Me.cboclearkey.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cboclearkey.FormattingEnabled = True
        Me.cboclearkey.Location = New System.Drawing.Point(135, 23)
        Me.cboclearkey.Name = "cboclearkey"
        Me.cboclearkey.Size = New System.Drawing.Size(189, 21)
        Me.cboclearkey.TabIndex = 2
        Me.cboclearkey.TabStop = False
        '
        'radioButtonClear2
        '
        Me.radioButtonClear2.AutoSize = True
        Me.radioButtonClear2.Checked = True
        Me.radioButtonClear2.Location = New System.Drawing.Point(21, 58)
        Me.radioButtonClear2.Name = "radioButtonClear2"
        Me.radioButtonClear2.Size = New System.Drawing.Size(91, 17)
        Me.radioButtonClear2.TabIndex = 1
        Me.radioButtonClear2.TabStop = True
        Me.radioButtonClear2.Text = "Mouse Button"
        Me.radioButtonClear2.UseVisualStyleBackColor = True
        '
        'radioButtonClear
        '
        Me.radioButtonClear.AutoSize = True
        Me.radioButtonClear.Location = New System.Drawing.Point(19, 26)
        Me.radioButtonClear.Name = "radioButtonClear"
        Me.radioButtonClear.Size = New System.Drawing.Size(43, 17)
        Me.radioButtonClear.TabIndex = 0
        Me.radioButtonClear.Text = "Key"
        Me.radioButtonClear.UseVisualStyleBackColor = True
        '
        'Label10
        '
        Me.Label10.AutoSize = True
        Me.Label10.Location = New System.Drawing.Point(792, 190)
        Me.Label10.Name = "Label10"
        Me.Label10.Size = New System.Drawing.Size(370, 13)
        Me.Label10.TabIndex = 30
        Me.Label10.Text = "When display Full Screen, you may clear full screen with key or mouse button"
        '
        'Label11
        '
        Me.Label11.AutoSize = True
        Me.Label11.Location = New System.Drawing.Point(827, 450)
        Me.Label11.Name = "Label11"
        Me.Label11.Size = New System.Drawing.Size(26, 13)
        Me.Label11.TabIndex = 31
        Me.Label11.Text = "Sec"
        '
        'chkmultimonitor
        '
        Me.chkmultimonitor.AutoSize = True
        Me.chkmultimonitor.Location = New System.Drawing.Point(2, 39)
        Me.chkmultimonitor.Name = "chkmultimonitor"
        Me.chkmultimonitor.Size = New System.Drawing.Size(257, 17)
        Me.chkmultimonitor.TabIndex = 32
        Me.chkmultimonitor.Text = "Enable Playback video spanned on Multi-Monitor"
        Me.chkmultimonitor.UseVisualStyleBackColor = True
        '
        'Label12
        '
        Me.Label12.AutoSize = True
        Me.Label12.Location = New System.Drawing.Point(6, 9)
        Me.Label12.Name = "Label12"
        Me.Label12.Size = New System.Drawing.Size(645, 13)
        Me.Label12.TabIndex = 33
        Me.Label12.Text = "If you have Multi-Monitor and Multi-Monitor display card and selected """"Extend my" & _
            " Window desktop onto this monitor"""" in display setting"
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(1161, 545)
        Me.Controls.Add(Me.Label12)
        Me.Controls.Add(Me.chkmultimonitor)
        Me.Controls.Add(Me.Label11)
        Me.Controls.Add(Me.Label10)
        Me.Controls.Add(Me.GroupBox3)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.txtmarkpos)
        Me.Controls.Add(Me.Button17)
        Me.Controls.Add(Me.Button16)
        Me.Controls.Add(Me.Button15)
        Me.Controls.Add(Me.GroupBox1)
        Me.Controls.Add(Me.Label7)
        Me.Controls.Add(Me.lbldur)
        Me.Controls.Add(Me.lblcur)
        Me.Controls.Add(Me.TrackBar1)
        Me.Controls.Add(Me.Button6)
        Me.Controls.Add(Me.Button5)
        Me.Controls.Add(Me.Button4)
        Me.Controls.Add(Me.Label6)
        Me.Controls.Add(Me.cbochapter)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.Label4)
        Me.Controls.Add(Me.cbotitle)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.ListSubTitle)
        Me.Controls.Add(Me.chkshowsubtitle)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.ListAudiolang)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.Button3)
        Me.Controls.Add(Me.Button2)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.AxDVDPlayer1)
        Me.Name = "Form1"
        Me.Text = "DVD Player"
        CType(Me.AxDVDPlayer1, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.TrackBar1, System.ComponentModel.ISupportInitialize).EndInit()
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox2.PerformLayout()
        Me.GroupBox3.ResumeLayout(False)
        Me.GroupBox3.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents AxDVDPlayer1 As AxDVDPLAYERLib.AxDVDPlayer
    Friend WithEvents Button1 As System.Windows.Forms.Button
    Friend WithEvents Button2 As System.Windows.Forms.Button
    Friend WithEvents Button3 As System.Windows.Forms.Button
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents ListAudiolang As System.Windows.Forms.ListBox
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents chkshowsubtitle As System.Windows.Forms.CheckBox
    Friend WithEvents ListSubTitle As System.Windows.Forms.ListBox
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents cbotitle As System.Windows.Forms.ComboBox
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents cbochapter As System.Windows.Forms.ComboBox
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents Button4 As System.Windows.Forms.Button
    Friend WithEvents Button5 As System.Windows.Forms.Button
    Friend WithEvents Button6 As System.Windows.Forms.Button
    Friend WithEvents TrackBar1 As System.Windows.Forms.TrackBar
    Friend WithEvents lblcur As System.Windows.Forms.Label
    Friend WithEvents lbldur As System.Windows.Forms.Label
    Friend WithEvents Label7 As System.Windows.Forms.Label
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents Button11 As System.Windows.Forms.Button
    Friend WithEvents Button10 As System.Windows.Forms.Button
    Friend WithEvents Button9 As System.Windows.Forms.Button
    Friend WithEvents Button8 As System.Windows.Forms.Button
    Friend WithEvents Button7 As System.Windows.Forms.Button
    Friend WithEvents Button12 As System.Windows.Forms.Button
    Friend WithEvents Button13 As System.Windows.Forms.Button
    Friend WithEvents Button14 As System.Windows.Forms.Button
    Friend WithEvents Button15 As System.Windows.Forms.Button
    Friend WithEvents Button16 As System.Windows.Forms.Button
    Friend WithEvents Button17 As System.Windows.Forms.Button
    Friend WithEvents txtmarkpos As System.Windows.Forms.TextBox
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents Button18 As System.Windows.Forms.Button
    Friend WithEvents txtHeight As System.Windows.Forms.TextBox
    Friend WithEvents Label9 As System.Windows.Forms.Label
    Friend WithEvents txtWidth As System.Windows.Forms.TextBox
    Friend WithEvents Label8 As System.Windows.Forms.Label
    Friend WithEvents GroupBox3 As System.Windows.Forms.GroupBox
    Friend WithEvents cboclearmousebutton As System.Windows.Forms.ComboBox
    Friend WithEvents cboclearkey As System.Windows.Forms.ComboBox
    Friend WithEvents radioButtonClear2 As System.Windows.Forms.RadioButton
    Friend WithEvents radioButtonClear As System.Windows.Forms.RadioButton
    Private WithEvents Label10 As System.Windows.Forms.Label
    Friend WithEvents Label11 As System.Windows.Forms.Label
    Friend WithEvents chkmultimonitor As System.Windows.Forms.CheckBox
    Friend WithEvents Label12 As System.Windows.Forms.Label

End Class
