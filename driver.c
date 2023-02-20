#include <ntifs.h>
#include "forcianigger.h"
#pragma warning(disable:4100 4047 4024 4331 4456 6011 4189)
UNICODE_STRING DeviceName = RTL_CONSTANT_STRING(L"\\Device\\processIDforfuckingAlien");
NTSTATUS Process(PDEVICE_OBJECT ProcessID, PUNICODE_STRING pwd, PDEVICE_OBJECT proccess, PDEVICE_OBJECT RtlImageCopy)
{
	IoCreateDevice(&ProcessID, 0, &Process, FILE_DEVICE_UNKNOWN, FILE_DEVICE_SECURE_OPEN, FALSE, &proccess);
	proccess->AttachedDevice[IRP_MJ_SYSTEM_CONTROL];
	proccess->AttachedDevice[IRP_MJ_WRITE];
	proccess->AttachedDevice[IRP_MJ_SYSTEM_CONTROL];
	if (RtlImageCopy, BufferEmpty, proccess->AttachedDevice)
	{
		RtlImageCopy->DeviceQueue;
		DbgPrintEx(0, 0, "print proccessId");
		if (RtlImageCopy != proccess, NULL)
			DbgPrompt(0, 0, "deleting drivers |  -> dusas  => personally |fatal error.............");
		IoDeleteDevice(ProcessID, FILE_DEVICE_UNKNOWN, FILE_DEVICE_SECURE_OPEN, FALSE, &proccess);
		extern POBJECT_TYPE IoDriverObjectType;
		UNICODE_STRING kbdName = RTL_CONSTANT_STRING(L"\\Driver\\kbdclass");
		PDRIVER_OBJECT pKbdDriverObject;
		ObReferenceObjectByName(
			&kbdName,
			OBJ_CASE_INSENSITIVE,
			NULL,
			0,
			IoDriverObjectType,
			KernelMode,
			NULL,
			&pKbdDriverObject);
		DbgPrompt(0, 0, "deleting drivers...... \n");
		for (int i = 0; proccess > i; i++)
		{
			proccess->AttachedDevice = RtlImageCopy;
			if (RtlImageCopy->AttachedDevice = ObjectEntry)
				DbgPrintEx(0, 0, "checking/->HUH->FuckingLoserItfaild");
			memcpy(0, 0, (LPWSTR)sizeof(RtlImageCopy));
			memcpy(0, 0, (LPWSTR)sizeof(proccess));
			memcpy(0, 0, (LPWSTR)sizeof(ProcessID));
			DbgPrompt(0, 0, "finding processses");
			if (wcsstr(RtlImageCopy->ActiveThreadCount, L"\\Device\\deviceNameDetecte"))
			{
				DbgPrintEx(0, 0, "Found process ID");
				DbgPrintEx(0, 0, "process here ID %d\n", ProcessID);
				//ignore this comment
				pwd = RtlImageCopy->Flags = L"\\Device\\processIDforfuckingAlien";
				DbgPrintEx(0, 0, "it failed lul");
			}
		}
	}
}
