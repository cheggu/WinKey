#include <iostream>
#include <Windows.h>

int main() {
    system("echo [91m");
    system("echo       -- WINDOWS KEY GRABBER --");
    system("echo -- DEVELOPED BY BEN MARKSBERRY 2023 --");
    system("echo --------------------------------------");
    system("echo [0m");

    system("echo If the key below is empty or says 'OA3xOriginalProductKey', the computer has a digital license.");

    system("echo [94m");
    system("wmic path SoftwareLicensingService get OA3xOriginalProductKey");
    system("echo [0m");

    DWORD cur_id = GetCurrentProcessId();
    DWORD fgw_id = 0;

    system("echo Press 'ESC' to exit.");

    while ((!GetAsyncKeyState(VK_ESCAPE)) || (cur_id != fgw_id)) {
        auto fgw = GetForegroundWindow();
        GetWindowThreadProcessId(fgw, &fgw_id);
        //std::cout << "cur: " << cur_id << " fgw: " << fgw_id << std::endl;
    }

    

    return 0;
}