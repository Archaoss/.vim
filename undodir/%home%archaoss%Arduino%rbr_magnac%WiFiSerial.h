Vim�UnDo� �d�����e �1���3�b,Y�_3��}z^Ǡy   !    #define weblogf WebSerial.printf            X       X   X   X    f�2    _�                             ����                                                                                                                                                                                                                                                                                                                                                             f�4�     �                  �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             f�4�    �                 5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             f�4�     �                 �             �                {   }�                 // �               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             f�4�     �               	namespace     WiFeSerial�               	namespace    �               {5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             f�4�    �               namespace WiFeSerial5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             f�5     �                    �                �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             f�5	     �         	       5�_�      	                      ����                                                                                                                                                                                                                                                                                                                                                             f�5    �         	       �         	    5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             f�5    �         	      #include <WebSerial.h>5�_�   	              
           ����                                                                                                                                                                                                                                                                                                                                                             f�52     �      	   	    5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                             f�53     �      	   
       �      	   
    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             f�5<     �      	   
      AsyncWebServer server(80);5�_�                    	        ����                                                                                                                                                                                                                                                                                                                                                             f�5>    �             �   
               {     }�         
       5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             f�5f     �                �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             f�5g     �               WebSerial.begin(&server);5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             f�5h     �               WebSerial.begin(&server);5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             f�5i     �               WebSerial.begin(&server);5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             f�5j     �               WebSerial.begin(&server);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             f�5k    �                 WebSerial.begin(&server);5�_�                   	        ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �                �   	   
       5�_�                    	        ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �               (void recvMsg(uint8_t *data, size_t len){5�_�                    
   
    ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �   	            *  void recvMsg(uint8_t *data, size_t len){5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �   	            ,  void receivMsg(uint8_t *data, size_t len){5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �   	            +  void receiveg(uint8_t *data, size_t len){5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �                 for(int i=0; i < len; i++){5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �                 for(int i=0; i < len; i++)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �                 for (int i=0; i < len; i++)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �                 for (int i= 0; i < len; i++)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �                 for (int i = 0; i < len; i++)5�_�      !                      ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �                  for (int i = 0; i < len; xi++)5�_�       "           !          ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �                 for (int i = 0; i < len; i++)5�_�   !   #           "          ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �                 for (int i = 0; i < len; ++)5�_�   "   $           #   
   -    ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �   	            .  void receiveData(uint8_t *data, size_t len){5�_�   #   %           $           ����                                                                                                                                                                                                                                                                                                                                                V       f�5�     �               (  WebSerial.println("Received Data...");     String d = "";     for (int i = 0; i < len; ++I)     {       d += char(data[i]);     }     WebSerial.println(d);   }5�_�   $   &           %   
   ,    ����                                                                                                                                                                                                                                                                                                                                                V       f�5�     �   	            -  void receiveData(uint8_t *data, size_t len)5�_�   %   '           &          ����                                                                                                                                                                                                                                                                                                                                                V       f�5�    �               !    for (int i = 0; i < len; ++I)5�_�   &   (           '      "    ����                                                                                                                                                                                                                                                                                                                                                V       f�5�    �               $    for (int i = 0; i < length; ++I)5�_�   '   )           (          ����                                                                                                                                                                                                                                                                                                                                                V       f�5�   	 �             5�_�   (   *           )          ����                                                                                                                                                                                                                                                                                                                                                V       f�5�     �             5�_�   )   +           *          ����                                                                                                                                                                                                                                                                                                                                                V       f�5�     �                   {5�_�   *   ,           +          ����                                                                                                                                                                                                                                                                                                                                                V       f�5�     �                    dd{5�_�   +   -           ,          ����                                                                                                                                                                                                                                                                                                                                                V       f�5�   
 �                    }5�_�   ,   .           -           ����                                                                                                                                                                                                                                                                                                                                                V       f�5�    �             5�_�   -   /           .          ����                                                                                                                                                                                                                                                                                                                                                V       f�5�     �                   WebSerial.begin(&server);�             5�_�   .   0           /          ����                                                                                                                                                                                                                                                                                                                                                V       f�5�     �               #      WebSerial.onMessage(recvMsg);5�_�   /   1           0          ����                                                                                                                                                                                                                                                                                                                                                V       f�5�    �               -    server.begin(); WebSerial.begin(&server);5�_�   0   2           1          ����                                                                                                                                                                                                                                                                                                                                                V       f�5�     �                    server.begin();5�_�   1   3           2          ����                                                                                                                                                                                                                                                                                                                                                V       f�5�    �             �             5�_�   2   4           3          ����                                                                                                                                                                                                                                                                                                                                                V       f�6�     �               !    WebSerial.onMessage(recvMsg);�             5�_�   3   5           4      #    ����                                                                                                                                                                                                                                                                                                                                                V       f�6�    �               ,    WebSerial.onMessage(receiveDatarecvMsg);5�_�   4   6           5          ����                                                                                                                                                                                                                                                                                                                                                V       f�7    �               namespace WiFeSerial5�_�   5   7           6          ����                                                                                                                                                                                                                                                                                                                                                V       f�Je     �                   �             5�_�   6   9           7          ����                                                                                                                                                                                                                                                                                                                                                V       f�J�     �               '    WebSerial.println(F("EPrivat 202"))5�_�   7   :   8       9          ����                                                                                                                                                                                                                                                                                                                                                V       f�J�    �                   WebSerial.println(F("5�_�   9   ;           :           ����                                                                                                                                                                                                                                                                                                                                                             f���     �             5�_�   :   <           ;           ����                                                                                                                                                                                                                                                                                                                                                             f���    �                5�_�   ;   =           <          ����                                                                                                                                                                                                                                                                                                                                                             f���     �             �             5�_�   <   >           =          ����                                                                                                                                                                                                                                                                                                                                                             f���    �               #ifndef WIFISERIAL_H5�_�   =   ?           >           ����                                                                                                                                                                                                                                                                                                                                                             f���    �                  �               5�_�   >   @           ?          ����                                                                                                                                                                                                                                                                                                                                                             f��    �                /    WebSerial.println(F("eprivat 2024-08-21"));5�_�   ?   A           @          ����                                                                                                                                                                                                                                                                                                                                                             f�
M     �                #include <WebSerialLite.h>5�_�   @   B           A          ����                                                                                                                                                                                                                                                                                                                                                             f�
M     �                #include <WebSerialite.h>5�_�   A   C           B          ����                                                                                                                                                                                                                                                                                                                                                             f�
N     �                #include <WebSerialte.h>5�_�   B   D           C          ����                                                                                                                                                                                                                                                                                                                                                             f�
N    �                #include <WebSeriale.h>5�_�   C   E           D           ����                                                                                                                                                                                                                                                                                                                                                             f�A     �                %    WebSerial.onMessage(receiveData);5�_�   D   F           E          ����                                                                                                                                                                                                                                                                                                                                                             f�B    �             �             5�_�   E   G           F          ����                                                                                                                                                                                                                                                                                                                                                             f�]    �                #include <WebSerial.h>5�_�   F   H           G           ����                                                                                                                                                                                                                                                                                                                                                             f�+     �      !   !       �               5�_�   G   I           H       	    ����                                                                                                                                                                                                                                                                                                                                                             f�4     �      !   "      #define wblogf5�_�   H   J           I           ����                                                                                                                                                                                                                                                                                                                                                             f�6     �      !   "      #define weblogf5�_�   I   K           J           ����                                                                                                                                                                                                                                                                                                                                                             f�H    �      !   "      #define weblogf()5�_�   J   P           K          ����                                                                                                                                                                                                                                                                                                                                                             f��    �                *    WebSerial.println("Received Data...");5�_�   K   Q   L       P          ����                                                                                                                                                                                                                                                                                                                                                             f�    �          !       #define weblogf WebSerial.printf5�_�   P   R           Q          ����                                                                                                                                                                                                                                                                                                                                                             f�     �          !      %#define weblogf(f, ) WebSerial.printf5�_�   Q   S           R      (    ����                                                                                                                                                                                                                                                                                                                                                             f�     �          !      (#define weblogf(f, ...) WebSerial.printf5�_�   R   T           S      +    ����                                                                                                                                                                                                                                                                                                                                                             f�!     �          !      2#define weblogf(f, ...) WebSerial.printf(F([EP] ))5�_�   S   U           T      -    ����                                                                                                                                                                                                                                                                                                                                                             f�!     �          !      4#define weblogf(f, ...) WebSerial.printf(F(""[EP] ))5�_�   T   V           U      1    ����                                                                                                                                                                                                                                                                                                                                                             f�#     �          !      3#define weblogf(f, ...) WebSerial.printf(F("[EP] ))5�_�   U   W           V      4    ����                                                                                                                                                                                                                                                                                                                                                             f�$     �          !      6#define weblogf(f, ...) WebSerial.printf(F("[EP] " "))5�_�   V   X           W      5    ����                                                                                                                                                                                                                                                                                                                                                             f�'     �          !      6#define weblogf(f, ...) WebSerial.printf(F("[EP] " f))5�_�   W               X      ;    ����                                                                                                                                                                                                                                                                                                                                                             f�1    �          !      <#define weblogf(f, ...) WebSerial.printf(F("[EP] " f), __VA)5�_�   K   M       P   L          ����                                                                                                                                                                                                                                                                                                                                                             f��     �              5�_�   L   N           M           ����                                                                                                                                                                                                                                                                                                                                                             f��     �              5�_�   M   O           N          ����                                                                                                                                                                                                                                                                                                                                                             f��     �                   WebSerial.printn(d);5�_�   N               O          ����                                                                                                                                                                                                                                                                                                                                                             f��    �                   WebSerial.print(d);5�_�   7           9   8          ����                                                                                                                                                                                                                                                                                                                                                V       f�J�     �               
          �                         // eprivat 2024-08-21             // u5�_�                    	        ����                                                                                                                                                                                                                                                                                                                                                             f�5�     �   	   
       �   	   
         ,  TaskHandle_t dimmer_task_handle = nullptr;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             f�57     �      	   
       5��