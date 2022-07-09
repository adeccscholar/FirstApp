object frmMainVCL: TfrmMainVCL
  Left = 0
  Top = 0
  Caption = 'frmMainVCL'
  ClientHeight = 1116
  ClientWidth = 2078
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -25
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = FormCreate
  PixelsPerInch = 200
  TextHeight = 35
  object pnlCtrl: TPanel
    Left = 1693
    Top = 0
    Width = 385
    Height = 1071
    Margins.Left = 6
    Margins.Top = 6
    Margins.Right = 6
    Margins.Bottom = 6
    Align = alRight
    TabOrder = 0
    object btnAction: TButton
      Left = 51
      Top = 51
      Width = 273
      Height = 52
      Margins.Left = 6
      Margins.Top = 6
      Margins.Right = 6
      Margins.Bottom = 6
      Caption = 'btnAction'
      TabOrder = 0
      OnClick = btnActionClick
    end
    object btnAction2: TButton
      Left = 51
      Top = 115
      Width = 273
      Height = 53
      Margins.Left = 6
      Margins.Top = 6
      Margins.Right = 6
      Margins.Bottom = 6
      Caption = 'btnAction2'
      TabOrder = 1
      OnClick = btnAction2Click
    end
  end
  object pnlCenter: TPanel
    Left = 0
    Top = 0
    Width = 1693
    Height = 1071
    Margins.Left = 6
    Margins.Top = 6
    Margins.Right = 6
    Margins.Bottom = 6
    Align = alClient
    TabOrder = 1
    object Splitter1: TSplitter
      Left = 1
      Top = 731
      Width = 1691
      Height = 6
      Cursor = crVSplit
      Margins.Left = 6
      Margins.Top = 6
      Margins.Right = 6
      Margins.Bottom = 6
      Align = alBottom
      ExplicitLeft = 2
      ExplicitTop = 2
      ExplicitWidth = 1238
    end
    object memOutput: TMemo
      Left = 1
      Top = 1
      Width = 1691
      Height = 730
      Margins.Left = 6
      Margins.Top = 6
      Margins.Right = 6
      Margins.Bottom = 6
      Align = alClient
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -29
      Font.Name = 'Courier New'
      Font.Style = []
      Lines.Strings = (
        'memOutput')
      ParentFont = False
      TabOrder = 0
    end
    object memError: TMemo
      Left = 1
      Top = 737
      Width = 1691
      Height = 333
      Margins.Left = 6
      Margins.Top = 6
      Margins.Right = 6
      Margins.Bottom = 6
      Align = alBottom
      Lines.Strings = (
        'memError')
      TabOrder = 1
    end
  end
  object sbMain: TStatusBar
    Left = 0
    Top = 1071
    Width = 2078
    Height = 45
    Margins.Left = 6
    Margins.Top = 6
    Margins.Right = 6
    Margins.Bottom = 6
    Panels = <>
  end
end
