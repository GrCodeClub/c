#include <stdio.h>
#include <stdlib.h> 
#include <windows.h>

int main() {

    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);

    printf("Αρχιτεκτονική Επεξεργαστή: %lu\n", systemInfo.wProcessorArchitecture);
    printf("Τύπος Επεξεργαστή: %lu\n", systemInfo.dwProcessorType);
    printf("Συνολικός Αριθμός Επεξεργαστών: %lu\n", systemInfo.dwNumberOfProcessors);
    printf("Μάσκα Ενεργών Επεξεργαστών: %lu\n", systemInfo.dwActiveProcessorMask);

    printf("Page Size: %u\n", systemInfo.dwPageSize);
    printf("Minimum Application Address: %p\n", systemInfo.lpMinimumApplicationAddress);
    printf("Maximum Application Address: %p\n", systemInfo.lpMaximumApplicationAddress);
    printf("Allocation Granularity: %u\n", systemInfo.dwAllocationGranularity);


    printf("Μέγεθος Σελίδας Μνήμης: %lu bytes\n", systemInfo.dwPageSize);


    return 0;
}

