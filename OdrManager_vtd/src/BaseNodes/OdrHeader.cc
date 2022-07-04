
#include "OdrHeader.hh"
#include "OdrReaderXML.hh"
#include <stdio.h>
namespace OpenDrive{Header::Header():Node("\x48\x65\x61\x64\x65\x72"){mOpcode=
ODR_OPCODE_HEADER;}Header::~Header(){}void Header::printData()const{fprintf(
stderr,
"\x52\x65\x76\x69\x73\x69\x6f\x6e\x3a\x20\x20\x20\x20\x25\x64\x2e\x25\x64" "\n",
mRevMajor,mRevMinor);fprintf(stderr,
"\x44\x61\x74\x61\x62\x61\x73\x65\x3a\x20\x20\x20\x20\x25\x73" "\n",mDbName.
c_str());fprintf(stderr,
"\x56\x65\x72\x73\x69\x6f\x6e\x3a\x20\x20\x20\x20\x20\x25\x2e\x32\x66" "\n",
mVersion);fprintf(stderr,
"\x44\x61\x74\x65\x3a\x20\x20\x20\x20\x20\x20\x20\x20\x25\x73" "\n",mTimeDate.
c_str());fprintf(stderr,
"\x4e\x6f\x72\x74\x68\x3a\x20\x20\x20\x20\x20\x20\x20\x25\x2e\x34\x66" "\n",
mNorth);fprintf(stderr,
"\x6d\x53\x6f\x75\x74\x68\x3a\x20\x20\x20\x20\x20\x20\x25\x2e\x34\x66" "\n",
mSouth);fprintf(stderr,
"\x6d\x45\x61\x73\x74\x3a\x20\x20\x20\x20\x20\x20\x20\x25\x2e\x34\x66" "\n",
mEast);fprintf(stderr,
"\x6d\x57\x65\x73\x74\x3a\x20\x20\x20\x20\x20\x20\x20\x25\x2e\x34\x66" "\n",
mWest);fprintf(stderr,
"\x6d\x56\x65\x6e\x64\x6f\x72\x3a\x20\x20\x20\x20\x20\x25\x73" "\n",mVendor.
c_str());fprintf(stderr,
"\x6d\x61\x78\x2e\x20\x52\x6f\x61\x3a\x20\x20\x20\x20\x25\x64" "\n",mMaxRoad);
fprintf(stderr,
"\x6d\x61\x78\x2e\x20\x4a\x75\x6e\x63\x20\x20\x20\x20\x25\x64" "\n",mMaxJunc);
fprintf(stderr,
"\x6d\x61\x78\x2e\x20\x50\x72\x67\x3a\x20\x20\x20\x20\x25\x64" "\n",mMaxPrg);
fprintf(stderr,
"\x6d\x4f\x72\x69\x67\x4c\x61\x74\x3a\x20\x20\x20\x20\x25\x2e\x35\x6c\x66" "\n",
mOrigLat);fprintf(stderr,
"\x6d\x4f\x72\x69\x67\x4c\x6f\x6e\x67\x3a\x20\x20\x20\x25\x2e\x35\x6c\x66" "\n",
mOrigLong);fprintf(stderr,
"\x6d\x4f\x72\x69\x67\x48\x64\x67\x3a\x20\x20\x20\x20\x25\x2e\x35\x6c\x66" "\n",
mOrigHdg);fprintf(stderr,
"\x6d\x4f\x72\x69\x67\x48\x65\x69\x67\x68\x74\x3a\x20\x25\x2e\x35\x6c\x66" "\n",
mOrigHeight);}bool Header::read(ReaderXML*F3vnM){mRevMajor=F3vnM->getUShort(
"\x72\x65\x76\x4d\x61\x6a\x6f\x72");mRevMinor=F3vnM->getUShort(
"\x72\x65\x76\x4d\x69\x6e\x6f\x72");mDbName=F3vnM->getString("\x6e\x61\x6d\x65")
;mVersion=F3vnM->getDouble("\x76\x65\x72\x73\x69\x6f\x6e");mTimeDate=F3vnM->
getString("\x64\x61\x74\x65");mNorth=F3vnM->getDouble("\x6e\x6f\x72\x74\x68");
mSouth=F3vnM->getDouble("\x73\x6f\x75\x74\x68");mEast=F3vnM->getDouble(
"\x65\x61\x73\x74");mWest=F3vnM->getDouble("\x77\x65\x73\x74");mVendor=F3vnM->
getString("\x76\x65\x6e\x64\x6f\x72");mMaxRoad=F3vnM->getUInt(
"\x6d\x61\x78\x52\x6f\x61\x64");mMaxJunc=F3vnM->getUInt(
"\x6d\x61\x78\x4a\x75\x6e\x63");mMaxPrg=F3vnM->getUInt(
"\x6d\x61\x78\x50\x72\x67");mOrigLat=F3vnM->getDouble(
"\x6f\x72\x69\x67\x69\x6e\x4c\x61\x74");mOrigLong=F3vnM->getDouble(
"\x6f\x72\x69\x67\x69\x6e\x4c\x6f\x6e\x67");mOrigHdg=F3vnM->getDouble(
"\x6f\x72\x69\x67\x69\x6e\x48\x64\x67");mOrigHeight=F3vnM->getDouble(
"\x6f\x72\x69\x67\x69\x6e\x48\x65\x69\x67\x68\x74");return true;}}