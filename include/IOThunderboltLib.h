

#ifndef IOThunderboltLib_h
#define IOThunderboltLib_h

#include <IOKit/IOCFPlugIn.h>

/*
00008068  void* unknown
00008070  void* unknown0
00008078  void* data_8078 = IOThunderboltLibPriv::configRead(void*, uint64_t, uint32_t, uint32_t, uint32_t, uint32_t, uint64_t)
00008080  void* data_8080 = IOThunderboltLibPriv::configWrite(void*, uint64_t, uint32_t, uint32_t, uint32_t, uint32_t, uint64_t)
00008088  void* unknown1
00008090  void* unknown2
00008098  void* unknown3
000080a0  void* unknown4
000080a8  void* unknown5
000080b0  void* unknown6
000080b8  void* unknown7
000080c0  void* data_80c0 = IOThunderboltLibPriv::i2cCommand(void*, uint64_t, uint8_t, uint32_t, uint64_t, uint32_t, uint64_t)
000080c8  void* data_80c8 = IOThunderboltLibPriv::i2cCommandWithFlags(void*, uint64_t, uint8_t, uint32_t, uint64_t, uint32_t, uint64_t, uint32_t)
000080d0  void* data_80d0 = IOThunderboltLibPriv::setI2CClockRate(void*, uint64_t, uint32_t)
000080d8  void* data_80d8 = IOThunderboltLibPriv::iecsCommand(void*, uint64_t, uint32_t, uint32_t, uint8_t, uint32_t, uint64_t, uint8_t, uint32_t)
000080e0  void* data_80e0 = IOThunderboltLibPriv::iecsCommandWithReadLength(void*, uint64_t, uint32_t, uint32_t, uint8_t, uint32_t, uint64_t, uint8_t, uint32_t, uint32_t*)
000080e8  void* data_80e8 = IOThunderboltLibPriv::findCapability(void*, uint64_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*)
000080f0  void* data_80f0 = IOThunderboltLibPriv::configReadJTAG(void*, uint8_t, uint32_t, uint32_t, uint32_t, uint32_t*)
000080f8  void* data_80f8 = IOThunderboltLibPriv::configWriteJTAG(void*, uint8_t, uint32_t, uint32_t, uint32_t, uint32_t)
00008100  void* data_8100 = IOThunderboltLibPriv::hostDeviceConnect(void*, int32_t)
00008108  void* data_8108 = IOThunderboltLibPriv::routerOperation(void*, uint64_t, uint16_t, uint32_t*, uint32_t*, int32_t, uint32_t*)
00008110  void* data_8110 = IOThunderboltLibPriv::getTraceCount(void*, uint32_t*)
00008118  void* data_8118 = IOThunderboltLibPriv::getTraceInfo(void*, uint32_t, uint32_t*, uint64_t*)
00008120  void* data_8120 = IOThunderboltLibPriv::readTraceData(void*, uint32_t, uint64_t, uint64_t)

*/

#endif