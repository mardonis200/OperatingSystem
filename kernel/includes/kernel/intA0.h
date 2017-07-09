
#define INTA0_GET_APIC_ID 0x00
#define INTA0_VIRT2PHYS 0x01
#define INTA0_LOADPROCESS 0x02
#define INTA0_WAITPROCESS_DEATH 0x03
#define INTA0_GET_DATETIME 0x04

#define INTA0_KILL_CURRENT_TASK 0x10

#define INTA0_PRINTF 0x20
#define INTA0_CREATETEXTCONSOLE 0x21
#define INTA0_POLL_IN 0x22
#define INTA0_STEALTEXTCONSOLE 0x23
#define INTA0_RESTORETEXTCONSOLE 0x24
#define INTA0_GETDIRECTBUFFER 0x25

#define INTA0_MALLOC 0x30
#define INTA0_FREE 0x31

#define INTA0_FOPEN 0x40
#define INTA0_FREAD 0x41
#define INTA0_FWRITE 0x42
#define INTA0_FCLOSE 0x43
#define INTA0_FSEEK 0x44
#define INTA0_FGETSIZE 0x45

#define INTA0_CREATE_SOCKET 0x50
#define INTA0_CLOSE_SOCKET 0x51
#define INTA0_CONNECT 0x52
#define INTA0_RELEASE_SOCKET 0x53
#define INTA0_RECV 0x54
#define INTA0_SEND 0x55
#define INTA0_LISTEN 0x56
#define INTA0_ACCEPT 0x57
