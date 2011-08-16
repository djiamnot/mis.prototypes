//// App.cpp
#include "main.h" 

IMPLEMENT_APP(MyApp); 

bool MyApp::OnInit()
{ 
       if ( !wxApp::OnInit() ) return false;

      wxFrame *frame = new wxFrame(); 

      SetTopWindow(frame);    
      frame->Show();
      frame->Refresh();

      return true;
}

void MyApp::OnInitCmdLine(wxCmdLineParser& parser)
{
    parser.SetDesc (gCmdLineDesc);
    // must refuse '/' as parameter starter or cannot use "/path" style paths
    parser.SetSwitchChars (wxT("-"));
}

bool MyApp::OnCmdLineParsed(wxCmdLineParser& parser)
{
   parser.Parse();
    long value;
   if(parser.Found(wxT("WID"), &value)){
      wxMessageBox(wxString::Format("%d\n",value));
   }

    return true;
}
