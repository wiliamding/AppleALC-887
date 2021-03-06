//                                                   
//  kern_resources.cpp                               
//  AppleALC                                         
//                                                   
//  Copyright © 2016 vit9696. All rights reserved.   
//                                                   
//  This is an autogenerated file!                   
//  Please avoid any modifications!                  
//                                                   

#include "kern_resources.hpp"                      


// Lookup section

static const char * tree0[] { "AppleACPIPCI", "IGPU", };
static const char * tree1[] { "AppleACPIPCI", "HDAU", };
static const char * tree2[] { "AppleACPIPCI", "HDEF", "AppleHDAController", "IOHDACodecDevice", };
CodecLookupInfo codecLookup[] {
	{ tree0, 2, 1, false },
	{ tree1, 2, 1, false },
	{ tree2, 4, 1, true },
};
const size_t codecLookupSize {3};

// Kext section

static const char * kextPath0[] { "/System/Library/Extensions/AppleHDA.kext/Contents/PlugIns/AppleHDAController.kext/Contents/MacOS/AppleHDAController", };
static const char * kextPath1[] { "/System/Library/Extensions/AppleIntelFramebufferAzul.kext/Contents/MacOS/AppleIntelFramebufferAzul", };
static const char * kextPath2[] { "/System/Library/Extensions/AppleHDA.kext/Contents/MacOS/AppleHDA", };
static const char * kextPath3[] { "/System/Library/Extensions/AppleIntelFramebufferCapri.kext/Contents/MacOS/AppleIntelFramebufferCapri", };
KernelPatcher::KextInfo kextList[] {
	{ "com.apple.driver.AppleHDAController", kextPath0, 1, false, KernelPatcher::KextInfo::Unloaded },
	{ "com.apple.driver.AppleIntelFramebufferAzul", kextPath1, 1, false, KernelPatcher::KextInfo::Unloaded },
	{ "com.apple.driver.AppleHDA", kextPath2, 1, true, KernelPatcher::KextInfo::Unloaded },
	{ "com.apple.driver.AppleIntelFramebufferCapri", kextPath3, 1, false, KernelPatcher::KextInfo::Unloaded },
};

const size_t kextListSize {4};

// Creative CodecMod section

CodecModInfo codecModCreative[] {
};

// AMD CodecMod section

CodecModInfo codecModAMD[] {
};

// NVIDIA CodecMod section

CodecModInfo codecModNVIDIA[] {
};

// Realtek CodecMod section

static const uint32_t revisions0[] { 0x100302, };
static const uint8_t file0[] {
	0x78, 0x9C, 0xED, 0x9D, 0x5D, 0x73, 0x9A, 0x40, 0x14, 0x86, 0xAF, 0xF5, 0x57, 0x50, 0xEE, 0x75, 0xFD, 0xE8, 0x47, 0xDA, 0x21, 0x66, 0xA2, 0xA4, 
	0x53, 0x67, 0x34, 0x65, 0x26, 0xA6, 0x33, 0xBD, 0xA4, 0xB2, 0x0D, 0x4C, 0xF9, 0x1A, 0x58, 0x63, 0xFD, 0xF7, 0x01, 0x15, 0x61, 0x11, 0xC5, 0xA0, 
	0x69, 0x11, 0xDF, 0x3B, 0xD8, 0xDD, 0x73, 0x76, 0x5D, 0xDE, 0xE7, 0x90, 0xE5, 0x9C, 0x99, 0x48, 0x37, 0x7F, 0x2D, 0x53, 0x78, 0xA6, 0x9E, 0x6F, 
	0x38, 0xF6, 0xB5, 0xD8, 0x6E, 0xB6, 0x44, 0x81, 0xDA, 0x53, 0x47, 0x33, 0xEC, 0xA7, 0x6B, 0xF1, 0x71, 0xF2, 0xB5, 0x71, 0x25, 0xDE, 0xF4, 0xEA, 
	0xD2, 0x3B, 0xF9, 0xFB, 0x60, 0xF2, 0x53, 0xB9, 0x13, 0x5C, 0xD3, 0xF0, 0x99, 0xA0, 0x3C, 0xF6, 0x47, 0xC3, 0x81, 0x20, 0x36, 0x08, 0xB9, 0x75, 
	0x5D, 0x93, 0x12, 0x22, 0x4F, 0x64, 0x41, 0x19, 0x0D, 0x1F, 0x26, 0x42, 0xE0, 0x83, 0x90, 0xBB, 0x7B, 0x51, 0x10, 0x75, 0xC6, 0xDC, 0x2F, 0x84, 
	0xCC, 0xE7, 0xF3, 0xA6, 0x1A, 0x8E, 0x6A, 0x4E, 0x1D, 0x2B, 0x1C, 0xE8, 0x13, 0xC5, 0x73, 0x5C, 0xEA, 0xB1, 0xC5, 0x28, 0x70, 0xD6, 0x08, 0x0C, 
	0x9A, 0x1A, 0xD3, 0xC4, 0x60, 0x9A, 0x95, 0x77, 0x6E, 0x39, 0x41, 0xAB, 0x66, 0x4C, 0x59, 0xAF, 0x5E, 0x93, 0xFE, 0xD0, 0x45, 0x6F, 0xE0, 0x58, 
	0x96, 0x63, 0x2B, 0xD4, 0x33, 0x5C, 0x9D, 0x7A, 0xAA, 0x29, 0x3F, 0x28, 0x12, 0x09, 0x3B, 0x82, 0x7E, 0xD5, 0xF3, 0xD4, 0xF0, 0xA2, 0x16, 0x59, 
	0xD4, 0x56, 0x36, 0x32, 0x7D, 0x36, 0xA6, 0x74, 0x28, 0x47, 0x03, 0x83, 0x66, 0xC3, 0x66, 0xF4, 0x89, 0x7A, 0xBD, 0x96, 0x44, 0xA2, 0xCB, 0xD4, 
	0xF0, 0xC9, 0xC2, 0xA5, 0x09, 0x03, 0x9F, 0x79, 0xC1, 0x96, 0xF4, 0xBE, 0x51, 0x55, 0x73, 0x75, 0xC7, 0x0E, 0xBA, 0xD6, 0x2D, 0xE1, 0x74, 0x24, 
	0x9A, 0xEF, 0xED, 0x26, 0x1E, 0x1B, 0xD3, 0x60, 0xCF, 0x76, 0xCE, 0x2C, 0x91, 0xE8, 0xC7, 0x2F, 0x3D, 0x29, 0x2A, 0xD3, 0xC7, 0xAA, 0xEB, 0xE7, 
	0x6E, 0xCD, 0x7A, 0x60, 0x62, 0xBE, 0xCD, 0x48, 0xFE, 0x9A, 0xBF, 0x49, 0xDD, 0x25, 0xBC, 0xAE, 0x6E, 0x43, 0x6F, 0xB7, 0x56, 0xC2, 0x6D, 0xD6, 
	0xA8, 0xF5, 0x03, 0xD5, 0x55, 0xDB, 0xA6, 0xA6, 0x9F, 0x1A, 0x9B, 0x9E, 0x21, 0xC3, 0x7C, 0xED, 0xA0, 0x6F, 0xD8, 0x5A, 0xDA, 0x38, 0xB1, 0xD1, 
	0x6D, 0x7E, 0xA3, 0xB3, 0xE6, 0x7E, 0xB5, 0x75, 0xFC, 0xC0, 0x8F, 0x5B, 0x5B, 0xE7, 0xA8, 0xB5, 0x65, 0x5B, 0x6F, 0xAD, 0x2D, 0x96, 0x06, 0xE7, 
	0x7F, 0x3C, 0x63, 0x74, 0x68, 0xBB, 0x33, 0xB6, 0xFD, 0x9C, 0x6A, 0x12, 0xF3, 0x66, 0x94, 0xA4, 0x2D, 0x94, 0xD9, 0xAF, 0x00, 0x4F, 0x3D, 0x34, 
	0x7C, 0x95, 0xC1, 0x0F, 0xC7, 0x9C, 0x59, 0x07, 0x9A, 0xAC, 0xC6, 0x1E, 0xBA, 0xAE, 0xF4, 0x6F, 0x5D, 0xBA, 0xB8, 0x77, 0x34, 0x0E, 0x39, 0x7E, 
	0xD3, 0x3E, 0x6F, 0x6F, 0x5A, 0xCA, 0x4B, 0x96, 0x96, 0xF7, 0xFB, 0xEC, 0xBE, 0x2F, 0xE4, 0xB4, 0xEF, 0x38, 0x3E, 0xDB, 0xE5, 0x33, 0x4B, 0x78, 
	0x07, 0x2C, 0xA5, 0x93, 0xBB, 0x14, 0x5E, 0x0E, 0xA9, 0x3B, 0x30, 0x1E, 0x77, 0x83, 0x71, 0x30, 0x5E, 0x4E, 0xC6, 0x3F, 0x1C, 0xC1, 0x38, 0x7F, 
	0x03, 0xF8, 0x01, 0x7F, 0x6C, 0x51, 0x09, 0xF8, 0xAF, 0xDE, 0x02, 0xFE, 0x5C, 0xE2, 0x0A, 0x38, 0xED, 0x7C, 0x2C, 0x07, 0xC6, 0x39, 0xAB, 0x6C, 
	0x15, 0xFA, 0xE9, 0x88, 0x0D, 0x88, 0x0D, 0xA7, 0x8E, 0x0D, 0xBF, 0x55, 0xD3, 0x3F, 0x32, 0x38, 0xB4, 0x33, 0xB6, 0x0D, 0x6A, 0x86, 0x9A, 0xCF, 
	0x53, 0xCD, 0xB9, 0x62, 0x3E, 0xE9, 0x59, 0x2F, 0x67, 0x2D, 0x9F, 0x40, 0x16, 0xC8, 0xAA, 0x0A, 0x59, 0xDD, 0x62, 0x7F, 0x45, 0x42, 0xCD, 0x50, 
	0x73, 0x19, 0xD5, 0x9C, 0x1B, 0x9B, 0xCB, 0x70, 0xD2, 0xE8, 0x16, 0x3B, 0x69, 0xEC, 0x77, 0x7A, 0xAA, 0x33, 0x16, 0x77, 0xBD, 0x7C, 0xD0, 0xAB, 
	0xC4, 0x49, 0x66, 0x6E, 0x87, 0x27, 0x68, 0x67, 0x76, 0x08, 0xB9, 0x17, 0x04, 0xA2, 0x33, 0x0A, 0x44, 0xF8, 0x2E, 0x8B, 0xDC, 0x4B, 0xA2, 0x0B, 
	0x8C, 0x6F, 0x1A, 0xC0, 0xF8, 0xE5, 0x30, 0x8E, 0xDC, 0x4B, 0xDE, 0x2E, 0xA6, 0xE6, 0x06, 0xFC, 0x97, 0x03, 0x3F, 0x72, 0x2F, 0xC8, 0xBD, 0x20, 
	0x36, 0xC4, 0x0D, 0xD5, 0x89, 0x0D, 0xC8, 0xBD, 0x40, 0xCD, 0x50, 0xF3, 0xFE, 0x5D, 0x43, 0xEE, 0x05, 0x64, 0x1D, 0x60, 0x0D, 0xB2, 0x90, 0x7B, 
	0x81, 0x9A, 0x2F, 0x46, 0xCD, 0x67, 0x91, 0x7B, 0xE9, 0x74, 0xC1, 0x1C, 0x98, 0xAB, 0x0A, 0x73, 0xED, 0x62, 0x9F, 0x0C, 0xA0, 0x66, 0xA8, 0xB9, 
	0x84, 0x6A, 0x2E, 0xC9, 0x17, 0xE7, 0x9C, 0x17, 0x08, 0x0E, 0xF7, 0x40, 0xAE, 0x32, 0xC8, 0xB5, 0x8B, 0x25, 0x9C, 0xA0, 0x66, 0xA8, 0xB9, 0x84, 
	0x6A, 0x3E, 0xA6, 0x2C, 0xE1, 0xDF, 0xBD, 0x40, 0x32, 0x74, 0x07, 0xE4, 0x80, 0xDC, 0x79, 0x22, 0xD7, 0xC6, 0x79, 0x1A, 0x6A, 0xAE, 0x8C, 0x9A, 
	0x73, 0xC5, 0x5C, 0x86, 0x17, 0x48, 0x75, 0xCA, 0x87, 0x79, 0x91, 0xA2, 0x7C, 0x18, 0x71, 0xA8, 0x0A, 0x71, 0x08, 0xA5, 0x85, 0x28, 0x1F, 0x4E, 
	0x74, 0x81, 0xF1, 0x4D, 0x03, 0x18, 0xBF, 0x1C, 0xC6, 0x4B, 0xF2, 0x31, 0x17, 0xF0, 0x03, 0xFE, 0xF2, 0xC1, 0x8F, 0xF2, 0x61, 0x94, 0x0F, 0x23, 
	0x36, 0xC4, 0x0D, 0xD5, 0x89, 0x0D, 0x28, 0x1F, 0x86, 0x9A, 0xA1, 0xE6, 0xFD, 0xBB, 0x86, 0xF2, 0x61, 0x90, 0x75, 0x80, 0x35, 0xC8, 0x42, 0xF9, 
	0x30, 0xD4, 0x7C, 0x31, 0x6A, 0x46, 0xF9, 0x30, 0x98, 0x03, 0x73, 0x09, 0x13, 0x94, 0x0F, 0x43, 0xCD, 0x50, 0x73, 0xD2, 0x07, 0xCA, 0x87, 0x81, 
	0x1C, 0x90, 0x2B, 0x11, 0x72, 0x28, 0x1F, 0x86, 0x9A, 0xAB, 0xA3, 0x66, 0x94, 0x0F, 0x03, 0x39, 0x20, 0x97, 0x30, 0x41, 0xF9, 0x30, 0xD4, 0x0C, 
	0x35, 0x27, 0x7D, 0xA0, 0x7C, 0x38, 0xDB, 0xE9, 0x7F, 0x29, 0x1F, 0xE6, 0xB7, 0x7B, 0x33, 0xDF, 0xC6, 0x47, 0xD4, 0x22, 0x91, 0xE5, 0x7F, 0xDB, 
	0xEC, 0xD5, 0x5F, 0x00, 0x71, 0x7B, 0x88, 0x43, 
};
static const CodecModInfo::File platforms0[] {
	{ file0, 848, KernelPatcher::KernelAny, KernelPatcher::KernelAny, 7},
};
static const uint8_t file1[] {
	0x78, 0x9C, 0xED, 0x5B, 0x4B, 0x73, 0xA3, 0x46, 0x10, 0x3E, 0xCB, 0xBF, 0x42, 0xD1, 0x5D, 0x66, 0x5E, 0xC0, 0x90, 0xD2, 0x6A, 0x2B, 0xB6, 0xEC, 
	0x84, 0x2A, 0xD9, 0xA6, 0x56, 0xDE, 0xA4, 0x72, 0x24, 0x68, 0x6C, 0x51, 0x2B, 0x01, 0x81, 0x61, 0x6D, 0xE7, 0xD7, 0x67, 0x24, 0xF4, 0x00, 0x04, 
	0x83, 0xC4, 0x5A, 0x2B, 0x5C, 0x85, 0x7D, 0x11, 0x4C, 0xBF, 0xA6, 0xBF, 0xEE, 0x1E, 0xE8, 0x6A, 0x06, 0x9F, 0x5F, 0x17, 0xF3, 0xEE, 0x77, 0x16, 
	0x46, 0xAE, 0xEF, 0x7D, 0xEA, 0xC1, 0x4B, 0xD0, 0xEB, 0x32, 0xCF, 0xF1, 0xA7, 0xAE, 0xF7, 0xFC, 0xA9, 0xF7, 0xF5, 0xF1, 0xB6, 0x4F, 0x7B, 0x9F, 
	0x87, 0x17, 0x83, 0x5F, 0x46, 0x0F, 0xD7, 0x8F, 0x7F, 0x5B, 0x37, 0xDD, 0x60, 0xEE, 0x46, 0xBC, 0x6B, 0x7D, 0xBD, 0x1A, 0x9B, 0xD7, 0xDD, 0x5E, 
	0x5F, 0x51, 0x7E, 0x0B, 0x82, 0x39, 0x53, 0x94, 0xD1, 0xE3, 0xA8, 0x6B, 0x8D, 0xCD, 0xC9, 0x63, 0x57, 0xC8, 0x50, 0x94, 0x9B, 0xFB, 0x5E, 0xB7, 
	0x37, 0xE3, 0x3C, 0xF8, 0x55, 0x51, 0x5E, 0x5E, 0x5E, 0x2E, 0xED, 0x25, 0xD5, 0xA5, 0xE3, 0x2F, 0x96, 0x84, 0x91, 0x62, 0x85, 0x7E, 0xC0, 0x42, 
	0xFE, 0x36, 0x16, 0xC2, 0xFA, 0x82, 0xE1, 0x72, 0xCA, 0xA7, 0x3D, 0xA1, 0x26, 0x91, 0x9E, 0x31, 0x47, 0xDC, 0x9D, 0xBA, 0x0E, 0x1F, 0x5E, 0x74, 
	0x06, 0xDF, 0xD8, 0xDB, 0x70, 0x6C, 0xBF, 0xF9, 0x31, 0x37, 0x47, 0x03, 0x65, 0x79, 0x25, 0x6E, 0xBA, 0x1E, 0x67, 0xCF, 0x2C, 0x1C, 0xEA, 0x03, 
	0x65, 0xF3, 0x73, 0x4D, 0x6A, 0xD9, 0x7C, 0x76, 0x67, 0x07, 0x5F, 0xD8, 0xD3, 0x96, 0xD8, 0x0E, 0x43, 0x7B, 0xF9, 0xA3, 0xB3, 0x91, 0xD9, 0x49, 
	0x48, 0xAF, 0xFD, 0x29, 0x73, 0x76, 0x42, 0x3B, 0x29, 0xCA, 0xCE, 0x4E, 0x05, 0xA2, 0xD8, 0x00, 0x04, 0x62, 0x35, 0xAD, 0x4A, 0xAC, 0x2B, 0x3B, 
	0xE2, 0x95, 0xB4, 0x3F, 0x46, 0x77, 0x66, 0x4A, 0xD4, 0x52, 0x95, 0x92, 0x5A, 0x65, 0xF6, 0x34, 0x98, 0xF9, 0x1E, 0x2B, 0x27, 0x31, 0xBD, 0x20, 
	0xE6, 0x51, 0x89, 0x35, 0x11, 0x0F, 0x05, 0x38, 0xC3, 0xB1, 0xEB, 0x31, 0xD3, 0x1B, 0x28, 0xEB, 0xCB, 0xCC, 0xDA, 0x9D, 0xEB, 0x64, 0x16, 0xF6, 
	0x2C, 0x34, 0x3D, 0x3E, 0x09, 0x98, 0xFD, 0x8D, 0x85, 0x39, 0x23, 0xD6, 0x72, 0x96, 0xF7, 0xEE, 0xEC, 0x57, 0x77, 0x11, 0x2F, 0xAE, 0x7C, 0x9F, 
	0x5F, 0x31, 0x16, 0xFC, 0x69, 0xCF, 0xE3, 0x94, 0xC9, 0x3B, 0xAF, 0x68, 0x24, 0xEF, 0x8E, 0xAC, 0x6F, 0x37, 0x86, 0x96, 0xEA, 0x89, 0x39, 0xFB, 
	0xDD, 0x32, 0x1F, 0x8A, 0x64, 0x43, 0x4C, 0x10, 0x22, 0x88, 0x12, 0x58, 0xAD, 0xE3, 0x21, 0xE6, 0xE5, 0x1E, 0x5D, 0x79, 0xE4, 0x87, 0x2C, 0x00, 
	0x59, 0x0B, 0x12, 0xCE, 0x89, 0xFB, 0xEC, 0xD9, 0x73, 0x11, 0xCD, 0x0E, 0x8B, 0x22, 0xE1, 0xED, 0xB4, 0x84, 0x9D, 0x92, 0x35, 0xAD, 0xFF, 0xC4, 
	0x5F, 0xEC, 0x90, 0x8D, 0x26, 0x56, 0x8A, 0x2C, 0x43, 0x97, 0x10, 0x8E, 0xA2, 0xE0, 0x36, 0xF6, 0x1C, 0x2E, 0x52, 0x00, 0xA4, 0x29, 0xB3, 0xA4, 
	0x09, 0xED, 0x86, 0xD0, 0xF4, 0x9E, 0xFC, 0x0C, 0x6D, 0x8E, 0x38, 0x23, 0xD9, 0xF4, 0x22, 0x6E, 0x7B, 0x0E, 0xCB, 0x32, 0xEC, 0xF6, 0x9C, 0xDF, 
	0x6A, 0x9E, 0xFF, 0xDE, 0x5E, 0xEC, 0xF1, 0xAE, 0xA3, 0x4D, 0x50, 0xDC, 0xFB, 0x6E, 0xC4, 0xBE, 0xB0, 0x69, 0xBC, 0x32, 0x2C, 0x1B, 0xA0, 0x79, 
	0x49, 0x3B, 0xCF, 0x99, 0xDE, 0x94, 0xBD, 0x1E, 0x61, 0x50, 0x2A, 0x02, 0xB6, 0x42, 0x2D, 0x3B, 0x14, 0x96, 0x71, 0x16, 0x1E, 0xE6, 0x0D, 0x78, 
	0xF4, 0xFE, 0xD1, 0xD1, 0x1C, 0xF8, 0x68, 0x0E, 0x52, 0xC6, 0xD1, 0x87, 0xE2, 0x8F, 0x40, 0x88, 0x21, 0x3A, 0xD4, 0x1D, 0xDC, 0x99, 0xFD, 0x63, 
	0xBF, 0x95, 0x78, 0x43, 0xD9, 0x86, 0x95, 0x22, 0x0B, 0x41, 0x78, 0x96, 0x10, 0x84, 0x3F, 0x14, 0x82, 0x37, 0xFF, 0xC6, 0xF6, 0xDC, 0xFD, 0xCF, 
	0x5E, 0x9A, 0x85, 0xD1, 0xBB, 0x84, 0x60, 0x81, 0x41, 0x67, 0x09, 0xC1, 0x5B, 0x77, 0xCE, 0xD3, 0x55, 0x3B, 0x59, 0x49, 0x9D, 0x0F, 0x45, 0xBA, 
	0x4A, 0xC2, 0xB7, 0x42, 0x5F, 0x49, 0x08, 0x1F, 0xC6, 0x95, 0x0F, 0xE3, 0xC3, 0xB8, 0xD4, 0x72, 0xAE, 0xA2, 0x88, 0x58, 0x73, 0x69, 0x12, 0x2E, 
	0x88, 0x80, 0x8E, 0x30, 0x35, 0x24, 0xEC, 0xBA, 0x84, 0x1D, 0x68, 0x80, 0x60, 0x43, 0x1C, 0xFC, 0xE5, 0xEC, 0xF4, 0xC8, 0x9D, 0xE6, 0xC2, 0xE6, 
	0xA7, 0x81, 0x25, 0xF1, 0xC0, 0xBB, 0x83, 0x45, 0x6A, 0x82, 0x85, 0xB1, 0xA1, 0x51, 0x0C, 0x24, 0xDE, 0x96, 0x82, 0x45, 0x09, 0xD1, 0x75, 0x44, 
	0xEA, 0x81, 0xD5, 0x17, 0xFC, 0xC0, 0xA0, 0x54, 0xA7, 0x7A, 0x93, 0x60, 0x2B, 0x28, 0xF6, 0x8D, 0x83, 0x4D, 0x05, 0x9A, 0x46, 0x0C, 0x2A, 0x51, 
	0x2A, 0x85, 0xCD, 0xA0, 0x10, 0x20, 0x21, 0xA3, 0x2E, 0x6C, 0x3A, 0x86, 0x86, 0x4A, 0x51, 0xA3, 0xB2, 0x4D, 0x12, 0x83, 0x8D, 0x81, 0x8D, 0x50, 
	0xAA, 0x19, 0xC0, 0x90, 0x44, 0x98, 0x1C, 0x36, 0x48, 0x74, 0x95, 0x6A, 0x12, 0x9B, 0x2B, 0x60, 0xD3, 0x10, 0xC2, 0x5A, 0x31, 0xFF, 0xB9, 0x60, 
	0x93, 0xB8, 0xB2, 0x39, 0xB0, 0x21, 0xB4, 0x2C, 0x52, 0xB4, 0x6E, 0x91, 0x54, 0x29, 0x41, 0x86, 0x66, 0xD4, 0x86, 0xCD, 0x10, 0xFF, 0x2A, 0x50, 
	0x9B, 0x04, 0x5B, 0xA1, 0x31, 0x0D, 0x83, 0x4D, 0x87, 0x06, 0xD4, 0x74, 0x2C, 0xA9, 0x72, 0xF2, 0x6C, 0xD3, 0x44, 0xBE, 0x88, 0x3A, 0x57, 0xFB, 
	0x6C, 0x43, 0x08, 0x19, 0x7A, 0xB3, 0x60, 0x93, 0xF8, 0xE2, 0xDD, 0x61, 0x93, 0xE8, 0x92, 0xC2, 0x46, 0x09, 0x86, 0x1A, 0x84, 0x92, 0x74, 0x91, 
	0xC1, 0x26, 0x70, 0x03, 0xAA, 0xA6, 0x42, 0xC9, 0xC3, 0x97, 0x1C, 0x36, 0xA2, 0x22, 0x00, 0x74, 0x50, 0x58, 0xA3, 0xCF, 0x05, 0x5B, 0xE1, 0xF3, 
	0x51, 0xC3, 0xB2, 0x0D, 0x8B, 0x64, 0xA3, 0xA2, 0xD0, 0xD5, 0x2D, 0x92, 0x06, 0xD6, 0x55, 0x48, 0x24, 0xDA, 0x3F, 0x5E, 0xB6, 0x49, 0x0E, 0x8C, 
	0xC6, 0xC0, 0xA6, 0x19, 0x06, 0xD0, 0x08, 0x91, 0x54, 0x39, 0x79, 0x91, 0x44, 0x58, 0xA4, 0x0B, 0x94, 0xEC, 0xB4, 0x02, 0x36, 0xA1, 0x9F, 0x50, 
	0xDC, 0xA8, 0x6C, 0x93, 0x54, 0x9E, 0xC6, 0xC0, 0xA6, 0x13, 0x0C, 0x80, 0x5A, 0xBF, 0x48, 0x02, 0x42, 0x55, 0x91, 0x2F, 0xB5, 0x61, 0x23, 0x1A, 
	0x44, 0x48, 0x2B, 0x84, 0xFD, 0x6C, 0xAF, 0xDB, 0x3F, 0xB3, 0x39, 0x52, 0xFB, 0xC5, 0x0D, 0x8B, 0x70, 0x27, 0xC5, 0x65, 0xEA, 0x90, 0x2A, 0xA9, 
	0x21, 0x2C, 0x64, 0xD4, 0x7F, 0x71, 0x3B, 0xE9, 0xA3, 0xA4, 0xE4, 0xCC, 0x6D, 0x7B, 0x5A, 0x4D, 0xEB, 0x69, 0xD5, 0x03, 0xAB, 0xED, 0x69, 0x55, 
	0xD7, 0xC6, 0x93, 0xF6, 0xB4, 0xEA, 0xC1, 0xD6, 0xF6, 0xB4, 0xAA, 0x4B, 0xE3, 0x49, 0x7B, 0x5A, 0xF5, 0x60, 0x6B, 0x7B, 0x5A, 0xD5, 0xB0, 0x9D, 
	0xB4, 0xA7, 0x55, 0x0F, 0xB6, 0xB6, 0xA7, 0xF5, 0x21, 0x1F, 0x44, 0xDA, 0x9E, 0xD6, 0x99, 0xDF, 0xB2, 0xEB, 0xC1, 0xD6, 0xF6, 0xB4, 0x2A, 0x61, 
	0x3B, 0x6D, 0x4F, 0xAB, 0x1E, 0x6C, 0x6D, 0x4F, 0xEB, 0x43, 0x66, 0x5B, 0xDB, 0xD3, 0xAA, 0x86, 0xED, 0xA4, 0x3D, 0xAD, 0x7A, 0xB0, 0xB5, 0x3D, 
	0xAD, 0x6A, 0xD8, 0x4E, 0xDA, 0xD3, 0xAA, 0xF9, 0xBA, 0xDD, 0xF6, 0xB4, 0xDE, 0xF5, 0x51, 0x32, 0x3D, 0x97, 0x5B, 0xB0, 0xBE, 0xD2, 0x56, 0x31, 
	0xC5, 0x97, 0x12, 0xB6, 0x5C, 0x5B, 0x4D, 0x0E, 0x5B, 0x7E, 0xC8, 0x41, 0xCE, 0xC8, 0x7C, 0x84, 0x24, 0xB2, 0x05, 0x61, 0xC9, 0x24, 0x5E, 0x55, 
	0xC3, 0x67, 0xC3, 0xFE, 0x97, 0x3B, 0xE5, 0xB3, 0x52, 0xDE, 0xC2, 0x30, 0x5B, 0xF1, 0x4E, 0xFC, 0x38, 0x74, 0x98, 0x64, 0x14, 0xF0, 0x10, 0x03, 
	0x12, 0x21, 0xC9, 0x2E, 0xF6, 0x67, 0xF7, 0xE4, 0x12, 0xF6, 0xB0, 0xC8, 0xB8, 0x6F, 0x6F, 0x30, 0xAF, 0xB6, 0xFB, 0xCA, 0x5D, 0xF0, 0x61, 0xDC, 
	0x57, 0x38, 0x8C, 0x99, 0x0B, 0xD5, 0xEC, 0x0C, 0x69, 0xFA, 0x2A, 0x7D, 0x91, 0x9E, 0xDB, 0xCE, 0x8D, 0x70, 0x3F, 0xC4, 0xBC, 0x7A, 0xE8, 0x3D, 
	0x35, 0x3B, 0x5F, 0x34, 0xF7, 0x6E, 0xA6, 0xC6, 0xDA, 0x8B, 0xD6, 0xB7, 0x63, 0xE2, 0x45, 0x8B, 0x13, 0x6B, 0x64, 0xDE, 0x96, 0xAE, 0x26, 0x33, 
	0xFD, 0xB2, 0x99, 0xFA, 0xF5, 0xE7, 0x06, 0x99, 0xAF, 0x08, 0x36, 0x6E, 0xCB, 0x1D, 0xBE, 0x89, 0xF7, 0xB7, 0xFA, 0xB6, 0xE4, 0xDB, 0xB1, 0xDC, 
	0xAD, 0x73, 0xB6, 0x5A, 0x36, 0x77, 0x06, 0xCA, 0xEA, 0x1B, 0x89, 0xE1, 0xC5, 0xFF, 0xE0, 0x65, 0x46, 0x2F, 
};
static const CodecModInfo::File layouts0[] {
	{ file1, 1194, KernelPatcher::KernelAny, KernelPatcher::KernelAny, 7 },
};
static const uint8_t patchBuf0[] { 0x41, 0xC6, 0x06, 0x00, 0x49, 0x8B, 0xBC, 0x24, };
static const uint8_t patchBuf1[] { 0x41, 0xC6, 0x06, 0x01, 0x49, 0x8B, 0xBC, 0x24, };
static const uint8_t patchBuf2[] { 0x41, 0xC6, 0x06, 0x00, 0x48, 0x8B, 0xBB, 0x68, };
static const uint8_t patchBuf3[] { 0x41, 0xC6, 0x06, 0x01, 0x48, 0x8B, 0xBB, 0x68, };
static const uint8_t patchBuf4[] { 0x41, 0xC6, 0x86, 0x43, 0x01, 0x00, 0x00, 0x00, };
static const uint8_t patchBuf5[] { 0x41, 0xC6, 0x86, 0x43, 0x01, 0x00, 0x00, 0x01, };
static const uint8_t patchBuf6[] { 0x8B, 0x19, 0xD4, 0x11, };
static const uint8_t patchBuf7[] { 0x87, 0x08, 0xEC, 0x10, };
static const uint8_t patchBuf8[] { 0x83, 0x19, 0xD4, 0x11, };
static const uint8_t patchBuf9[] { 0x00, 0x00, 0x00, 0x00, };
static const KextPatch patches0[] {
	{ { &kextList[2], patchBuf0, patchBuf1, 8, 1 }, 13, 13 },
	{ { &kextList[2], patchBuf2, patchBuf3, 8, 1 }, 14, KernelPatcher::KernelAny },
	{ { &kextList[2], patchBuf4, patchBuf5, 8, 1 }, 13, KernelPatcher::KernelAny },
	{ { &kextList[2], patchBuf6, patchBuf7, 4, 2 }, 13, KernelPatcher::KernelAny },
	{ { &kextList[2], patchBuf8, patchBuf9, 4, 2 }, 13, KernelPatcher::KernelAny },
};
CodecModInfo codecModRealtek[] {
	{ "ALC887", 0x887, revisions0, 1, platforms0, 1, layouts0, 1, patches0, 5 },
};

// Intel CodecMod section

CodecModInfo codecModIntel[] {
};

// CirrusLogic CodecMod section

CodecModInfo codecModCirrusLogic[] {
};

// AnalogDevices CodecMod section

CodecModInfo codecModAnalogDevices[] {
};

// Conexant CodecMod section

CodecModInfo codecModConexant[] {
};

// VIA CodecMod section

CodecModInfo codecModVIA[] {
};

// IDT CodecMod section

CodecModInfo codecModIDT[] {
};

// Vendor section

VendorModInfo vendorMod[] {
	{ "Creative", 0x1102, codecModCreative, 0 },
	{ "AMD", 0x1002, codecModAMD, 0 },
	{ "NVIDIA", 0x10DE, codecModNVIDIA, 0 },
	{ "Realtek", 0x10EC, codecModRealtek, 1 },
	{ "Intel", 0x8086, codecModIntel, 0 },
	{ "CirrusLogic", 0x1013, codecModCirrusLogic, 0 },
	{ "AnalogDevices", 0x11D4, codecModAnalogDevices, 0 },
	{ "Conexant", 0x14F1, codecModConexant, 0 },
	{ "VIA", 0x1106, codecModVIA, 0 },
	{ "IDT", 0x111D, codecModIDT, 0 },
};

const size_t vendorModSize {10};

// ControllerMod section

static const uint8_t patchBuf10[] { 0x20, 0x8C, };
static const uint8_t patchBuf11[] { 0xA0, 0x8C, };
static const KextPatch patches1[] {
	{ { &kextList[0], patchBuf10, patchBuf11, 2, 4 }, 13, KernelPatcher::KernelAny },
};
static const uint8_t patchBuf12[] { 0x0C, 0x0A, 0x00, 0x00, };
static const uint8_t patchBuf13[] { 0x0C, 0x0C, 0x00, 0x00, };
static const uint8_t patchBuf14[] { 0x0B, 0x0C, 0x00, 0x00, };
static const uint8_t patchBuf15[] { 0x0C, 0x0C, 0x00, 0x00, };
static const uint8_t patchBuf16[] { 0x3D, 0x0C, 0x0A, 0x00, 0x00, };
static const uint8_t patchBuf17[] { 0x3D, 0x0C, 0x0C, 0x00, 0x00, };
static const uint8_t patchBuf18[] { 0x3D, 0x0B, 0x0C, 0x00, 0x00, };
static const uint8_t patchBuf19[] { 0x3D, 0x0C, 0x0C, 0x00, 0x00, };
static const uint8_t patchBuf20[] { 0x3D, 0x0C, 0x0A, 0x00, 0x00, };
static const uint8_t patchBuf21[] { 0x3D, 0x0C, 0x0C, 0x00, 0x00, };
static const KextPatch patches2[] {
	{ { &kextList[0], patchBuf12, patchBuf13, 4, 4 }, 13, 13 },
	{ { &kextList[0], patchBuf14, patchBuf15, 4, 2 }, 13, 13 },
	{ { &kextList[0], patchBuf16, patchBuf17, 5, 3 }, 14, 14 },
	{ { &kextList[0], patchBuf18, patchBuf19, 5, 1 }, 14, 14 },
	{ { &kextList[0], patchBuf20, patchBuf21, 5, 5 }, 15, KernelPatcher::KernelAny },
};
static const uint8_t patchBuf22[] { 0x20, 0x8C, };
static const uint8_t patchBuf23[] { 0x20, 0x8D, };
static const KextPatch patches3[] {
	{ { &kextList[0], patchBuf22, patchBuf23, 2, 4 }, 13, KernelPatcher::KernelAny },
};
static const uint8_t patchBuf24[] { 0x01, 0x05, 0x09, 0x00, 0x00, 0x04, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x02, 0x04, 0x0A, 0x00, 0x00, 0x04, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x03, 0x06, 0x08, 0x00, 0x00, 0x04, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, };
static const uint8_t patchBuf25[] { 0x01, 0x05, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x02, 0x04, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x03, 0x06, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, };
static const KextPatch patches4[] {
	{ { &kextList[1], patchBuf24, patchBuf25, 36, 1 }, 14, KernelPatcher::KernelAny },
};
static const uint8_t patchBuf26[] { 0x02, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x04, 0x00, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, };
static const uint8_t patchBuf27[] { 0x02, 0x05, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x07, 0x04, 0x00, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, };
static const KextPatch patches5[] {
	{ { &kextList[3], patchBuf26, patchBuf27, 36, 1 }, 13, KernelPatcher::KernelAny },
};
static const uint8_t patchBuf28[] { 0x02, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00, };
static const uint8_t patchBuf29[] { 0x02, 0x05, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00, };
static const KextPatch patches6[] {
	{ { &kextList[3], patchBuf28, patchBuf29, 24, 4 }, 13, KernelPatcher::KernelAny },
};
static const uint8_t patchBuf30[] { 0x02, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00, };
static const uint8_t patchBuf31[] { 0x02, 0x05, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00, };
static const KextPatch patches7[] {
	{ { &kextList[3], patchBuf30, patchBuf31, 24, 4 }, 13, KernelPatcher::KernelAny },
};
ControllerModInfo controllerMod[] {
	{ "Z97 HDEF controller", 0x8086, 0x8CA0, nullptr, 0, ControllerModInfo::PlatformAny, IOUtil::ComputerModel::ComputerAny, patches1, 1 },
	{ "HD4600 controller", 0x8086, 0xC0C, nullptr, 0, ControllerModInfo::PlatformAny, IOUtil::ComputerModel::ComputerAny, patches2, 5 },
	{ "X99 HDEF controller", 0x8086, 0x8D20, nullptr, 0, ControllerModInfo::PlatformAny, IOUtil::ComputerModel::ComputerAny, patches3, 1 },
	{ "Intel HD4600 HDMI (ig-platform-id 0x0d220003)", 0x8086, 0x412, nullptr, 0, 220332035, IOUtil::ComputerModel::ComputerDesktop, patches4, 1 },
	{ "Intel HD4000 HDMI (ig-platform-id 0x01660003)", 0x8086, 0x166, nullptr, 0, 23461891, IOUtil::ComputerModel::ComputerLaptop, patches5, 1 },
	{ "Intel HD4000 HDMI (ig-platform-id 0x01660009)", 0x8086, 0x166, nullptr, 0, 23461897, IOUtil::ComputerModel::ComputerLaptop, patches6, 1 },
	{ "Intel HD4000 HDMI (ig-platform-id 0x0166000A) Desktop only", 0x8086, 0x166, nullptr, 0, 23461898, IOUtil::ComputerModel::ComputerDesktop, patches7, 1 },
};

const size_t controllerModSize {7};
