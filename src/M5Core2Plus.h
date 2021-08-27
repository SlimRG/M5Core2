 #define ESP32

#ifndef _M5Core2Plus_H_
  #define _M5Core2Plus_H_

  #if defined(ESP32)
  
  #include <M5Core2.h>

   class M5Core2Plus: : public M5Core2 {

     //Power_Plus Power;


   }

   extern M5Core2Plus M5P;

  #else
    #error “This library only supports boards with ESP32 processor.”
  #endif
#endif