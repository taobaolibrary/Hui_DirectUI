#if !defined(_DUIBUTTON_DEFINES_H_INCLUDED_)
#define _DUIBUTTON_DEFINES_H_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000



typedef
[
	uuid(38889806-C593-4993-9433-F99F180A7B47),
	version(1.0),
	helpstring("DUI_BUTTON_STATUS"),
	public
] 
enum eDUI_BUTTON_STATUS
{
	DUI_BUTTON_STATUS_NORMAL,
	DUI_BUTTON_STATUS_HOT,
	DUI_BUTTON_STATUS_PRESS,
	DUI_BUTTON_STATUS_DISABLE,
	DUI_BUTTON_STATUS_FOCUS,
	DUI_BUTTON_STATUS_LAST
}eDUI_BUTTON_STATUS;







#endif //_DUIBUTTON_DEFINES_H_INCLUDED_