#include <ntifs.h>


NTSTATUS ObjectEntry(PDEVICE_OBJECT DriverObject, PUNICODE_STRING Driver)
{
	return STATUS_SUCCESS;
}


NTSTATUS DriverUnload(PDEVICE_OBJECT UnloadDriver,PUNICODE_STRING Drivers)
{
	return STATUS_SUCCESS;
}
