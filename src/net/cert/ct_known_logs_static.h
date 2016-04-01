// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is generated by print_log_list.py
#ifndef NET_CERT_CT_KNOWN_LOGS_STATIC_H_
#define NET_CERT_CT_KNOWN_LOGS_STATIC_H_

#include <stddef.h>

struct CTLogInfo {
  const char* const log_key;
  const size_t log_key_length;
  const char* const log_name;
  const char* const log_url;
};

const CTLogInfo kCTLogList[] = {
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x7d\xa8\x4b\x12\x29\x80\xa3"
     "\x3d\xad\xd3\x5a\x77\xb8\xcc\xe2\x88\xb3\xa5\xfd\xf1\xd3\x0c\xcd\x18"
     "\x0c\xe8\x41\x46\xe8\x81\x01\x1b\x15\xe1\x4b\xf1\x1b\x62\xdd\x36\x0a"
     "\x08\x18\xba\xed\x0b\x35\x84\xd0\x9e\x40\x3c\x2d\x9e\x9b\x82\x65\xbd"
     "\x1f\x04\x10\x41\x4c\xa0",
     91,
     "Google 'Pilot' log",
     "https://ct.googleapis.com/pilot/"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\xd7\xf4\xcc\x69\xb2\xe4\x0e"
     "\x90\xa3\x8a\xea\x5a\x70\x09\x4f\xef\x13\x62\xd0\x8d\x49\x60\xff\x1b"
     "\x40\x50\x07\x0c\x6d\x71\x86\xda\x25\x49\x8d\x65\xe1\x08\x0d\x47\x34"
     "\x6b\xbd\x27\xbc\x96\x21\x3e\x34\xf5\x87\x76\x31\xb1\x7f\x1d\xc9\x85"
     "\x3b\x0d\xf7\x1f\x3f\xe9",
     91,
     "Google 'Aviator' log",
     "https://ct.googleapis.com/aviator/"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x02\x46\xc5\xbe\x1b\xbb\x82"
     "\x40\x16\xe8\xc1\xd2\xac\x19\x69\x13\x59\xf8\xf8\x70\x85\x46\x40\xb9"
     "\x38\xb0\x23\x82\xa8\x64\x4c\x7f\xbf\xbb\x34\x9f\x4a\x5f\x28\x8a\xcf"
     "\x19\xc4\x00\xf6\x36\x06\x93\x65\xed\x4c\xf5\xa9\x21\x62\x5a\xd8\x91"
     "\xeb\x38\x24\x40\xac\xe8",
     91,
     "DigiCert Log Server",
     "https://ct1.digicert-ct.com/log/"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x20\x5b\x18\xc8\x3c\xc1\x8b"
     "\xb3\x31\x08\x00\xbf\xa0\x90\x57\x2b\xb7\x47\x8c\x6f\xb5\x68\xb0\x8e"
     "\x90\x78\xe9\xa0\x73\xea\x4f\x28\x21\x2e\x9c\xc0\xf4\x16\x1b\xaa\xf9"
     "\xd5\xd7\xa9\x80\xc3\x4e\x2f\x52\x3c\x98\x01\x25\x46\x24\x25\x28\x23"
     "\x77\x2d\x05\xc2\x40\x7a",
     91,
     "Google 'Rocketeer' log",
     "https://ct.googleapis.com/rocketeer/"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x0b\x23\xcb\x85\x62\x98\x61"
     "\x48\x04\x73\xeb\x54\x5d\xf3\xd0\x07\x8c\x2d\x19\x2d\x8c\x36\xf5\xeb"
     "\x8f\x01\x42\x0a\x7c\x98\x26\x27\xc1\xb5\xdd\x92\x93\xb0\xae\xf8\x9b"
     "\x3d\x0c\xd8\x4c\x4e\x1d\xf9\x15\xfb\x47\x68\x7b\xba\x66\xb7\x25\x9c"
     "\xd0\x4a\xc2\x66\xdb\x48",
     91,
     "Certly.IO log",
     "https://log.certly.io/"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x27\x64\x39\x0c\x2d\xdc\x50"
     "\x18\xf8\x21\x00\xa2\x0e\xed\x2c\xea\x3e\x75\xba\x9f\x93\x64\x09\x00"
     "\x11\xc4\x11\x17\xab\x5c\xcf\x0f\x74\xac\xb5\x97\x90\x93\x00\x5b\xb8"
     "\xeb\xf7\x27\x3d\xd9\xb2\x0a\x81\x5f\x2f\x0d\x75\x38\x94\x37\x99\x1e"
     "\xf6\x07\x76\xe0\xee\xbe",
     91,
     "Izenpe log",
     "https://ct.izenpe.com/"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x96\xea\xac\x1c\x46\x0c\x1b"
     "\x55\xdc\x0d\xfc\xb5\x94\x27\x46\x57\x42\x70\x3a\x69\x18\xe2\xbf\x3b"
     "\xc4\xdb\xab\xa0\xf4\xb6\x6c\xc0\x53\x3f\x4d\x42\x10\x33\xf0\x58\x97"
     "\x8f\x6b\xbe\x72\xf4\x2a\xec\x1c\x42\xaa\x03\x2f\x1a\x7e\x28\x35\x76"
     "\x99\x08\x3d\x21\x14\x86",
     91,
     "Symantec log",
     "https://ct.ws.symantec.com/"},
    {"\x30\x82\x01\x22\x30\x0d\x06\x09\x2a\x86\x48\x86\xf7\x0d\x01\x01\x01"
     "\x05\x00\x03\x82\x01\x0f\x00\x30\x82\x01\x0a\x02\x82\x01\x01\x00\xa2"
     "\x5a\x48\x1f\x17\x52\x95\x35\xcb\xa3\x5b\x3a\x1f\x53\x82\x76\x94\xa3"
     "\xff\x80\xf2\x1c\x37\x3c\xc0\xb1\xbd\xc1\x59\x8b\xab\x2d\x65\x93\xd7"
     "\xf3\xe0\x04\xd5\x9a\x6f\xbf\xd6\x23\x76\x36\x4f\x23\x99\xcb\x54\x28"
     "\xad\x8c\x15\x4b\x65\x59\x76\x41\x4a\x9c\xa6\xf7\xb3\x3b\x7e\xb1\xa5"
     "\x49\xa4\x17\x51\x6c\x80\xdc\x2a\x90\x50\x4b\x88\x24\xe9\xa5\x12\x32"
     "\x93\x04\x48\x90\x02\xfa\x5f\x0e\x30\x87\x8e\x55\x76\x05\xee\x2a\x4c"
     "\xce\xa3\x6a\x69\x09\x6e\x25\xad\x82\x76\x0f\x84\x92\xfa\x38\xd6\x86"
     "\x4e\x24\x8f\x9b\xb0\x72\xcb\x9e\xe2\x6b\x3f\xe1\x6d\xc9\x25\x75\x23"
     "\x88\xa1\x18\x58\x06\x23\x33\x78\xda\x00\xd0\x38\x91\x67\xd2\xa6\x7d"
     "\x27\x97\x67\x5a\xc1\xf3\x2f\x17\xe6\xea\xd2\x5b\xe8\x81\xcd\xfd\x92"
     "\x68\xe7\xf3\x06\xf0\xe9\x72\x84\xee\x01\xa5\xb1\xd8\x33\xda\xce\x83"
     "\xa5\xdb\xc7\xcf\xd6\x16\x7e\x90\x75\x18\xbf\x16\xdc\x32\x3b\x6d\x8d"
     "\xab\x82\x17\x1f\x89\x20\x8d\x1d\x9a\xe6\x4d\x23\x08\xdf\x78\x6f\xc6"
     "\x05\xbf\x5f\xae\x94\x97\xdb\x5f\x64\xd4\xee\x16\x8b\xa3\x84\x6c\x71"
     "\x2b\xf1\xab\x7f\x5d\x0d\x32\xee\x04\xe2\x90\xec\x41\x9f\xfb\x39\xc1"
     "\x02\x03\x01\x00\x01",
     294,
     "Venafi log",
     "https://ctlog.api.venafi.com/"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\xea\x95\x9e\x02\xff\xee\xf1"
     "\x33\x6d\x4b\x87\xbc\xcd\xfd\x19\x17\x62\xff\x94\xd3\xd0\x59\x07\x3f"
     "\x02\x2d\x1c\x90\xfe\xc8\x47\x30\x3b\xf1\xdd\x0d\xb8\x11\x0c\x5d\x1d"
     "\x86\xdd\xab\xd3\x2b\x46\x66\xfb\x6e\x65\xb7\x3b\xfd\x59\x68\xac\xdf"
     "\xa6\xf8\xce\xd2\x18\x4d",
     91,
     "Symantec 'Vega' log",
     "https://vega.ws.symantec.com/"}};

const size_t kNumKnownCTLogs = 9;

// The list is sorted.
const char kGoogleLogIDs[][33] = {
    "\x68\xf6\x98\xf8\x1f\x64\x82\xbe\x3a\x8c\xee\xb9\x28\x1d\x4c\xfc\x71"
    "\x51\x5d\x67\x93\xd4\x44\xd1\x0a\x67\xac\xbb\x4f\x4f\xfb\xc4",
    "\xa4\xb9\x09\x90\xb4\x18\x58\x14\x87\xbb\x13\xa2\xcc\x67\x70\x0a\x3c"
    "\x35\x98\x04\xf9\x1b\xdf\xb8\xe3\x77\xcd\x0e\xc8\x0d\xdc\x10",
    "\xee\x4b\xbd\xb7\x75\xce\x60\xba\xe1\x42\x69\x1f\xab\xe1\x9e\x66\xa3"
    "\x0f\x7e\x5f\xb0\x72\xd8\x83\x00\xc4\x7b\x89\x7a\xa8\xfd\xcb"};

const size_t kNumGoogleLogs = 3;

#endif  // NET_CERT_CT_KNOWN_LOGS_STATIC_H_
