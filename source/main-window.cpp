#include "main-window.h"

MainWindow::MainWindow(const wxString& title, int width, int height)
  : wxFrame(nullptr, wxID_ANY, title, wxDefaultPosition, wxSize(width, height)) {
  m_MainPanel = new wxPanel(this);
  
  m_Label = new wxStaticText(m_MainPanel, wxID_ANY, "Fuck my Ass!");

  // Apply Sizers to all objects
  // wxBoxSizer* rootSizer = new wxBoxSizer(wxHORIZONTAL);
  // rootSizer->Add(m_MainPanel, 1, wxEXPAND | wxALL, 10);
  // rootSizer->SetSizeHints(this);
  // this->SetSizerAndFit(rootSizer);

  // Bind all events
  // m_ShowHidden->Bind(wxEVT_CHECKBOX, &MainWindow::OnShowHiddenToggle, this);

  // Center the window on the screen and Maximize.
  Centre();
}

// void MainWindow::OnClassDropdownClick(wxCommandEvent& event) {
//   event.Skip();
// }
