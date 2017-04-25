#ifndef _RF430_REG_H_
#define _RF430_REG_H_

#define RF430_DEFAULT_DATA		{  														\
/*NDEF Tag Application Name*/ 															\
0xD2, 0x76, 0x00, 0x00, 0x85, 0x01, 0x01, 												\
																						\
/*Capability Container ID*/ 															\
0xE1, 0x03, 																			\
0x00, 0x0F,	/* CCLEN */																	\
0x20,		/* Mapping version 2.0 */													\
0x00, 0xF9,	/* MLe (49 bytes); Maximum R-APDU data size  most bytes that can be read*/  							\
0x00, 0xF6, /* MLc (52 bytes); Maximum C-APDU data size most bystes that can be written */								\
0x04, 		/* Tag, File Control TLV (4 = NDEF file) */									\
0x06, 		/* Length, File Control TLV (6 = 6 bytes of data for this tag) */			\
0xE1, 0x04,	/* File Identifier */														\
0x0B, 0xDF, /* Max NDEF size (3037 bytes of useable memory) */							\
0x00, 		/* NDEF file read access condition, read access without any security */		\
0x00, 		/* NDEF file write access condition; write access without any security */	\
																						\
/* NDEF File ID */ 																		\
0xE1, 0x04, 																			\
																						\
/* NDEF File for Hello World */                             				            \
0x00, 0x14, /* NLEN: NDEF length (20 byte long message, max. length for RF430CL) */     \
                                                                                       \
/* NDEF Record (refer to NFC Data Exchange Format specifications)*/                     \
0xD1,       /*MB(Message Begin), SR(Short Record) flags set, ME(Message End), IL(ID length field present) flags cleared; TNF(3bits) = 1; */  \
0x01, 0x10, /*Type Length = 0x01; Payload Length = 0x10 */                              \
0x54,       /* Type = T (text) */                                                       \
0x02,       /* 1st payload byte: "Start of Text", as specified in ASCII Tables */       \
0x65, 0x6E, /* 'e', 'n', (2nd, 3rd payload bytes*/                                      \
                                                                                       \
/* 'Hello, world!' NDEF data*/                                                          \
0x48, 0x65, 0x6C, 0x6C, 0x6f, 0x2c, 0x20, 0x77, 0x6f, 0x72, 0x6c, 0x64,0x21       \
/*0x66, 0x61, 0x63, 0x65, 0x62, 0x6f, 0x6f, 0x6b, 0x2e, 0x63, 0x6f, 0x6d     */             \
} /* End of data */

#define CONTROL_REG 		0xFFFE
#define STATUS_REG			0xFFFC
#define INT_ENABLE_REG		0xFFFA
#define INT_FLAG_REG		0xFFF8
#define CRC_RESULT_REG		0xFFF6
#define CRC_LENGTH_REG		0xFFF4
#define CRC_START_ADDR_REG	0xFFF2
#define COMM_WD_CTRL_REG	0xFFF0
#define VERSION_REG			0xFFEE //contains the software version of the ROM
#define TEST_FUNCTION_REG   0xFFE2
#define TEST_MODE_REG		0xFFE0

#define NDEF_READY 0x0001
#define RF_ENABLE 0x0002

#endif

