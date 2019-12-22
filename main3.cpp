#include <iostream>

using namespace std;

typedef struct __DEVICE_EXTENSION
{
	unsigned int	devid;
	char			devname[260];
	bool			ismediaindevice;
	int				devicetype;
	void*			lowerdevice;
	void*			upperdevice;
} DEVICE_EXTENSION;

#pragma pack(push, 1)
typedef struct __DEVICE_EXTENSION2
{
	unsigned int	devid;
	char			devname[260];
	bool			ismediaindevice;
	int				devicetype;
	void*			lowerdevice;
	void*			upperdevice;
} DEVICE_EXTENSION2;
#pragma pack(pop)

typedef struct __DEVICE_EXTENSION3
{
	char			devname[260];
	void*			lowerdevice;
	void*			upperdevice;
	int				devicetype;
	unsigned int	devid;
	bool			ismediaindevice;
} DEVICE_EXTENSION3;

void PrintInfoAboutStruct()
{
	DEVICE_EXTENSION	devext1;
	DEVICE_EXTENSION2	devext2;
	DEVICE_EXTENSION3	devext3;

	cout << "DEVICE_EXTENSION: " << endl;

	cout << "DEVICE_EXTENSION struct devid address Is: " << &(devext1.devid) << endl;
	cout << "DEVICE_EXTENSION struct devname address Is: " << &(devext1.devname) << endl;
	cout << "DEVICE_EXTENSION struct ismediaindevice address Is: " << &(devext1.ismediaindevice) << endl;
	cout << "DEVICE_EXTENSION struct devicetype address Is: " << &(devext1.devicetype) << endl;
	cout << "DEVICE_EXTENSION struct lowerdevice address Is: " << &(devext1.lowerdevice) << endl;
	cout << "DEVICE_EXTENSION struct upperdevice address Is: " << &(devext1.upperdevice) << endl;

	cout << endl << "DEVICE_EXTENSION2: " << endl;

	cout << "DEVICE_EXTENSION2 struct devid address Is: " << &(devext2.devid) << endl;
	cout << "DEVICE_EXTENSION2 struct devname address Is: " << &(devext2.devname) << endl;
	cout << "DEVICE_EXTENSION2 struct ismediaindevice address Is: " << &(devext2.ismediaindevice) << endl;
	cout << "DEVICE_EXTENSION2 struct devicetype address Is: " << &(devext2.devicetype) << endl;
	cout << "DEVICE_EXTENSION2 struct lowerdevice address Is: " << &(devext2.lowerdevice) << endl;
	cout << "DEVICE_EXTENSION2 struct upperdevice address Is: " << &(devext2.upperdevice) << endl;

	cout << endl << "DEVICE_EXTENSION3: " << endl;

	cout << "DEVICE_EXTENSION3 struct devname address Is: " << &(devext3.devname) << endl;
	cout << "DEVICE_EXTENSION3 struct lowerdevice address Is: " << &(devext3.lowerdevice) << endl;
	cout << "DEVICE_EXTENSION3 struct upperdevice address Is: " << &(devext3.upperdevice) << endl;
	cout << "DEVICE_EXTENSION3 struct devicetype address Is: " << &(devext3.devicetype) << endl;
	cout << "DEVICE_EXTENSION3 struct devid address Is: " << &(devext3.devid) << endl;
	cout << "DEVICE_EXTENSION3 struct ismediaindevice address Is: " << &(devext3.ismediaindevice) << endl;

	cout << endl << "DEVICE_EXTENSION sizes: " << endl;

	cout << "DEVICE_EXTENSION STRUCT sizeof size is: " << sizeof(DEVICE_EXTENSION) << endl;
	unsigned int ssize = sizeof(devext1.devicetype) + sizeof(devext1.devid) + sizeof(devext1.devname)
		+ sizeof(devext1.ismediaindevice) + sizeof(devext1.lowerdevice) + sizeof(devext1.upperdevice);
	cout << "DEVICE_EXTENSION STRUCT summary size is: " << ssize << endl;

	cout << endl << "DEVICE_EXTENSION2 sizes: " << endl;

	cout << "DEVICE_EXTENSION2 STRUCT sizeof size is: " << sizeof(DEVICE_EXTENSION2) << endl;
	unsigned int ssize2 = sizeof(devext2.devicetype) + sizeof(devext2.devid) + sizeof(devext2.devname)
		+ sizeof(devext2.ismediaindevice) + sizeof(devext2.lowerdevice) + sizeof(devext2.upperdevice);
	cout << "DEVICE_EXTENSION2 STRUCT summary size is: " << ssize2 << endl;

	cout << endl << "DEVICE_EXTENSION3 sizes: " << endl;

	cout << "DEVICE_EXTENSION3 STRUCT sizeof size is: " << sizeof(DEVICE_EXTENSION3) << endl;
	unsigned int ssize3 = sizeof(devext3.devicetype) + sizeof(devext3.devid) + sizeof(devext3.devname)
		+ sizeof(devext3.ismediaindevice) + sizeof(devext3.lowerdevice) + sizeof(devext3.upperdevice);
	cout << "DEVICE_EXTENSION3 STRUCT summary size is: " << ssize3 << endl;
}

int main(int argc, char **argv)
{
	PrintInfoAboutStruct();
	cin.get();
	return 0;
}