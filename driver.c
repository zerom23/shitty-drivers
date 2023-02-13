#include <ntifs.h>
#include "header.h"


UNICODE_STRING DeviceName = RTL_CONSTANT_STRING(L"\\Device\\processIDforfuckingAlien");

NTSTATUS Process(PDEVICE_OBJECT ProcessID, PUNICODE_STRING pwd, PDEVICE_OBJECT proccess, PDEVICE_OBJECT RtlImageCopy)
{
	

	IoCreateDevice(ProcessID, 0, &Process, FILE_DEVICE_UNKNOWN, FILE_DEVICE_SECURE_OPEN, FALSE, &proccess);
	proccess->AttachedDevice[IRP_MJ_SYSTEM_CONTROL];
	proccess->AttachedDevice[IRP_MJ_WRITE];
	proccess->AttachedDevice[IRP_MJ_SYSTEM_CONTROL];
	RTL_ALLOCATE_STRING_ROUTINE(IO_ATTRIBUTION_INFORMATION);
	RTL_AVL_ALLOCATE_ROUTINE(IO_CONTAINER_INFORMATION_CLASS);


	if (RtlImageCopy, BufferEmpty, proccess->AttachedDevice)
	{
		RtlImageCopy->DeviceQueue;
		DbgPrintEx(0, 0, "uuuCheccking....");
		if (RtlImageCopy != proccess, NULL)
			DbgPrompt(0, 0, "deleting drivers fatal error.............");
		IoDeleteDevice(ProcessID, 0, &Process, FILE_DEVICE_UNKNOWN, FILE_DEVICE_SECURE_OPEN, FALSE, &proccess);
		DbgPrompt(0, 0, "deleting drivers...... \n");
	}


	for (int i = 0; proccess > i; i++)
	{
		proccess->AttachedDevice = RtlImageCopy;
		if (RtlImageCopy->AttachedDevice = ObjectEntry)
			DbgPrintEx(0, 0, "checking/->HUH->FuckingLoserItfaild");
		memcpy(0, 0, (LPWSTR)sizeof(RtlImageCopy));
		memcpy(0, 0, (LPWSTR)sizeof(proccess));
		memcpy(0, 0, (LPWSTR)sizeof(ProcessID));
		DbgPrompt(0, 0, "finding processses");
		DbgPrintEx(0,0,"Process ID: %d\n", ProcessID);
		if (wcsstr(RtlImageCopy->ActiveThreadCount, L"\\Device\\processIDforfuckingAlien"))
		{
			DbgPrintEx(0, 0, "Found process ID:%d\n");
			pwd = RtlImageCopy->Flags = L"\\Device\\processIDforfuckingAlien";
			DbgPrintEx(0, 0, "it failed lul");
		}
	}
}
