//// App.h 

#include <wx/wxprec.h>
#include <wx/cmdline.h>

#ifndef WX_PRECOMP 
    #include <wx/wx.h> 
#endif 

const wxCmdLineEntryDesc gCmdLineDesc[] =
{
    { wxCMD_LINE_OPTION, "id", "WID",    "Windows Process ID", wxCMD_LINE_VAL_NUMBER },
    { wxCMD_LINE_NONE }
}; 

/////////////////////////////////////////////////////////////////////////////////
class MyApp : public wxApp
{

public:
    MyApp();
    ~MyApp();

    // create our main window here
    virtual bool OnInit();
    virtual void OnInitCmdLine(wxCmdLineParser& parser);
    virtual bool OnCmdLineParsed(wxCmdLineParser& parser);

private:
    DECLARE_NO_COPY_CLASS(MyApp)

};

DECLARE_APP(MyApp)
