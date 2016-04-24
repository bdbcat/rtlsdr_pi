///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec  8 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __RTLSDRUI_H__
#define __RTLSDRUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/radiobut.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/spinctrl.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class rtlsdrDialogBase
///////////////////////////////////////////////////////////////////////////////
class rtlsdrDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxButton* m_bPreferences;
		wxButton* m_bClear;
		wxButton* m_bClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnEnable( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPreferences( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClear( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxTextCtrl* m_tMessages;
		wxCheckBox* m_cbEnabled;
		
		rtlsdrDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("rtlsdr"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL ); 
		~rtlsdrDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class rtlsdrPrefsBase
///////////////////////////////////////////////////////////////////////////////
class rtlsdrPrefsBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText5;
		wxStaticText* m_stP1args;
		wxStaticText* m_stP2args;
		wxStaticText* m_staticText29;
		wxStaticText* m_staticText30;
		wxButton* m_button7;
		wxButton* m_bLaunchCompanion;
		wxButton* m_bInfo;
		wxStaticText* m_staticText4;
		wxStaticText* m_staticText7;
		wxButton* m_bAboutAuthor;
		wxButton* m_button8;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnAISProgram( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAutoCalibrate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLaunchGnuRadioCompanion( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnInfo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAboutAuthor( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxRadioButton* m_rbAIS;
		wxChoice* m_cAISProgram;
		wxTextCtrl* m_tP1args;
		wxTextCtrl* m_tP2args;
		wxSpinCtrl* m_sAISSampleRate;
		wxSpinCtrl* m_sAISError;
		wxRadioButton* m_rbADSB;
		wxCheckBox* m_cbADSBPlot;
		wxRadioButton* m_rbFM;
		wxTextCtrl* m_tFMFrequency;
		wxRadioButton* m_rbVHF;
		wxTextCtrl* m_tVHFChannel;
		wxCheckBox* m_cbVHFWX;
		wxSpinCtrl* m_sVHFSquelch;
		
		rtlsdrPrefsBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("rtlsdr Preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE ); 
		~rtlsdrPrefsBase();
	
};

#endif //__RTLSDRUI_H__
