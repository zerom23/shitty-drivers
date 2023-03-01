NTSTATUS DriverLoad(PDEVICE_OBJECT DriverObject, PUNICODE_STRING Driver)
{
	return STATUS_SUCCESS;
	ObjectEntry->DriverObject = DriverLoad;
}


NTSTATUS DriverUnload(PDEVICE_OBJECT UnloadDriver,PUNICODE_STRING Drivers)
{
	UnloadDriver->Drivers = DriverUnload;
	return STATUS_SUCCESS;
}
