// Taken from the Datasheets
/*
5x5 Dot Matrix Serial Input Dot Addressable Intelligent Display® Devices

Yellow SCDQ5541P/Q/R
Super-red SCDQ5542P/Q/R
Green SCDQ5543P/Q/R
High Efficiency Green SCDQ5544P/Q/R
*/

#ifndef FONT5X7_H
#define FONT5X7_H 


// standard ascii 5x5 font
// defines ascii characters 0x41-0x7a (32-127)
//static unsigned char Font5x5[] = {
static unsigned char __attribute__ ((progmem)) Font5x7[] = {
// ' ':
  0x00, 0x20, 0x40, 0x60, 0x80,
// '!':
  0x04, 0x24, 0x44, 0x60, 0x84,
// '"':
  0x0A, 0x2A, 0x40, 0x60, 0x80,
// '#':
  0x0A, 0x3F, 0x4A, 0x7F, 0x8A,
// '$':
  0x0F, 0x34, 0x4E, 0x65, 0x9E,
// '%':
  0x19, 0x3A, 0x44, 0x6B, 0x93,
// '&':
  0x08, 0x34, 0x4D, 0x72, 0x8D,
// ''':
  0x04, 0x24, 0x40, 0x60, 0x80,
// '(':
  0x02, 0x24, 0x44, 0x64, 0x82,
// ')':
  0x08, 0x24, 0x44, 0x64, 0x88,
// '*':
  0x15, 0x2E, 0x5F, 0x6E, 0x95,
// '+':
  0x04, 0x24, 0x5F, 0x64, 0x84,
// ',':
  0x00, 0x20, 0x40, 0x64, 0x84,
// '-':
  0x00, 0x20, 0x4E, 0x60, 0x80,
// '.':
  0x00, 0x20, 0x40, 0x60, 0x84,
// '/':
  0x01, 0x22, 0x44, 0x68, 0x90,
// ' 0 ':
  0x0E, 0x33, 0x55, 0x79, 0x8E,
// ' 1 ':
  0x04, 0x2C, 0x44, 0x64, 0x8E,
// ' 2 ':
  0x1E, 0x21, 0x46, 0x68, 0x9F,
// ' 3 ':
  0x1E, 0x21, 0x4E, 0x61, 0x9E,
// ' 4 ':
  0x06, 0x2A, 0x5F, 0x62, 0x82,
// ' 5 ':
  0x1F, 0x30, 0x5E, 0x61, 0x9E,
// ' 6 ':
  0x06, 0x28, 0x5E, 0x71, 0x8E,
// ' 7 ':
  0x1F, 0x22, 0x44, 0x68, 0x88,
// ' 8 ':
  0x0E, 0x31, 0x4E, 0x71, 0x8E,
// ' 9 ':
  0x0E, 0x31, 0x4F, 0x62, 0x8C,
// ':':
  0x00, 0x24, 0x40, 0x64, 0x80,
// ';':
  0x00, 0x24, 0x40, 0x6C, 0x80,
// ' < ':
  0x02, 0x24, 0x48, 0x64, 0x82,
// ' = ':
  0x00, 0x3F, 0x40, 0x7F, 0x80,
// ' > ':
  0x08, 0x24, 0x42, 0x64, 0x88,
// '?':
  0x0E, 0x31, 0x42, 0x64, 0x84,
// '@':
  0x0E, 0x35, 0x57, 0x70, 0x8E,
// 'A':
  0x04, 0x2A, 0x5F, 0x71, 0x91,   
// 'B':
  0x1E, 0x29, 0x4E, 0x69, 0x9E,   
// 'C':
  0x0F, 0x30, 0x50, 0x70, 0x8F,   
// 'D':
  0x1E, 0x29, 0x49, 0x69, 0x9E,   
// 'E':
  0x1F, 0x30, 0x5E, 0x70, 0x9F,   
// 'F':
  0x1F, 0x30, 0x5E, 0x70, 0x90,   
// 'G':
  0x0F, 0x30, 0x53, 0x71, 0x8F,   
// 'H':
  0x11, 0x31, 0x5F, 0x71, 0x91,   
// 'I':
  0x0E, 0x24, 0x44, 0x64, 0x8E,   
// 'J':
  0x01, 0x21, 0x41, 0x71, 0x8E,   
// 'K':
  0x13, 0x34, 0x58, 0x74, 0x93,   
// 'L':
  0x10, 0x30, 0x50, 0x70, 0x9F,   
// 'M':
  0x11, 0x3B, 0x55, 0x71, 0x91,   
// 'N':
  0x11, 0x39, 0x55, 0x73, 0x91,   
// 'O':
  0x0E, 0x31, 0x51, 0x71, 0x8E,   
// 'P':
  0x1E, 0x31, 0x5E, 0x70, 0x90,   
// 'Q':
  0x0C, 0x32, 0x56, 0x72, 0x8D,   
// 'R':
  0x1E, 0x31, 0x5E, 0x74, 0x92,   
// 'S':
  0x0F, 0x30, 0x4E, 0x61, 0x9E,   
// 'T':
  0x1F, 0x24, 0x44, 0x64, 0x84,   
// 'U':
  0x11, 0x31, 0x51, 0x71, 0x8E,   
// 'V':
  0x11, 0x31, 0x51, 0x6A, 0x84,   
// 'W':
  0x11, 0x31, 0x55, 0x7B, 0x91,   
// 'X':
  0x11, 0x2A, 0x44, 0x6A, 0x91,   
// 'Y':
  0x11, 0x2A, 0x44, 0x64, 0x84,   
// 'Z':
  0x1F, 0x22, 0x44, 0x68, 0x9F,   
// '[':
  0x07, 0x24, 0x44, 0x64, 0x87,
// '\' :
  0x10, 0x28, 0x44, 0x62, 0x81,
// ']' : 
  0x1C, 0x24, 0x44, 0x64, 0x9C,
// '^':
  0x04, 0x2A, 0x51, 0x60, 0x80,
// '_':
  0x00, 0x20, 0x40, 0x60, 0x9F,
// ''':
  0x0A, 0x2A, 0x40, 0x60, 0x80,
// 'a':
  0x00, 0x2E, 0x52, 0x72, 0x8D,   
// 'b':
  0x10, 0x30, 0x5E, 0x71, 0x9E,   
// 'c':
  0x00, 0x2F, 0x50, 0x70, 0x8F,   
// 'd':
  0x01, 0x21, 0x4F, 0x71, 0x8F,   
// 'e':
  0x00, 0x2E, 0x5F, 0x70, 0x8E,   
// 'f':
  0x04, 0x2A, 0x48, 0x7C, 0x88,   
// 'g':
  0x00, 0x2F, 0x50, 0x73, 0x8F,   
// 'h':
  0x10, 0x30, 0x56, 0x79, 0x91,   
// 'i':
  0x04, 0x20, 0x4C, 0x64, 0x8E,   
// 'j':
  0x00, 0x26, 0x42, 0x72, 0x8C,   
// 'k':
  0x10, 0x30, 0x56, 0x78, 0x96,   
// 'l':
  0x0C, 0x24, 0x44, 0x64, 0x8E,   
// 'm':
  0x00, 0x2A, 0x55, 0x71, 0x91,   
// 'n':
  0x00, 0x36, 0x59, 0x71, 0x91,   
// 'o':
  0x00, 0x2E, 0x51, 0x71, 0x8E,   
// 'p':
  0x00, 0x3E, 0x51, 0x7E, 0x90,   
// 'q':
  0x00, 0x2F, 0x51, 0x6F, 0x81,   
// 'r':
  0x00, 0x33, 0x54, 0x78, 0x90,   
// 's':
  0x00, 0x23, 0x44, 0x62, 0x8C,   
// 't':
  0x08, 0x3C, 0x48, 0x6A, 0x84,   
// 'u':
  0x00, 0x32, 0x52, 0x72, 0x8D,   
// 'v':
  0x00, 0x31, 0x51, 0x6A, 0x84,   
///*
// 'w':
  0x00, 0x31, 0x55, 0x7B, 0x91,   
// 'x':
  0x00, 0x32, 0x4C, 0x6C, 0x92,   
// 'y':
  0x00, 0x31, 0x4A, 0x64, 0x98,   
// 'z':
  0x00, 0x3E, 0x44, 0x68, 0x9E,   
// ' { ':
  0x06, 0x24, 0x48, 0x64, 0x86,
// '|':
  0x04, 0x24, 0x44, 0x64, 0x84,
// ' } ':
  0x0C, 0x24, 0x42, 0x64, 0x8C,
// '~':
  0x00, 0x27, 0x5C, 0x60, 0x80,
};

#endif



