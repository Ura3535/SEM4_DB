#include "Lab2Form.h"
#include "Repository.h"

using namespace System::Runtime::InteropServices;
using namespace Lab2;
using namespace Models;

Void Lab2Form::FT_ButtonAdd_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        FacilityType^ tmp = gcnew FacilityType();
        tmp->Type = FT_TextBoxAddType->Text;
    }
    catch (const std::exception&) {}
    finally {
        Marshal::FreeHGlobal(type_ptr);
    }
}