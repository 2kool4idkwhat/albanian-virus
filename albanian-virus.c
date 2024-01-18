#define WIN32_LEAN_AND_MEAN
#include <windows.h>

int main() {

  MessageBox(
    NULL, 
    "Hi, I am an Albanian virus but because of poor technology in my country unfortunately I am not able to harm your computer. Please be so kind to delete one of your important files yourself and then forward me to other users. Many thanks for your cooperation! Best regards,Albanian virus",
    "Virus Alert !",
    MB_ICONERROR | MB_YESNOCANCEL | MB_DEFBUTTON1
  );

  return 0;
}
