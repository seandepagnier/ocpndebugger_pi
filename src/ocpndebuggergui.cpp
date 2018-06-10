///////////////////////////////////////////////////////////////////////////
<<<<<<< HEAD
// C++ code generated with wxFormBuilder (version Feb 16 2016)
=======
// C++ code generated with wxFormBuilder (version Jul 15 2016)
>>>>>>> origin/messaging-improvements
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ocpndebuggergui.h"

///////////////////////////////////////////////////////////////////////////

OpenCPNDebuggerDlg::OpenCPNDebuggerDlg( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
<<<<<<< HEAD
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
=======
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer3->AddGrowableCol( 0 );
	fgSizer3->AddGrowableRow( 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
>>>>>>> origin/messaging-improvements
	
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panelGPS = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_tcGPS = new wxTextCtrl( m_panelGPS, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY );
	bSizer3->Add( m_tcGPS, 1, wxALL|wxEXPAND, 5 );
	
<<<<<<< HEAD
	m_tbGPSPause = new wxToggleButton( m_panelGPS, wxID_ANY, _("Pause"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_tbGPSPause, 0, wxALL, 5 );
	
=======
>>>>>>> origin/messaging-improvements
	
	m_panelGPS->SetSizer( bSizer3 );
	m_panelGPS->Layout();
	bSizer3->Fit( m_panelGPS );
	m_notebook1->AddPage( m_panelGPS, _("NMEA"), false );
	m_panelAIS = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	m_tcAIS = new wxTextCtrl( m_panelAIS, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY );
	bSizer4->Add( m_tcAIS, 1, wxALL|wxEXPAND, 5 );
	
<<<<<<< HEAD
	m_tbAISPause = new wxToggleButton( m_panelAIS, wxID_ANY, _("Pause"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_tbAISPause, 0, wxALL, 5 );
	
=======
>>>>>>> origin/messaging-improvements
	
	m_panelAIS->SetSizer( bSizer4 );
	m_panelAIS->Layout();
	bSizer4->Fit( m_panelAIS );
	m_notebook1->AddPage( m_panelAIS, _("AIS"), false );
	m_panelEvents = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	m_tcEvents = new wxTextCtrl( m_panelEvents, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY );
	bSizer5->Add( m_tcEvents, 1, wxALL|wxEXPAND, 5 );
	
<<<<<<< HEAD
	m_tbNMEAEvtsPause = new wxToggleButton( m_panelEvents, wxID_ANY, _("Pause"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_tbNMEAEvtsPause, 0, wxALL, 5 );
	
=======
>>>>>>> origin/messaging-improvements
	
	m_panelEvents->SetSizer( bSizer5 );
	m_panelEvents->Layout();
	bSizer5->Fit( m_panelEvents );
<<<<<<< HEAD
	m_notebook1->AddPage( m_panelEvents, _("NMEA Events"), true );
	m_panelMessages = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_tcMessages = new wxTextCtrl( m_panelMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY );
	bSizer6->Add( m_tcMessages, 1, wxALL|wxEXPAND, 5 );
	
	m_tbMessagesPause = new wxToggleButton( m_panelMessages, wxID_ANY, _("Pause"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_tbMessagesPause, 0, wxALL, 5 );
	
	
	m_panelMessages->SetSizer( bSizer6 );
	m_panelMessages->Layout();
	bSizer6->Fit( m_panelMessages );
	m_notebook1->AddPage( m_panelMessages, _("Messages"), false );
	m_panelSignalK = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerSignalK;
	bSizerSignalK = new wxBoxSizer( wxVERTICAL );
	
	m_tcSignalK = new wxTextCtrl( m_panelSignalK, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY );
	bSizerSignalK->Add( m_tcSignalK, 1, wxALL|wxEXPAND, 5 );
	
	m_tbSignalKPause = new wxToggleButton( m_panelSignalK, wxID_ANY, _("Pause"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerSignalK->Add( m_tbSignalKPause, 0, wxALL, 5 );
	
	
	m_panelSignalK->SetSizer( bSizerSignalK );
	m_panelSignalK->Layout();
	bSizerSignalK->Fit( m_panelSignalK );
	m_notebook1->AddPage( m_panelSignalK, _("SignalK"), false );
	
	bSizer1->Add( m_notebook1, 1, wxEXPAND | wxALL, 5 );
=======
	m_notebook1->AddPage( m_panelEvents, _("NMEA Events"), false );
	m_panelMessages = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer8;
	fgSizer8 = new wxFlexGridSizer( 2, 1, 0, 0 );
	fgSizer8->AddGrowableCol( 0 );
	fgSizer8->AddGrowableRow( 0 );
	fgSizer8->SetFlexibleDirection( wxBOTH );
	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_splitter1 = new wxSplitterWindow( m_panelMessages, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter1->Connect( wxEVT_IDLE, wxIdleEventHandler( OpenCPNDebuggerDlg::m_splitter1OnIdle ), NULL, this );
	m_splitter1->SetMinimumPaneSize( 40 );
	
	m_panel1 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer17;
	fgSizer17 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer17->AddGrowableCol( 0 );
	fgSizer17->AddGrowableRow( 0 );
	fgSizer17->SetFlexibleDirection( wxBOTH );
	fgSizer17->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_scrolledWindow1 = new wxScrolledWindow( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow1->SetScrollRate( 5, 5 );
	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer4->AddGrowableCol( 0 );
	fgSizer4->AddGrowableRow( 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_stMessage = new wxStaticText( m_scrolledWindow1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stMessage->Wrap( -1 );
	fgSizer4->Add( m_stMessage, 0, wxALL|wxEXPAND, 5 );
	
	
	m_scrolledWindow1->SetSizer( fgSizer4 );
	m_scrolledWindow1->Layout();
	fgSizer4->Fit( m_scrolledWindow1 );
	fgSizer17->Add( m_scrolledWindow1, 1, wxEXPAND | wxALL, 5 );
	
	
	m_panel1->SetSizer( fgSizer17 );
	m_panel1->Layout();
	fgSizer17->Fit( m_panel1 );
	m_panel2 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer18;
	fgSizer18 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer18->AddGrowableCol( 0 );
	fgSizer18->AddGrowableRow( 0 );
	fgSizer18->SetFlexibleDirection( wxBOTH );
	fgSizer18->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_lMessages = new wxListCtrl( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( -1,20 ), wxLC_REPORT );
	fgSizer18->Add( m_lMessages, 0, wxALL|wxEXPAND, 5 );
	
	
	m_panel2->SetSizer( fgSizer18 );
	m_panel2->Layout();
	fgSizer18->Fit( m_panel2 );
	m_splitter1->SplitHorizontally( m_panel1, m_panel2, 100 );
	fgSizer8->Add( m_splitter1, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer5;
	fgSizer5 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer5->AddGrowableCol( 1 );
	fgSizer5->SetFlexibleDirection( wxBOTH );
	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer8->Add( fgSizer5, 1, wxEXPAND, 5 );
	
	
	m_panelMessages->SetSizer( fgSizer8 );
	m_panelMessages->Layout();
	fgSizer8->Fit( m_panelMessages );
	m_notebook1->AddPage( m_panelMessages, _("Messages"), true );
	
	fgSizer3->Add( m_notebook1, 1, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer2->AddGrowableCol( 2 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_tbPause = new wxToggleButton( this, wxID_ANY, _("Pause"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer2->Add( m_tbPause, 0, wxALL, 5 );
	
	m_bClear = new wxButton( this, wxID_ANY, _("Clear"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer2->Add( m_bClear, 0, wxALL, 5 );
>>>>>>> origin/messaging-improvements
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1->Realize();
	
<<<<<<< HEAD
	bSizer1->Add( m_sdbSizer1, 0, wxALL|wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );
=======
	fgSizer2->Add( m_sdbSizer1, 0, wxALIGN_RIGHT|wxALL|wxEXPAND, 5 );
	
	
	fgSizer3->Add( fgSizer2, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( fgSizer3 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_lMessages->Connect( wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler( OpenCPNDebuggerDlg::OnMessageSelected ), NULL, this );
	m_lMessages->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( OpenCPNDebuggerDlg::OnMessageSelected ), NULL, this );
	m_bClear->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( OpenCPNDebuggerDlg::OnClear ), NULL, this );
>>>>>>> origin/messaging-improvements
}

OpenCPNDebuggerDlg::~OpenCPNDebuggerDlg()
{
<<<<<<< HEAD
=======
	// Disconnect Events
	m_lMessages->Disconnect( wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler( OpenCPNDebuggerDlg::OnMessageSelected ), NULL, this );
	m_lMessages->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( OpenCPNDebuggerDlg::OnMessageSelected ), NULL, this );
	m_bClear->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( OpenCPNDebuggerDlg::OnClear ), NULL, this );
	
>>>>>>> origin/messaging-improvements
}
