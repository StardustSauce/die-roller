#pragma once

#include <wx/wx.h>

class MainWindow : public wxFrame {
  // variable declarations
  private:
    wxPanel* m_MainPanel;
    wxStaticText* m_Label;
  // function declarations
  public:
    MainWindow(const wxString& title, int width, int height);
  private:
    // void SetButtonStatus(ButtonStatus status);
};
