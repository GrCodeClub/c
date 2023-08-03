#include <windows.h>
#include <lmcons.h> // Για τη σταθερά UNLEN
#include <stdio.h>

int main() {
    //Αλλαγή της κωδικοποίησης σε 1253 ("Windows-1253" ή "Greek Windows")
    //system("chcp 1253");
    //Αλλαγή της κωδικοποίησης σε UTF-8
    system("chcp 65001");

    char username[UNLEN + 1];
    DWORD size = UNLEN + 1;
    GetUserName(username, &size);
    printf("Πληροφορίες χρήστη \n");
    printf("%s\n", username);
    
    return 0;
}
