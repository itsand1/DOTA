#Andy Wahyu Hartato/14201125

#include <stdio.h> #include <windows.h>

int main (void) { startupinfo si; process_information pi;

/*allocate memory */ zeromemory(&si, sizeof(pi)); si.cb = sizeof(si); zeromemory(&pi, sizeof(pi));

/* create child process */ if (!createprocess(null, */ use command lune / "c:\windows\system32\mspaint.exe", / command / null, / dont't inherit process handle / null, / dont't inherit thread handle / false,/ disable handle inheritance / 0, / no creation flags / null, / use parent's envirenment block / null, / use parent's existing directory */ &si, &pi))

{ fprintf(stderr, "create process failed"); return -1; } /* parent will wait for the child to complete */ waitforsingobject(pi.hprocess, infinite); printf ("child complete");

/* clode handles */ closehandle(pi.hprocess); closehandle(pi.hthread); }