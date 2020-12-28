#include "pch.h"

#include "util.h"
#include "curl.h"

VOID Main() {
    Util::InitConsole();

    printf("Welcome To OnyxFN\n");
    Sleep(1000);
    printf("Made By Jacobb626, Beat YT And Sync.\n");
    Sleep(2000);
    printf("Launching...\n");

    InitCurl();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH)
        Main();

    return TRUE;
}
