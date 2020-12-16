#include <iostream>
#include <windows.h>

using namespace std;

DWORD WINAPI thread_1(LPVOID PARAM){
	cout << "Thread 1" << endl;
	return 0;
}

DWORD WINAPI thread_2(LPVOID PARAM) {

	cout << "Thread 2" << endl;
	return 0;
}


DWORD WINAPI thread_3(LPVOID PARAM) {

	cout << "Thread 3" << endl;
	return 0;
}

CRITICAL_SECTION CriticalSection;

int main() {
	
	int data1 = 5;
	int data2 = 2;
	int data3 = 1;

	HANDLE th1;
	HANDLE th2;
	HANDLE th3;

	th1 = CreateThread(NULL, 0, thread_1, &data1, 0, NULL);
	th2 = CreateThread(NULL, 0, thread_1, &data2, 0, NULL);
	th3 = CreateThread(NULL, 0, thread_1, &data3, 0, NULL);

	WaitForSingleObject(th1, INFINITE);
	WaitForSingleObject(th, INFINITE);
	WaitForSingleObject(th1, INFINITE);

	CloseHandle(th1);
	CloseHandle(th2);
	CloseHandle(th3);

}