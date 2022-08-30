#include <stdio.h>
#include <stdlib.h>
/* for Devpkey */
#define INITGUID

/* dependencies */
#pragma comment (lib, "SetupAPI")
#include <windows.h>
#include <SetupAPI.h>
#include <Devpkey.h>


VOID SetDeviceState(LPCWSTR lpszHardwareId, DWORD dwState)
{
	HDEVINFO devInfo;

	if (devInfo = SetupDiGetClassDevsW(NULL, NULL, NULL, DIGCF_ALLCLASSES))
	{
		DWORD dwBuffersize;
		SP_DEVINFO_DATA devData;
		DEVPROPTYPE devProptype;
		LPWSTR devBuffer;

		devData.cbSize = sizeof(SP_DEVINFO_DATA);
		for (int i = 0; ; i++)
		{
			SetupDiEnumDeviceInfo(devInfo, i, &devData);
			if (GetLastError() == ERROR_NO_MORE_ITEMS) break;

			/* calculate buffer size */
			SetupDiGetDevicePropertyW(devInfo, &devData, &DEVPKEY_Device_HardwareIds, &devProptype, NULL, 0, &dwBuffersize, 0);

			/* real call */
			if (devBuffer == HeapAlloc(GetProcessHeap(), 0, dwBuffersize))
			{
				SetupDiGetDevicePropertyW(devInfo, &devData, &DEVPKEY_Device_HardwareIds, &devProptype, (PBYTE)devBuffer, dwBuffersize, NULL, 0);
				if (lstrcmpW(devBuffer, lpszHardwareId) == 0)
				{
					/* matched */
					SP_CLASSINSTALL_HEADER ciHeader;
					ciHeader.cbSize = sizeof(SP_CLASSINSTALL_HEADER);
					ciHeader.InstallFunction = DIF_PROPERTYCHANGE;

					SP_PROPCHANGE_PARAMS pcParams;
					pcParams.ClassInstallHeader = ciHeader;
					pcParams.StateChange = dwState;
					pcParams.Scope = DICS_FLAG_GLOBAL;
					pcParams.HwProfile = 0;

					SetupDiSetClassInstallParamsW(devInfo, &devData, (PSP_CLASSINSTALL_HEADER)&pcParams, sizeof(SP_PROPCHANGE_PARAMS));
					SetupDiChangeState(devInfo, &devData);
				}
				HeapFree(GetProcessHeap(), 0, devBuffer);
			}
		}
		SetupDiDestroyDeviceInfoList(devInfo);
	}
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
