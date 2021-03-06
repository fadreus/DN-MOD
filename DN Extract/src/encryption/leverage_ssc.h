/*
Leverage ssc functions 0.1a
by Luigi Auriemma
e-mail: aluigi@autistici.org
web:    aluigi.org

    Copyright 2009 Luigi Auriemma

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

    http://www.gnu.org/licenses/gpl-2.0.txt
*/

static unsigned char SSC_MASTER_TABLE[] =
    "\xf5\xc5\x91\x4b\x27\x23\x5d\xc0\xdc\x27\x42\x00\xdd\xd1\x87\xc3"
    "\x2f\xe0\x2a\xed\x5f\xc5\xc0\x79\x51\x8f\x49\x20\x8e\x4c\x55\x48"
    "\xaa\xef\x31\x3c\x5d\x2e\x7c\x91\xdc\x58\x0d\x3c\xd9\xe1\xae\xc5"
    "\x77\x59\x53\x25\xd3\xc5\xc8\x4b\x44\xa0\x20\x80\x2b\xec\xb1\x7e"
    "\x7d\x6b\x6b\x87\xe8\xa4\xeb\xc8\xe4\xca\xfb\xaf\x57\x20\xf9\x60"
    "\x08\x18\xb3\x34\xad\x26\x95\xba\x0f\x19\xe1\xfb\xd4\x8d\x01\x39"
    "\xf0\x5e\x90\x59\xe9\x8a\x15\xc7\x9e\xba\xbb\x4f\x3a\xa8\x03\x9d"
    "\x87\x20\xae\xf2\xbf\x1b\x46\x93\xa6\x7a\x20\xa1\x14\xb8\x50\x5b"
    "\x69\x3c\xf5\xb2\x4a\x23\x65\x03\x58\x2e\xcd\xb8\x10\x9a\x7d\x89"
    "\xa8\xd9\x0d\x66\x0b\x96\x43\x5b\x46\x56\xec\xec\x3f\xff\x20\x86"
    "\xe9\x4c\x54\x98\x88\x43\xd2\xaa\x55\xad\xef\xb2\xd4\x7f\xc8\x04"
    "\xc0\x02\x4a\x78\x97\xe9\x93\xb2\x32\x6e\x89\x90\xe4\x25\xf7\xc8"
    "\x38\xae\xf5\x5f\x20\x02\xf2\x2d\x84\x47\x9f\x43\x84\x9d\xe2\x60"
    "\xa8\xa2\xde\x6a\x7d\xe0\x92\x25\xc2\x75\xa1\x72\x72\x9e\x65\xbe"
    "\x68\x71\x82\xbd\xe6\x8c\xb1\x7b\x3f\xd7\x7b\xf5\x13\xc8\x04\x5f"
    "\x0b\x66\x96\xd3\xa5\x01\xb2\x55\xdb\x06\x32\xe3\x6c\x0e\x78\x06"
    "\xc5\xc1\x93\xb5\xb9\xa9\xc6\x21\xf0\xac\x9a\x0e\xe7\x21\x96\xed"
    "\xbb\x33\x6e\x74\x31\xb7\x5e\xba\x95\xd0\x21\x91\x04\x8a\xb7\xc3"
    "\x87\x45\x78\x21\x8d\x79\xa2\x62\x3e\x30\x81\x84\xfd\xac\x98\xa1"
    "\x56\x8c\x09\xb8\x90\x7d\x84\x11\xe2\x9c\x53\x82\x3a\x3a\x68\xbc"
    "\xc7\x85\x54\x7e\xbb\x29\x40\x18\x22\xda\x7f\xa5\x9c\x6f\xc4\x12"
    "\xcf\x2a\x92\x01\xf3\x13\x36\xbc\xdf\xfe\x78\x50\x10\x58\xb1\xd7"
    "\x81\x4e\x92\x0c\xee\xe7\xac\xa8\xfa\x79\x8f\x10\xf0\xa8\xba\x19"
    "\xa1\xde\xae\x86\x4e\x1c\x77\xf9\x74\x88\x0e\x55\x71\xa4\x38\x0b"
    "\x52\xd3\x35\x7e\xc8\xcb\xf8\xff\x6f\xf7\xe8\xf3\xfa\x62\x23\xf9"
    "\x23\xe4\xa7\xbb\x19\x18\x05\x4b\xcd\x2a\x11\x5e\x46\x63\x07\xf3"
    "\x9d\x96\x4c\x05\x19\x83\xf8\xb2\xe5\xdb\x0b\x39\x33\x2e\xc0\x8c"
    "\x94\xd9\xb3\x6a\x45\x94\xab\x5e\x86\x8b\xc8\x88\xe4\x58\x66\x87"
    "\xb6\xe6\x2b\x2b\xb0\x6a\xd0\x90\x35\x44\xe3\x79\xd7\x44\x89\x6f"
    "\x95\x34\x6a\x02\x38\xb2\xb7\x2c\x6d\x38\xed\x1b\xf0\x11\x18\x5b"
    "\xad\x19\x10\x81\x2c\xfe\x2c\x5b\x38\xdb\x10\x43\x30\x88\xf2\xe5"
    "\xa3\x74\x6e\x73\x02\x46\x7d\x35\xe8\xf0\x77\x22\xfa\xd1\xf7\xd4"
    "\x28\x3f\xbe\xa2\x3f\xa6\xf5\x0f\x71\x04\x91\xb1\xf0\xa8\xdd\x3a"
    "\x18\x79\x39\xe7\xf3\x44\xde\x57\xc2\x56\xff\xb0\x63\x79\x1f\xc5"
    "\x56\xd3\x79\x15\x70\xa8\x73\x53\x7c\x3f\x05\xf8\xca\x08\xaa\x1e"
    "\xb2\xe3\xf6\x41\xe0\xfb\x46\xfd\xe7\x39\x4f\x8f\xb4\xc2\x16\xd7"
    "\x55\xc0\x20\xb4\x05\xa2\x1b\x8e\x43\x40\x13\x6f\xc9\x58\x38\x00"
    "\xaf\xd8\x7a\x67\x7d\x3d\x9b\x6b\x95\x58\x5b\xa5\x02\xd6\xdb\x2d"
    "\xec\x50\x4f\x25\xb6\x12\x34\x0e\x29\xbe\x64\x70\x06\x82\xf4\xf0"
    "\x12\x90\x8e\x26\x72\x91\x6b\xa8\x3d\x35\xde\xb5\x8d\x82\x6d\x83"
    "\xd7\x5a\x61\xf7\x26\x87\x67\x47\xd7\x8d\xf1\x0a\x31\xf6\xac\xb3"
    "\x6c\xb6\x4d\xec\x47\xb7\xda\x11\xc7\xe7\x17\x7d\xcc\x09\x79\x65"
    "\xa5\x00\x65\xe8\xe5\xf9\x17\x32\xe2\x06\x47\x60\x4c\x00\xc0\xfa"
    "\x45\x1f\x7e\xe1\x40\xd9\x35\x15\xb7\xb5\xe6\xf9\xe0\xc9\x2a\xd0"
    "\x29\x64\x8a\xb1\xe0\xea\x36\x3c\x5a\x19\xd1\x28\x32\xc5\x4c\x0a"
    "\xe6\x7b\xaa\x7e\x02\x92\x17\xed\xe5\xf9\x7c\xd0\x7e\xbf\x3a\xaf"
    "\x14\xc0\x20\xf4\x64\x6e\x37\x92\xe2\x47\x24\x09\x29\x98\x68\xb9"
    "\xee\x1c\xe7\xa6\x9a\x30\x20\x32\x18\x28\x95\x23\xd8\x48\xa2\xee"
    "\x42\xb9\x6e\xdf\x05\xf2\x41\x82\x49\x1d\xfb\x04\x8c\x17\xf8\x15"
    "\xaa\x89\x83\xd9\xab\x72\x72\x3d\xef\xbe\x97\x50\xcd\x69\x4b\xc1"
    "\x31\x8c\x92\x86\x2e\xd7\xb7\xab\x1e\x37\x47\x2b\x98\x6a\x7f\x47"
    "\x45\x22\x4f\xd7\x23\xe4\xe6\xef\x53\xff\x6d\x5f\x51\xf1\xb8\xcd"
    "\x34\xb3\x2b\x9a\xc9\x29\x68\xe5\xec\x8b\x63\x1a\xa7\x50\xe7\xce"
    "\xc5\x1e\x7f\xdd\xca\x5d\xa1\xcd\xc8\x36\xc0\x24\x3a\xb2\xa2\xf8"
    "\x6d\x07\x24\x79\xc1\x17\x73\x8f\xaf\xba\x4d\x72\xdb\x6f\xee\x13"
    "\x27\x4d\x65\x2a\x7c\x76\xff\x96\x2c\x13\x89\xb3\x2f\x95\xf3\xc0"
    "\x04\xd1\x78\xb7\x16\x46\xfe\x08\x45\x07\xe7\xdd\x4b\x4d\xb9\x84"
    "\x05\xcb\x72\x39\x9f\x78\xf9\x89\xc1\x88\xfb\x2e\xd6\xe1\x8e\x5a"
    "\xa4\x17\xad\xae\x50\x4d\x33\xad\x84\x14\xf9\xe3\xa6\xe4\x66\x83"
    "\x70\x62\xe8\xea\x91\x66\x4f\x63\x13\x45\x39\x67\x9b\x11\x9d\x6b"
    "\x39\x18\xf8\x33\xce\xdd\xc2\x49\x93\x3b\x0a\xe8\x3e\x09\x65\xb3"
    "\x8f\xb8\x6d\x3d\xa0\x26\x22\xd0\x2f\x57\xc7\x28\x2e\x5f\x0c\xdb"
    "\x18\xf7\x1e\x74\x50\xc5\x38\xdd\xca\x55\x58\x85\x75\xf8\x07\x54"
    "\xdd\x0c\x89\x84\x0b\xcf\x7e\x24\x6e\x8f\x04\x13\x09\x06\x9f\x15"
    "\xa4\x9c\x27\xfa\x0a\x59\x13\xc7\x2b\xe8\x81\xae\x27\xff\x6b\x03"
    "\x32\x70\x1d\x96\xdc\x29\x55\x76\xd2\xa9\xbc\x0f\xd2\x66\xf5\x60"
    "\x4d\xa6\x47\xf7\x8d\x1c\x2c\xed\x95\xc4\xcf\x8a\x92\x9c\x55\xbf"
    "\x52\x41\x98\x89\x8b\x44\x4c\x67\x04\x0d\x7c\x7d\xeb\xcc\x3c\xc9"
    "\x7c\xab\x1a\x8f\xe1\x90\xf4\xdb\x09\x7b\xea\xcc\xea\x9a\x34\xe3"
    "\x83\x80\xb4\x3b\xd2\xb2\xbf\x98\xf4\x71\xc0\x28\x94\xaa\xaf\x39"
    "\x44\x68\x09\x88\x49\x7a\xa7\x4d\x29\x32\x38\xd5\x03\xa4\xdf\x19"
    "\xd9\x0a\xf2\x04\xfd\xcb\xb1\x87\x51\x70\xa9\x6b\x7f\x3e\x28\x8c"
    "\x0f\x24\xe1\xc8\xb9\xce\x4f\x77\xf2\xb0\x39\x44\xc2\xab\xba\xcb"
    "\xa6\x93\x31\xa2\x44\x92\x3c\x38\xf7\x31\xf3\x68\xd1\x0e\xca\x82"
    "\xdd\x50\x3b\xde\xce\x01\x60\x64\xc6\x8c\xb3\x8a\x4e\x34\x08\x71"
    "\x29\x59\xcb\x52\x16\xdc\x42\xbf\x53\x65\xeb\x78\x9c\x48\x4b\xcc"
    "\x58\x13\xa1\xf1\x68\x0f\xc5\x60\x6e\x8d\xa0\x6b\xd5\xa6\x8a\x73"
    "\xbd\x59\x3f\xcd\x4a\xeb\x9a\xca\x06\xbb\x25\x8f\x84\xa3\x8d\xd0"
    "\xd4\xc6\xc0\xc3\x55\xc4\xd5\xe0\xe1\xa9\x7a\xba\xa1\x18\x69\xf2"
    "\x62\x85\xa9\x9d\xb4\xdf\xb8\xea\xb0\xb0\xf5\x3e\x80\xd2\x48\x6b"
    "\x9a\x6c\xc6\x3a\xff\xac\x0b\x83\x0b\x12\x43\x4d\xdb\xc1\xc4\xef"
    "\x3e\xe4\x6a\xf6\x7f\xcc\x71\x1b\x88\xa3\x52\xd2\xb3\x24\xc0\xac"
    "\xfb\x35\xbf\xbe\x74\x86\x5a\xfd\x7f\x32\x93\xa9\x44\xcd\x9f\x69"
    "\x23\x0a\x20\x6c\x51\x12\xed\x98\x58\x49\x7d\xdc\x11\x8c\x03\x38"
    "\x63\xf1\xa9\x74\xb0\x33\xa2\x25\xc7\x4e\x83\xc9\xd1\xbe\xc1\xa3"
    "\xe6\xa7\xb2\xb7\xdd\xab\x58\xae\xc4\x0f\xe4\xbe\xd9\xe2\xfd\x1b"
    "\xea\xde\xd6\x08\xc6\x95\xda\xfa\xf4\xd6\x83\xfd\xf3\xb9\x17\x5d"
    "\x12\x83\xd7\xd9\x9b\x47\xc4\x02\x09\xa5\x55\xc3\x17\xe2\x9b\xad"
    "\x57\x4a\xc4\x9e\x78\xae\x91\x89\x6b\x52\x7d\x27\xf0\x4d\x89\xb1"
    "\x0d\x5f\x75\x4b\x95\x3d\x12\x18\xbf\x01\xfc\x06\x08\x6c\x03\x1f"
    "\xf3\x34\xea\xb6\x92\xe9\xc6\xfb\x22\x1a\xc0\xf3\x02\x72\x83\xac"
    "\x53\x50\xd8\x60\xf2\xd6\x12\x5d\x31\xed\xf4\xb7\xac\x80\x6f\x21"
    "\xab\xeb\x04\xf8\x42\x30\xe8\xc1\x74\x55\xe5\x4a\x27\xd6\x86\x2c"
    "\xfb\x32\x79\x37\x0e\xae\x1c\xdb\x1f\x84\xc1\x02\x09\xe8\x92\x41"
    "\x18\x2c\x30\x7b\x45\xa6\xb9\x75\x20\xa6\x2b\xc2\x63\xc6\x6f\x78"
    "\xd2\x7b\x52\xad\x97\x28\xf5\xd7\x8c\x16\x26\x29\x7b\x1d\x1c\xdd"
    "\xe4\x7f\xd6\x7d\x9f\x1f\x48\x46\xa3\x64\x38\x10\x35\x9f\x2c\xc6"
    "\xb2\x2a\x66\x26\x83\x83\x6e\xb4\x8f\x6e\x16\x05\xbe\x3a\x83\x0f"
    "\xe2\x9f\x0c\x54\x41\x2e\x7d\x82\xae\xff\xf9\x74\x8a\x2f\xdd\xb3"
    "\x68\xdd\x01\x03\x16\x1e\x2a\x17\xda\x69\x21\x6e\x22\xad\xf6\xb5"
    "\x7c\xe2\x55\xe4\x00\x27\x91\x88\x65\x58\x20\xee\xdd\x5a\x19\x35"
    "\xaa\x3d\x8c\xf6\x21\xfa\x31\x2b\xab\x89\xcb\xb3\x07\x1b\xfb\xe7"
    "\xe0\x63\x51\x26\xde\x82\x17\xbd\x5c\x34\x2f\x35\x82\x45\x11\x76"
    "\x9a\xc6\xb7\x2d\xe0\x9b\x87\x01\x2c\xd8\x5f\x2c\xbe\xf5\x3e\x11"
    "\x9a\xba\x48\x47\x71\xb1\x5b\xdd\xda\x18\x35\x01\x23\x0a\xe6\xa1"
    "\x6f\xcd\xe5\x5a\x16\x1d\xf1\x6f\x17\x8e\x04\x47\x8a\x37\x11\x43"
    "\x7d\xc9\x1e\xea\xbe\x92\xe1\x4b\x44\xd2\xf4\x90\x36\x53\x2b\xe4"
    "\x2c\x42\x53\x46\xdf\x9d\x91\x28\x8a\xa4\x09\xa6\x32\x72\xe0\x61"
    "\xba\xaa\xca\x49\x1c\xc0\x4c\x44\xb2\xac\x73\x92\x90\xba\xa7\x6d"
    "\x9f\xdc\x7b\x66\x73\x35\x48\xaf\x64\x11\xa6\xba\x79\x0c\x49\x62"
    "\xdd\xf0\x33\xe6\x3f\xab\x46\x2b\xc0\xcc\xbf\xa4\x5d\x45\xce\x37"
    "\x7d\x32\xf4\xc7\xe9\x05\xca\xb5\xfb\xbb\x52\x4f\x8c\x29\x07\xd0"
    "\x41\xb3\x04\xd1\xf3\x8f\x34\x8e\xfd\x34\xa7\xd5\x1c\x11\x84\x45"
    "\xd0\x53\x53\xb5\xf0\x44\x9f\x36\x84\x50\x78\x2d\xf4\x57\xca\x55"
    "\x16\x9b\xdf\xa8\x17\xa9\x4e\x10\x82\xfa\xf4\x11\x5c\xf3\xd6\xd8"
    "\x90\x48\x1a\xff\xb2\xfe\xb9\x51\x45\x69\x1f\x15\x24\x85\x46\x5d"
    "\x0f\x8d\xba\x4c\xde\x20\x79\x78\x45\x74\xfa\xdb\xe8\x05\x22\x2e"
    "\x3a\x13\x29\x34\xf1\xa4\x19\xcd\xa0\x32\xb3\x10\xfd\x7d\xfa\x28"
    "\x30\xd3\xf3\x38\x5d\x64\x6b\xa0\xc3\x73\xcb\xa4\xd6\x24\xa6\x26"
    "\x73\x00\x01\x4c\xdd\x2d\xd5\xe8\x79\x99\xaa\x5b\x0e\x5d\xf0\xa8"
    "\xde\x50\xf3\x47\x39\x18\x47\x4c\xcf\x82\xf9\xc8\xab\x9f\x31\x37"
    "\x9a\x9d\x8d\x00\xbe\xad\x3b\xc8\xb9\xd0\x0f\x4e\xbb\xa9\xc7\xb0"
    "\xea\x88\x24\x54\xe3\xa7\x85\xe0\x96\xd7\x88\x7b\x3a\x50\x7f\x08"
    "\x9d\xba\x88\x92\x5d\xf1\x2c\x63\x32\x41\xed\x2f\x9f\x68\x90\x5b"
    "\x66\x77\x5d\x1d\x0c\xa3\xcc\x31\x2f\x7b\xe8\x64\x18\x56\xbe\x8d"
    "\xe2\x42\x48\xe5\x5d\xd7\x37\xdf\x84\x10\xe2\x3e\x94\x57\x02\x4f"
    "\x53\x42\x61\xf0\x9a\xb2\x78\x82\x1b\x1c\x89\xda\x82\x4f\x7f\x54"
    "\x6a\x41\x63\xf4\xd5\x3c\xcf\x07\xee\x9b\xd5\x9a\xdb\x67\x38\x22"
    "\x87\x09\x2b\x94\xa7\x84\x71\x41\xa7\x96\xa6\xab\xf9\x0f\x7b\xfa"
    "\x5d\x89\x67\xbf\xba\x22\x75\x28\x38\x63\xbf\xc3\xf8\x28\x3f\x0e"
    "\x5b\x22\x37\x48\xa5\x5d\xff\x04\xf3\xc6\xbf\x22\x8b\xb1\xe0\xbf"
    "\xd2\xc8\x02\x89\xab\xf5\x81\x9e\x16\x52\x68\xb4\xe6\x87\xbc\xf4"
    "\xa3\x3f\x1c\x42\xc4\x7a\x62\x36\xca\x14\xc2\x67\x78\xad\x2c\xbe"
    "\x01\x3c\x20\x80\x7e\x45\x27\x6d\x49\xa4\xe0\xdf\x7d\xf7\xc4\x2d"
    "\x2c\x73\xf2\x98\xf6\x1f\xc8\xe7\x78\xba\x95\x3a\x71\xc6\xb7\xd1"
    "\x77\x96\x24\x55\x2d\xf0\xf3\x89\x6a\x79\x06\x71\xa3\xa9\x81\xfa"
    "\x17\x91\x4d\x85\x63\x21\xd0\x99\x7f\xf4\xb2\xd0\x59\x44\x33\x5c"
    "\xea\xc6\x0b\x63\xb1\xd8\x27\xea\xb5\xef\x74\x83\x99\x0e\x9b\xd1"
    "\xb5\x45\x3a\x47\x3e\x1e\xfd\x47\x6b\xa1\xe0\x93\x46\x6c\xb2\x1d"
    "\xc7\x2e\x35\xdc\x12\xbb\x8c\x8d\x3b\xb2\x9d\xb4\x20\x25\x15\x90"
    "\x32\x44\x1b\x8a\x7e\x94\x58\xca\xd9\xcd\xc1\x55\x1c\xe5\x23\x12"
    "\xbb\x27\xd8\x58\xa8\xae\x31\x9e\x52\x5b\x38\xf2\x02\x42\xa6\x09"
    "\x33\xb2\xa2\x1b\xd8\x58\xe1\x47\xcc\x6e\xe7\x02\x98\x3c\x84\xbf"
    "\x53\x5d\x15\x75\xa5\x4d\xc4\x6c\x03\xcd\xb4\x2a\x39\xd1\xa6\x4e"
    "\x43\x3d\x9b\xea\x41\xf9\x91\x5f\x7d\x9d\x46\x2d\x43\x08\xba\xcc"
    "\xb1\x9b\xb1\xad\xc3\xe0\x12\x57\x15\x95\x0f\x7c\x7f\x8b\x54\x31"
    "\x28\x26\x20\x4f\xd5\x12\x38\x6d\xa5\x87\xba\xd7\xbf\x81\x06\x9d"
    "\xc5\x54\xfd\x8f\xd7\x71\x53\x83\x22\x25\xe5\x6a\x7f\xa4\x04\x6b"
    "\xd5\x88\xed\x25\x8d\xc7\xe5\x4c\xcf\x1c\x02\x1f\x98\x00\x37\x63"
    "\x76\xbd\xcf\xc6\x21\x16\x55\x5a\xb0\xe0\x6b\x31\x61\xb3\xb7\xa6"
    "\xa7\xa8\x7d\xe2\x37\x12\x15\x20\x7c\x43\xfc\xe5\x4c\x82\xfe\xdd"
    "\xc5\xd4\x44\xb0\x8f\x6a\x30\xc0\x09\x50\x07\xd5\x26\xda\x1b\x02"
    "\x41\x56\x3a\x93\x60\xf8\x6e\xf3\xb8\x24\x29\x4b\xd1\x74\x67\x9f"
    "\x4d\xee\x74\x91\x2a\xcd\xeb\x00\xac\x96\xa7\x13\xad\x86\xdc\x21"
    "\x2a\x54\x4b\x74\x20\xfa\x6c\x83\xd5\xde\xc4\x84\x00\xe1\xf1\x1f"
    "\x81\x63\xe2\x0c\x93\x2b\xc8\x93\x82\x0a\x82\x61\x93\x9e\x0f\x85"
    "\xfd\xb4\x16\xc6\xa0\xa1\x8c\xc0\x18\x2d\x67\x57\x02\xa8\x36\x26"
    "\x94\xf2\x3c\xe6\x86\x96\x21\x50\xf8\x62\x35\x7f\xe8\x4a\x0b\x57"
    "\x20\x68\xc7\xe0\x57\x89\x09\xd7\xf8\x2c\x87\xcd\x17\xe7\xef\x50"
    "\xe5\x56\x6e\xab\x69\x4a\xc7\x6e\xdb\x4b\x6d\x8a\x85\xcd\x29\x10"
    "\x0b\x93\x27\x2b\x0a\x52\x4a\x24\xdb\x8d\xb7\xd4\x62\x2f\xae\x63"
    "\xd9\x82\xe4\x09\x0f\xb5\x19\xe3\x07\x36\xd5\xb5\x15\x2d\x58\xa2"
    "\x34\x91\x9d\x21\x6d\x02\x94\x62\x88\x41\xcb\xa9\x1e\xd7\x2d\x98"
    "\x5b\xa9\x2f\x7c\xc5\x48\x37\x8e\x7d\xdf\x81\x28\x16\xad\x99\xdd"
    "\x27\xad\xff\xdf\x5b\x6d\x76\x2a\x79\xa9\x42\xd8\xaf\x9a\x8f\x0a"
    "\xc8\x1a\xfc\x98\x86\x9d\xcd\xcc\x06\x83\x54\x78\x94\x7c\xed\x5c"
    "\xcb\xb2\x2d\x02\x62\x4e\x20\x7c\x77\x40\x42\xfa\x8c\x13\x32\x21"
    "\xc3\x62\xbe\xf6\x95\x82\xc5\x2c\xa9\xc0\x14\xdb\x1e\xc2\xd3\x51"
    "\xa1\xd7\x2b\xb0\x1c\x06\xe3\x2c\xa0\xa4\xec\xfe\x92\x37\x37\xf0"
    "\xf7\x14\x5b\x27\xc9\x43\xa9\xbe\x1f\x17\x4d\xd4\x6d\x3a\xf5\x8e"
    "\x7a\x2f\x61\x21\x77\xaf\xfd\x11\xae\x7e\x1b\x92\x31\xaa\xdb\x46"
    "\xbc\xb7\x32\xee\x79\xde\x7e\x62\xf4\x67\x72\x1f\x06\xd8\xe9\xe5"
    "\x59\xb5\x26\xbb\x70\x2d\xdb\xc0\xf0\xb4\x6a\x21\x62\x45\x8c\x15"
    "\xc0\x15\x4c\xbb\x1b\x1e\xda\xd3\xfa\x19\x8a\x07\x81\x27\x9e\xcc"
    "\x5e\x53\x91\x26\x9c\x33\x5b\xc9\x4b\x2f\x21\xda\x78\x1c\xf9\x43"
    "\xcd\x0e\x70\x02\x06\x12\x8f\xe1\xf1\xe3\xaf\x4e\x70\xbf\xba\xec"
    "\x1c\x7a\xe4\x88\x4c\x7e\x75\x44\x05\x00\x36\xb0\x01\xf8\x7f\xc2"
    "\xf1\x07\x62\x88\x87\x01\xc1\x60\x01\x0e\x76\x91\xea\x2b\x53\xb6"
    "\x46\xd2\x21\x78\xeb\xf1\xa5\x6e\xb9\xcb\xa8\x6f\xfa\x2b\x57\x0d"
    "\x84\x6e\x23\x10\x37\xd4\x03\x29\x81\x03\xc6\x17\x32\xb0\x41\x13"
    "\xff\x7e\xc7\x4e\x0a\x67\x13\x32\xf7\xdf\x9d\xa2\x31\xf9\x95\xc1"
    "\xfb\x53\x52\x3c\x17\xc2\x31\x05\x31\x2b\x7d\x8a\xb6\x3e\x5f\x6a"
    "\x0e\x7b\x9d\x10\x6f\x3c\xe5\x75\xd1\x4b\xef\xb3\xa5\x80\x3a\xab"
    "\xcc\x9e\xdb\x5f\x1d\xdf\x9d\xca\xbf\xf4\xef\xbd\x78\x5b\x16\x9d"
    "\xf7\xfb\x1b\x99\x1f\xaf\x63\xf0\x64\xb5\xfc\x8f\x2c\x7f\xca\xc4"
    "\xb3\x5a\x61\xf1\x9c\x92\xde\xc3\x6a\x6a\xad\xf0\x2d\xc3\x94\x2d"
    "\xde\x51\xd7\x22\x5a\xef\xea\xf6\xb7\x52\x71\x83\xc2\xad\xc8\x32"
    "\xc6\xbc\x87\x35\xbc\x7b\xe2\xc1\x8a\xd3\xd7\x06\x53\xf9\x15\x81"
    "\xce\x42\xa2\x75\xef\x67\x15\x93\x2a\xe7\x51\x3d\x0e\xcb\x72\x6b"
    "\xe5\x4c\x16\x7c\xc8\x94\x45\xa0\x8c\xb8\xe1\x2f\xc5\x83\xae\xe8"
    "\x15\xb3\x94\x7b\xd1\xac\x78\x1f\xcb\xfb\xdd\xa2\x5f\xe3\xe9\x31"
    "\xa2\x1c\x47\x05\x81\x97\xce\xff\xbe\x9b\xd2\xac\x63\x94\xb2\xd5"
    "\x95\xc3\xe1\x00\x76\xc3\xac\xeb\xa3\x3b\x15\x56\x02\x9e\xdf\xbc"
    "\x04\x84\x9e\x0d\x66\x71\x3f\x7b\xee\xb1\x51\x7d\xcd\x43\x27\x9a"
    "\x50\x73\xec\x9f\xa2\x21\xbf\xac\xee\xf0\xf6\x39\xe7\x71\xa4\x41"
    "\x56\x77\x8c\xbb\x69\x6a\xf2\x8e\x24\x37\xee\xa3\xfc\x02\x5d\x27"
    "\x70\xb1\x40\x9d\x97\x8e\x4e\xc8\x08\xc5\x82\x88\xd5\x25\xac\x97"
    "\x7d\xb0\xac\xe8\x0d\x95\x54\x92\x5b\xf8\x76\x7b\x8e\x91\xa9\xbf"
    "\x1e\xd2\x5d\xea\xbd\xbb\x93\x31\x5c\xa0\x8f\x71\x1a\xe3\xf7\x68"
    "\xa9\x11\xee\xac\xd9\x3b\xfa\x6d\xb3\x95\x7d\xa8\x3c\x0f\xd9\x45"
    "\xa7\xe5\x96\xb6\x65\x30\xaa\x73\x47\xe0\x45\x90\xfd\x31\xdb\x6b"
    "\x49\x48\x5a\x9e\xa8\x20\x8c\x0a\xab\x40\x68\xf4\x82\xb1\x85\xaa"
    "\xed\x6e\xe6\x9e\x32\xf9\xff\x7b\x88\x27\x63\xda\x34\xf6\xe3\xbc"
    "\xe9\x4c\x79\x35\x3e\xf6\x84\x9d\x47\xe6\x34\x5d\x87\x27\xe0\x76"
    "\xf1\xaa\x01\x33\xc2\x39\x9e\x4d\x77\x75\x25\xfe\x9a\xa2\x9e\x75"
    "\xd2\x3d\xf6\xe8\x29\xf9\x05\x85\x80\x41\x3d\x5c\x24\xf8\x55\x68"
    "\xbe\xb1\x34\x34\x30\xf3\x93\xad\xee\x28\xab\x54\xe2\x20\xb4\xc8"
    "\x84\xfa\x6e\xbc\x28\x25\x70\x5f\x86\x3b\xa7\xd8\x29\x77\xf6\x53"
    "\xed\xb2\x08\x8a\xbd\x84\xad\x52\xa1\x81\x0a\x52\xab\xc6\xe7\xc3"
    "\xb5\x68\x7f\x3b\xf4\x74\x49\x41\xce\x48\xc8\x76\x20\x5f\x24\x97"
    "\xb6\x41\xe6\xe4\xbb\x56\x5a\xb8\x16\x42\x5c\x34\x8e\x1f\x03\x41"
    "\x04\xef\xda\x9a\x21\x72\x3b\x00\xcd\xad\xc6\xed\x2a\xf6\xb2\x25"
    "\x52\x4a\xe5\x12\xaf\xba\x6b\xc1\x9c\x47\x1e\x14\xbb\xba\x04\x2d"
    "\xba\x64\x14\x24\x00\x5a\x81\x6f\x25\xae\xe4\x4e\xe8\x4c\xf2\xf7"
    "\x29\xb7\x9b\x1b\x9d\x58\x21\x8f\x02\x74\xd9\x21\x68\xc9\xbb\x1c"
    "\xd1\xc1\x41\xb5\xf8\x34\x1a\x3a\x4d\xc7\x8c\x0d\xdf\x08\xdf\xd4"
    "\x11\x0b\x4e\xb0\xb7\x1b\x26\x5f\xe7\x0a\xa5\xa4\xb2\x18\x6c\xaf"
    "\xad\x5f\xf9\x4d\xaf\xd5\xb4\xb4\x56\x0b\xac\x45\xcb\x47\xc4\xc8"
    "\x63\x27\x4a\xc2\xd8\x4a\xf4\x6b\x75\xbf\xde\x49\x6d\x39\x98\x4f"
    "\xf0\xaf\x8a\xb7\xd9\x8b\xc1\x2c\x02\xce\x78\x2b\x23\x26\x8d\x03"
    "\x86\x48\x26\xb0\x20\x1d\x8d\x1e\x0c\x09\xc9\xab\x22\x9a\x2f\x7f"
    "\xe1\x50\x47\x95\xba\xfa\x8b\x8a\xe1\x3f\xb0\x46\xa2\xf3\x52\x33"
    "\xa4\x9b\x77\x2b\x57\x86\x2a\xda\x83\x59\x51\x74\x24\x39\x69\x3e"
    "\xd9\xf3\xa0\x80\xae\xa7\xa1\x30\x9d\xe4\xae\x04\xb1\xce\x3d\x78"
    "\x72\xcd\xd8\x5a\x35\x44\x90\x6a\xfa\xf5\x5a\xff\x82\x55\xbd\xb2"
    "\x36\x7c\x7e\xcf\x18\x4c\x91\xc8\xf4\xc6\x0a\x13\x01\xb8\x0f\x8b"
    "\xb9\xf0\xff\x6d\x80\xac\x6e\x1c\x9d\x6c\x9f\xaf\xbc\x65\x19\x97"
    "\x90\xe0\xa9\xc3\x23\xe6\x8b\x10\x5f\x5c\x56\xee\xd2\xf6\x02\x94"
    "\x5a\xb5\x9d\x79\x69\x88\x29\xba\x09\x2c\xc9\x7f\x37\xdd\x02\x35"
    "\x95\xd3\xfa\x01\x4e\x71\x8c\xda\x23\xd6\xbd\xbb\xfd\x70\xc2\xc6"
    "\xcc\x1b\x91\x21\xd2\x2e\xae\x0b\xde\x7b\x94\x27\x7d\xc8\xe5\xe0"
    "\x96\xd6\x03\x51\xf2\x74\x0d\xdb\x98\x6c\x7e\x10\xe0\xaf\x8a\x40"
    "\xe9\xbd\x52\x6f\x86\x3c\xde\x02\x8d\xd2\x53\xe1\x80\x13\xd3\xc7"
    "\x6c\x20\x06\xa9\xab\x9e\xc3\xe7\xb6\xb1\xac\xa8\x65\xb2\xac\xe8"
    "\xc8\xde\xbb\x50\xae\x1e\xfb\xc0\xe4\x9d\xd6\x9f\x12\x8c\x28\xbd"
    "\x02\xd7\x9f\x22\x71\x7e\x26\x79\xd5\x14\x25\x40\x73\x3c\xb2\x78"
    "\x09\x69\x94\x41\x06\x12\x2d\x5f\x2b\xaf\x97\xf7\xe0\x9e\xf6\x7b"
    "\x89\x4c\xd1\x91\x41\x11\x26\xad\x96\x2e\x4b\x9c\x5a\x0b\xbe\x83"
    "\x21\x55\x63\x66\x2c\xe5\xf0\x63\xce\x2a\x76\xc2\xe0\x96\x13\x53"
    "\x9f\xbb\x09\x4d\x38\x9e\x73\x9c\xa0\xa3\xfc\x34\xbd\x16\x92\xba"
    "\xf0\x60\x1e\x21\x22\xa7\x0f\xdf\x68\xed\xe6\xc4\x31\x09\x08\x96"
    "\x62\x23\x62\xc5\x98\x01\x00\x07\x27\x71\x8f\x4b\x55\x1f\x32\x34"
    "\x0f\xc5\xf7\x40\xe1\x5f\xc0\xa0\x23\x79\x1a\xa5\x7a\x6c\xc9\x7a"
    "\xf3\x07\x7f\x5d\x71\xd3\x3c\xbc\x86\x40\x49\xb3\x0c\xb1\x1e\xa5"
    "\x23\xc1\x51\x41\xea\x5a\xc6\x20\xae\xc5\xf8\x1e\x66\x61\xbf\x8f"
    "\x01\xa3\xc8\x17\xac\x1a\xb5\x92\x57\x0b\x63\x76\x44\x02\xe4\x93"
    "\x4d\x77\x6d\xf0\x3c\xad\xae\x44\x8c\x5d\x90\x82\xc3\x0c\x00\x73"
    "\x7e\x4b\xbe\x5c\x18\x4a\x11\x67\x50\x7d\x9b\x99\xbd\xd0\x55\x92"
    "\x45\x6a\xc2\x5d\xad\xb5\xbe\xaf\xe2\x82\x02\x86\x11\xdb\x96\x9c"
    "\x44\xdb\x7b\xfb\x2c\xad\x34\x9c\x0e\xcb\xeb\xc2\x81\xa0\x0a\xd4"
    "\xf7\x0c\xfd\x88\x9b\x35\x33\x83\x3a\xb8\x45\xf8\x64\x03\xe6\xa1"
    "\x97\x0d\xa6\xb5\xc8\xb8\xe8\x2e\x9f\x42\xa8\x2c\x7c\x14\xe5\x35"
    "\x16\xb3\xd9\xef\xba\xae\x6c\xa6\xb9\xc9\x39\x77\xf1\x7f\x58\xec"
    "\x29\xa1\xa8\xbb\x18\x8f\xb1\x5f\x37\x7b\xf5\x0d\x37\xe8\x47\x81"
    "\xca\x17\x16\x05\x2f\x65\x7a\x36\x1c\xbe\x44\xeb\x22\x70\x02\xa5"
    "\x73\x90\x87\x3e\x54\xb8\x69\x5f\x76\xfe\x0f\x84\xf8\x73\xe0\x21"
    "\xc9\x29\x45\xf3\xd7\xb5\x48\x61\xbe\x3c\x23\x77\x01\xc1\x40\xc3"
    "\xa4\xe1\xb8\x4f\xa4\xba\xb9\x10\xcd\x26\x53\x93\xe0\x17\x22\x93"
    "\xd6\xfc\x40\xfa\x18\x72\xe1\x75\xd7\xd3\xf0\x61\x53\xa9\xec\xa3"
    "\xf8\xdb\x85\xc2\x16\x6f\x68\x41\x5e\xda\x3b\xf4\xae\xe3\x5a\xdc"
    "\x02\x31\xcd\x6c\xfe\x5d\x3a\x23\xb5\x1f\xb0\x10\x51\x76\xb9\xcd"
    "\xad\xc2\x83\x04\xd2\x7f\xef\x69\x8c\xf4\x15\x52\x35\xd0\x7e\xcf"
    "\xaf\x5a\x2c\x5f\x86\x10\xa6\x3e\xe8\x09\xb0\xe0\x26\x02\x51\xc3"
    "\x38\x73\xdc\xee\xbd\xda\x1e\xc3\x72\x5d\x13\x76\x03\x1e\x45\xcc"
    "\x73\x1a\x87\x0b\x39\xed\xc9\x7b\x54\x9b\x96\x62\x4c\x89\x19\x84"
    "\xac\xf7\xa4\x22\x58\x4b\xc5\x6f\x21\x04\x25\x6f\x15\xda\x55\x2d"
    "\x0a\x83\x76\xa5\x46\xb6\x96\x61\x53\x72\x8c\xa1\xf3\x85\x14\xdf"
    "\x0d\x45\x83\x75\xe9\x9b\xc0\x1f\xa4\x98\xb0\x7a\xbb\x33\x80\x3f"
    "\xda\x07\xc4\x14\x9e\x6e\x57\x73\xf9\xec\x65\xac\x3c\x87\xca\x7c"
    "\x51\x5f\x26\x3d\xe3\xcd\xa2\xd5\x3e\xdb\xc2\x0c\x47\x48\x6e\xe3"
    "\x3f\x98\x10\xc8\x22\x6b\xbc\x9c\x52\xfc\xad\xb1\xf0\x1f\xe2\x8b"
    "\xf0\x99\xb8\xaf\xb9\xf1\x79\x8e\x0b\x98\x15\x21\x0c\x55\x91\x87"
    "\xc5\x62\xb5\xe4\x53\x50\xa5\xd0\x70\x8c\x2f\xb9\x6b\xad\x40\x5e"
    "\xf4\xb8\xb5\x35\x06\x6e\xd0\x2d\xa1\x98\xe4\xa3\xa4\xea\xf0\x75"
    "\x45\x0c\x87\xf6\xd9\x84\x0c\x8e\x00\xb8\xe3\x16\xbc\xc7\xa5\xc6"
    "\x11\x3f\xef\xbd\x72\xb0\xc7\xf6\x86\x0f\xce\xcc\x8a\x3f\x33\xfb"
    "\xa2\x99\x9e\x4f\x3f\x3e\x3d\xa5\xd7\xbf\xcf\x5d\x22\xa9\x3f\x4d"
    "\x16\xae\x6d\xd0\x53\x68\x5d\xfc\x72\x23\x62\x8f\x92\x08\x67\x35"
    "\xd0\x95\x51\xbd\x29\xe8\xd0\xf5\x37\xd0\x6f\x33\x53\x6f\xce\x83"
    "\x60\xd7\x44\x3f\x58\x3e\x90\x79\x68\x5e\xfc\xe0\x34\x7c\x1f\xfa"
    "\xfe\xdd\x0b\x7d\x11\x25\xf0\xdf\xc9\xbb\x21\x46\x00\x79\xf2\x86"
    "\xab\xbb\xeb\x54\x9b\xb7\x44\xae\xea\x0b\x7a\x6b\xc6\x6a\x27\x2c"
    "\x8a\xf9\x45\x62\x1b\x57\xb8\x38\x0d\x40\xfa\x06\x7c\x30\x60\xb9"
    "\xd4\x4b\x79\xbd\x43\x33\xec\x96\xd4\x76\x32\x12\x4a\x9a\xad\x0a"
    "\x2d\xf2\x87\xed\xa9\x31\x2f\x70\xf1\x2f\x54\x4f\xd7\xbd\xef\x9e"
    "\x6c\xc5\xe1\x10\xef\xfb\x8d\xbd\xeb\xb8\x21\x57\x1f\x0f\xa9\x53"
    "\x01\xdb\x9d\xa0\xbb\x60\xb7\x7a\xf6\xd5\xb7\xde\x00\xca\x26\x03"
    "\x9f\x1d\xda\x92\xf7\xa7\x77\xc7\x5d\x02\xfc\x34\x0f\x1b\x81\xb5"
    "\xe7\xc5\xef\xc6\xaa\xa6\xff\xe3\xb7\x7d\xb3\x48\xb7\xa5\x97\x3a"
    "\x94\x65\xcb\x1e\x01\x84\x1f\xa1\x0f\x39\x83\x18\xbf\xb7\x3a\x4f"
    "\x8f\x53\xa4\xbd\xed\x65\x6f\x35\xdb\x0e\xf0\x06\x85\x82\x6d\x8e"
    "\xac\x3a\xa0\x94\x16\x23\xb3\x40\x1f\xfd\xab\xa9\x27\xbc\x91\xf4"
    "\x80\x88\x18\x54\x8a\x60\xf6\x53\xe9\xf3\x40\xf7\x9e\x40\xd6\x66"
    "\x52\x59\x23\xc4\x84\x7a\xc3\xc0\xa9\xb3\x6f\x30\x69\x62\x0b\x0a"
    "\xea\x67\x7e\xe7\xaf\xa2\xc3\x33\x98\x7d\x9a\x5a\xfa\xde\x1b\x0e"
    "\x1e\x22\xef\x74\x70\x22\x8b\x07\xc9\xf4\x82\xa6\xc3\x43\xa3\x7c"
    "\x46\x2a\x74\x9c\x02\xd4\xcc\x86\x44\x7c\xc1\x6c\x3c\x68\x95\x5a"
    "\xfa\x80\xe6\x3a\x3a\x41\xaa\xa1\x37\x5c\x7c\xa0\xcf\xfa\x03\x35"
    "\xe9\x6e\x59\x9e\x1b\x68\x41\xae\x56\x93\xb5\xfa\x6f\xf4\x37\xc3"
    "\xc1\xdc\xa2\x00\x75\xb7\xa5\x8a\xaf\xa8\x18\x45\xaf\x0a\xa8\xf6"
    "\x30\x52\x0d\x89\xa3\x62\xd6\x67\x44\x70\x45\xc2\xb3\x9f\x88\xf5"
    "\x73\xf6\xb7\x6b\x95\xea\x4a\x98\x95\x0a\xd7\x97\x57\x0b\x84\x19"
    "\x75\xe9\x84\x13\x06\x22\x3d\xbe\xfd\x21\xa4\xf0\x92\xd6\x94\x52"
    "\xc4\x53\x9c\x66\x4e\x27\xe1\x10\x62\x2a\xe7\xa7\xdb\x50\x73\xd6"
    "\x17\xeb\x02\x3b\x36\xf2\x8a\x13\xee\xee\xbd\xbd\x96\x4d\xf6\x3d"
    "\xcb\x18\x76\x29\x50\xb6\xbd\x3e\xee\xad\x2a\x25\xb9\xbb\xa4\x80"
    "\x60\xac\x8b\x82\xaf\x3f\x41\xec\xaf\xbb\x71\x34\x14\x0c\xa8\xcc"
    "\x68\x7b\x92\xed\xed\x8b\xda\xbd\x95\x67\xe5\x09\x50\xed\x61\x7a"
    "\xa1\x14\xd3\xdb\x86\x48\xf9\xab\x48\xa6\x22\x45\x6a\xec\x56\xfe"
    "\x79\xcf\xa6\x22\x5f\xc7\xfd\x3f\xb0\x60\x7f\x9d\xbc\x1b\xd8\x61"
    "\xb3\x16\x60\x0f\xc1\x01\x63\xfe\x80\x98\xea\x68\x5b\xc3\xfe\x06"
    "\x43\x5f\x51\xcb\x1c\xe7\xff\xeb\xae\x67\xb3\x11\x4f\xad\xf8\xc8"
    "\x80\x8a\x40\x44\xbb\x06\x63\x8d\x05\xbc\x9a\x73\xc4\x4c\x5b\x1e"
    "\xb7\xc8\x3c\xdb\x4b\xde\x51\xff\xa8\x54\x13\xa9\x7f\xbd\x53\x4d"
    "\xdb\x17\xdc\x89\x9f\xc4\xe2\xce\xd6\xed\x81\xee\xb1\x17\xb4\xc7"
    "\x7f\x9e\xcd\x03\x25\x13\x67\x64\x9a\x56\x49\xec\x58\x56\x79\x07"
    "\x4f\xc8\xc2\x70\x2d\xc4\x2a\x58\x30\x8f\x40\x23\xfb\x2c\xd3\x0c"
    "\x79\xec\xb9\xa9\x52\xcd\xe7\x7d\xfc\xf9\x2d\x8e\xf2\x34\x81\x1c"
    "\x32\x71\x12\xab\xd5\x68\xc4\x9d\x4b\xf6\x93\xf6\x11\xd0\x7e\x43"
    "\x3f\xcd\x0a\x39\x65\x30\xc6\xa2\x79\xeb\x3b\xa5\x67\xd7\x80\xb7"
    "\x27\x1b\x6b\xfc\x7f\x16\x83\xa6\xb9\x15\x9e\x14\x37\x88\x66\x2e"
    "\x8c\x5f\x73\xdd\x25\xab\x62\x36\x33\xef\xe7\x81\xed\xd6\x47\xb3"
    "\x20\x03\xc9\xf3\xea\xf2\x36\xd9\x68\x24\x4e\x45\x61\xbc\x85\x58"
    "\x48\xb8\x39\xbf\xb9\x3a\xf2\xea\x3e\x23\x0a\x30\x08\x92\x30\xc4"
    "\x2e\x59\x3e\xd3\xb9\xbe\x53\xd6\x77\xa7\xc9\xda\x74\x4e\xe1\x96"
    "\x1a\xac\xca\xc2\x37\xf9\xe0\xbc\x1f\x88\x6a\x92\xd5\xf3\x35\xc6"
    "\xc0\xb0\x25\x0e\xa7\x6f\xbd\xcd\x85\xae\x9c\xf6\xaf\xe7\xab\x25"
    "\xfd\x6b\x47\x53\xbe\x65\x05\xb9\x86\x75\x7b\x00\x3b\x94\xa0\x89"
    "\xd6\xa4\x2b\x1f\xb2\x4d\x22\x49\xec\x91\x7b\xb0\xad\x50\xc8\xbd"
    "\x31\x26\x5f\x82\x07\x1a\x08\x16\xc3\xf8\x98\x5e\xdf\x03\x11\x20"
    "\x5f\x83\xea\xf8\xff\x55\x87\xa3\xc7\xc2\x49\x38\xa3\xf0\xcf\x9f"
    "\xf4\x38\xb5\x67\xd7\x14\x07\xa5\x12\x92\xe6\xd7\xe3\xf9\x39\xe6"
    "\xcd\xbe\xcd\x49\xe9\x13\x79\x3f\x73\xcb\x96\x44\x06\x93\x49\x07"
    "\xca\x4d\x48\xf4\x4b\xec\x30\x1b\xdf\x01\x10\x98\x67\x57\xfc\xac"
    "\x6c\x2c\xca\x84\xeb\x7c\x5f\xad\x16\x62\xd1\xa8\x33\xd2\x4f\xa3"
    "\x56\x77\x1d\x6b\x77\x27\x59\xa4\x83\x7d\x98\x72\xd2\x3f\xf1\xab"
    "\x21\x95\x97\xaa\xdc\x06\x2f\x31\x7d\x6c\xbc\x04\x4b\xf6\x5d\xc5"
    "\xdd\xda\x95\xdd\xc3\x4d\x68\x58\x4b\x7d\xb9\x91\xc8\x44\x1a\x43"
    "\xe0\x51\x1f\x71\xb8\x8d\xda\x14\x1f\x36\xb7\xcb\x32\x66\x50\xc3"
    "\x24\x4b\x98\x9f\x1b\x99\x2d\x2b\xaa\x31\x8e\x2a\x76\xdd\x1c\x34"
    "\xa9\x46\xc8\x43\x25\x5f\x65\xc6\x89\x6e\xac\x3a\x67\x74\xce\xff"
    "\x50\xb6\xf6\x6b\x75\x26\x72\xf5\xce\x8d\xc8\x41\x49\xba\x6b\x22"
    "\x7d\xa8\x44\x25\x4d\x01\xbf\x47\x0f\x6c\x98\x7e\x8b\x5d\xf2\x16"
    "\x84\x14\xbc\xee\x11\xad\x8c\x13\x1d\x16\xe4\x3a\xdd\xbd\xd4\x93"
    "\x59\x51\x17\xf4\xf2\x11\xc5\xd6\x46\x0e\xe1\xbe\x41\xe7\x2b\x42"
    "\xc2\x12\x52\xce\x6d\xcd\x98\x38\xe5\x3b\x0e\x1f\xd8\xd1\x86\x4c"
    "\x2d\x3d\x21\x9b\x82\xd4\x2d\x04\x46\x86\x58\x48\x43\x16\x58\x73"
    "\x2a\x78\xf0\xd9\x34\x8f\x80\x44\xfa\x7f\x57\x6d\x11\x56\x2d\x25"
    "\xd7\xb6\x81\xf7\x14\xc4\xb4\x35\x32\x54\x3d\x27\x06\x9a\x21\xd1"
    "\xd1\x52\xe6\x46\xc5\x6d\x75\x22\x9b\xb1\x98\xf8\x76\x76\x10\x83"
    "\x06\xe6\x8f\xa4\x97\x51\xf3\xb1\xd6\x78\xbb\xf1\xea\x38\xb2\xe0"
    "\x71\x2d\x89\x68\x82\xb5\xea\x14\x94\x13\x6f\x23\xa7\xe1\xd5\x28"
    "\xca\x45\x6c\x6c\x2a\x2c\xfc\x8c\xb6\xb6\xe7\xe6\x52\x6a\xaa\x1d"
    "\xa0\x82\x65\x34\x92\xb6\x24\x93\x62\x13\x56\x98\x92\x70\x6d\x8f"
    "\x9c\x64\x96\xb1\x19\x3e\xc5\xa4\x29\x4e\x3c\x1d\xa1\x4b\x25\xc2"
    "\x43\x37\xcf\x9b\xb3\x49\x0e\xa3\xf8\xa5\x4e\x0a\x5b\x9f\x77\xaf"
    "\xfc\x70\xfe\x8d\xcb\x76\x87\xa9\xf4\x5c\x7a\xe3\xee\x8f\x2a\x94"
    "\xfa\x58\xe6\xc9\x20\xcc\xe1\xf4\x47\xfd\x60\x52\x6f\xa7\x1b\x6f"
    "\x10\x48\xa3\xdc\xc7\x68\x0e\x3b\x20\xac\x66\xd7\x82\x90\xbf\xc3"
    "\x87\x8e\x72\xd4\x87\x6e\x01\x40\x36\xb0\xb8\x0b\x6b\xe4\xbf\x2e"
    "\xa3\x58\x12\x5b\xea\x81\x1b\x51\xaf\x76\xa0\x07\x7b\x3a\x61\x57"
    "\x50\xa9\xca\x33\x68\xd1\xd1\x7e\x06\x0a\x0d\x37\xbf\xd3\xb1\x3c"
    "\x91\x41\x2c\xa8\x32\x98\xb0\x6a\xea\x30\x48\x60\x7f\x71\x8c\x04"
    "\x66\x7d\xcf\xc7\xfa\xa4\xac\x5a\x59\x4b\xe1\xc1\x55\x11\x40\xba"
    "\x9c\x1e\xa7\xce\xbc\x07\x4b\x1f\xbd\x33\x8e\xef\x83\x1f\xa3\xeb"
    "\x1f\x39\x08\x8b\xcf\x1c\xf1\x3b\xf7\x06\xb1\xd2\x87\xe1\x2b\x16"
    "\x5f\x4f\xb3\xe6\xc4\x58\x60\x67\xc5\xe2\xf4\x61\xc4\xcc\x86\x40"
    "\x0b\x45\x64\x28\xe8\x76\x7c\x1b\x57\xa7\xbc\x3e\x64\xa8\xab\xe6"
    "\xd2\x53\x64\x6f\x87\x96\x76\x3b\x2a\x33\xde\x35\xc6\xf1\x66\x7d"
    "\x06\xf3\x0b\xb1\x2c\x0f\xd0\xe2\x8e\x48\x59\xeb\xdc\x2f\x96\x23"
    "\x6a\xf4\xa8\x95\xd9\xa7\xd6\xfb\x90\xcb\xb6\x00\x84\xdb\x28\xa0"
    "\xc6\x28\xfa\xf7\x65\x3c\x31\x6e\xc6\x9b\x5c\x51\x03\xae\xa4\x95"
    "\x79\x2e\xfd\x58\xec\x42\xbc\x95\x0f\x86\x08\xd5\xfa\x68\x34\xaa"
    "\xb7\xbd\x2a\xae\xce\x33\xb3\xe1\x67\x56\xf5\x18\xa5\x41\x0e\x89"
    "\x57\xdd\x53\x44\x37\xe8\xc1\x52\x45\x1d\x86\xbe\xb2\x01\x24\xe8"
    "\xfb\x9e\x67\x2d\x13\xfb\x7e\x98\xe1\x53\xc1\x24\xfd\xb2\xea\xf7"
    "\xf9\x4a\x23\xef\xff\xee\xa2\x5e\xc3\x1f\x82\x1e\x49\x2d\x9d\xe0"
    "\x0a\x6d\x05\x6c\x67\xe5\x65\xf7\x34\xf8\x64\xd4\x25\x03\x5b\xb1"
    "\x36\x20\xb7\xa1\xf4\x4e\xc0\x2a\xb7\xa6\xb1\xc4\xa3\x85\x11\xb6"
    "\x90\x2c\xfc\xf1\x99\xd3\x91\x8e\xb0\x7d\xa1\x1d\x63\x4a\xdd\x44"
    "\x08\x60\xd1\x23\xfa\x2b\x80\x03\xf8\x72\x70\x77\x7c\x64\x15\xe3"
    "\x2f\x1b\x34\xdd\x6e\x1e\x22\xdf\x3a\x78\x68\x4e\x11\x69\xfc\xe8"
    "\x4b\x61\xcf\x46\x15\x44\xf4\xe8\x91\xfc\xd9\xd1\xf5\xa1\xe5\xfe"
    "\xf1\x48\xae\xdd\xbf\xcc\x92\x2f\x5d\x7b\xfd\x3b\xd2\x48\x0e\x8a"
    "\x33\x18\xc7\x5c\xe0\xaf\xc2\x4c\xa1\x79\xfc\x0e\x83\x2a\xb6\x43"
    "\x68\xc1\x74\x40\x7b\xf2\xcd\x45\xa7\x2c\xd5\xc9\xe7\xdd\x0b\x9d"
    "\xef\x75\x00\xce\xc5\x4d\x4d\x69\x29\x38\xa1\xbb\x18\x28\x91\x89"
    "\xd4\xb2\x44\x56\x40\xd8\xab\xc9\xa0\xb7\x0c\x3f\xfc\x8b\xa3\xc8"
    "\xd4\x83\x11\x9a\x4f\x63\x85\x1a\x57\xcf\x30\xf4\x8c\x88\x61\x67"
    "\x85\xa5\xee\x00\xcb\x92\x21\xdb\x45\xdd\x8d\xff\x11\x8c\xa3\x3b"
    "\xb4\xae\x25\x49\x37\x89\x1f\x2c\x97\x1e\xdc\x86\x14\xfa\x3f\xc4"
    "\x3e\x56\xf2\x97\xa4\x4a\x23\x4f\xb1\x73\x7f\x23\xd4\x4a\x15\xf0"
    "\x6a\x9e\x36\x4f\xe1\xda\xa8\xe2\x8b\xf7\x29\x27\x52\x62\x96\x20"
    "\x27\x13\xf7\x6d\xc8\x34\x2e\x38\x43\x48\x3b\x47\x9f\xf7\x93\x69"
    "\x7b\x11\xa9\x34\xbd\xc2\x06\x90\x5d\xd0\x20\xe2\xf3\x21\xcf\x8d"
    "\x65\xc2\x45\xa8\xe7\xc4\x27\x5f\x87\x30\x12\x11\x80\x0f\x07\x51"
    "\x4e\x9c\xb5\x9b\x88\x54\x0f\x54\x41\xe6\xb0\x9b\x4b\x73\x11\x2d"
    "\x85\x5b\xa0\xdf\xfd\x4a\xff\xd6\x70\xc4\xf7\x6e\xc1\x1a\xc0\x7a"
    "\x6c\xc2\x20\x1a\xc6\x5c\x83\xb3\xb3\xe4\xdc\x10\xd9\x91\xef\x44"
    "\x24\xcd\x00\x1d\x34\xf0\x39\x3d\xc2\x62\x95\x7d\xf6\x41\x46\x9a"
    "\xe0\x0f\x74\xc5\x27\xf8\xc9\x9f\x50\x43\x2c\x5f\xf4\xc4\x26\x0e"
    "\xc6\x99\x8b\x7e\xf2\xa0\x22\x32\x90\x76\x21\x26\x54\x2d\x8a\xa8"
    "\x9b\xfd\x24\x1a\xc5\x9e\x3a\x9a\x6c\x6f\x13\xaf\xc9\xd6\x9a\x77"
    "\x1d\x12\x4d\x16\x35\x95\x25\xe4\xb3\x74\x60\x5b\x69\x9e\x32\xbd"
    "\xfb\x39\x3d\x93\x97\x76\x7b\xce\x32\xab\x2d\x55\x57\xd0\x5c\x33"
    "\xfa\x54\x18\x3b\x0d\x5f\xac\xc7\x3a\x09\x74\x41\xaa\x34\xab\xf7"
    "\xd6\xac\x36\xfb\x35\xd6\xbe\x7f\x19\xd0\xc2\x6c\x7a\xd5\x64\xc0"
    "\x6f\x8a\x4f\x61\x6f\xf4\x81\x9c\x53\xe8\xb2\x9e\x78\x2b\x87\x91"
    "\xc4\x03\x9e\x5d\x04\x9b\xd3\x68\x19\xae\x6d\x01\xa1\x13\xea\xe6"
    "\x26\x0e\x25\x15\x0b\x93\x5e\xe3\x64\x01\x15\x58\xde\xa9\x7e\x1e"
    "\xe0\xe7\xf2\x93\x8b\x73\x68\xad\x9a\x5a\x86\xba\xe4\xf8\x9a\x9f"
    "\xfb\xd0\x66\x38\x56\x6a\x78\x5c\xb6\xad\x39\x82\xb1\x33\xce\x6a"
    "\x3e\xdb\x13\xaa\x2c\x4a\xd4\xdb\x70\x52\xac\x64\x6f\xcf\x33\x6b"
    "\x37\x5e\xfb\x6a\x36\x0d\x44\x88\x62\xf2\xb7\x11\xdb\x3d\x8e\x65"
    "\x7a\x70\x6c\x14\x01\x36\x64\xbe\xae\x06\xb1\xa0\x67\xfd\x07\x8b"
    "\x0a\x88\x00\xc0\x1d\xd6\x10\xd5\x83\xbe\xe4\xfa\x46\x34\xe4\xf3"
    "\x52\x51\x37\x2b\x81\x44\xa7\x19\x4e\xd6\x0d\xc2\x53\x92\x83\xce"
    "\x90\x9e\x7d\x65\x33\x8a\x90\x50\xb0\x9b\x66\xb6\x47\xf3\x0b\x6d"
    "\x59\x5d\x7e\x03\xd9\xa7\x70\x29\xaf\xce\x14\x0d\xf7\x71\x7f\x64"
    "\x94\x9a\xe1\x36\x2f\x94\x60\x2d\xc2\xe7\x08\x40\xe3\x11\x7a\xb1"
    "\xa2\x6c\xc8\xe8\xff\xd0\x68\xec\x22\x5f\x0b\x75\xb2\xde\x63\xe3"
    "\x51\x1f\x44\x85\xc8\x7f\xb0\x08\x7e\x44\x21\x67\x5f\x37\x54\xbc"
    "\x4b\xc9\xc0\xa3\x8d\xb6\x39\x26\x61\xe8\xa5\x98\x02\xd8\x3f\x88"
    "\x7c\xf8\x1a\xa9\x9e\xd1\x3a\x10\xb4\xb8\xa1\x76\x14\x4f\x76\xce"
    "\x3a\x19\x2c\xc7\x7b\x09\xe3\xf8\xa0\x87\xdb\x48\x8f\x3d\x30\x4d"
    "\x04\x86\x23\xf4\x6a\x03\x1b\xa9\x25\x18\x96\xcd\x08\xff\x60\x1d"
    "\xd0\xb9\x33\xf5\x11\x0b\x4c\xc9\xd9\x43\xb5\x70\x5b\x24\x35\xfa"
    "\x1c\x0a\xda\xad\x6c\x3a\xed\x88\x02\x2f\x57\xcc\x3d\x71\x04\x8f"
    "\x9d\x5f\x42\x0c\xfa\xf7\x37\xb8\xa9\xf2\x43\x46\x01\xb2\x96\xb1"
    "\x43\x84\x61\x8f\xa9\xb7\x6e\x6a\xcb\xf1\xb5\x5a\xd7\x13\x0f\x58"
    "\x2f\x36\x92\x0a\x5a\xff\x71\xe1\x5d\x12\x0b\x11\xd6\xe0\xdd\x37"
    "\x45\x54\x80\x35\x38\xf3\xb1\x23\x05\x51\x2c\xf2\x43\x22\xed\x52"
    "\xcd\x7c\xe5\xf4\x09\xef\xd2\xf2\x75\x26\x84\xbc\x32\x6b\xf4\x54"
    "\x8f\xa1\x71\x69\x02\x8c\x81\x9b\xa3\x42\xee\x67\x26\x82\x86\x0a"
    "\x6d\xe0\x97\x52\xf5\x09\xca\xad\x89\x74\x84\x16\x08\x95\xdc\x71"
    "\x2b\x70\xbd\x05\xd5\x88\xfe\x21\x8f\xd8\x57\x18\xb9\xb8\x33\xff"
    "\x2c\x18\xe2\x56\x64\x16\xce\x1e\x52\xc3\xd7\xdc\x69\x6c\xca\x1a"
    "\xd0\x2b\x9b\x99\xe2\x95\x3f\x92\xd8\xfe\x7a\xc0\xe4\xd7\x5b\xd2"
    "\xae\x28\x34\xb9\xad\x8e\x87\xf1\x79\xcd\xaf\x5e\x75\x60\x9a\xbd"
    "\xf1\x23\x67\x87\xfe\x36\x63\x47\xc3\x29\x91\xf2\x0c\x7f\xaf\x41"
    "\xb6\x5d\xa4\xed\x5e\xdc\x3c\xab\x11\x34\xa4\xee\x0a\x3b\x56\x5c"
    "\xab\x7c\x6d\xcd\x6f\x93\xfe\xb5\x28\xdd\xf0\xa1\xe9\x92\xf6\xad"
    "\x48\x14\xe5\x1d\x33\x84\x33\xdc\x5b\x52\xfd\xdd\x8e\x78\x0a\x31"
    "\x2d\x12\xc8\x0c\x4d\xbd\xaf\x88\x18\xb1\xc8\x48\x83\xd8\xbe\x41"
    "\x18\x6d\xe5\xfd\xee\xb9\xc7\xb7\x54\x2a\x84\x29\xe5\x36\x45\xa3"
    "\x13\xcd\x8c\x9a\x53\xc3\x79\x0b\x9f\xcf\x01\x43\x42\x1d\xa3\xbb"
    "\x58\x67\x62\x79\x0c\x91\xb0\x11\x0f\x68\xb5\xfd\x11\x13\x38\x56"
    "\x04\x37\xd7\xd7\x74\x57\xfb\x55\x87\xef\xb4\x0a\x90\xed\x1c\x02"
    "\x83\x8b\xa4\xe8\x3b\x0c\x6a\xdb\x17\x5d\x94\xb6\xe1\x47\x67\xa4"
    "\xf4\xa1\x27\xe8\x0f\x79\xbe\x77\x41\xf4\xdc\x44\x6c\x52\x01\x76"
    "\xfd\x5b\x04\x12\xcc\x4d\x7a\x8f\x3d\x29\x3e\x43\x8d\x50\xe4\xe7"
    "\x9e\x52\xbb\xc2\xc3\xbc\x67\x07\xd9\x7b\x62\x89\xf1\xb3\x97\x33"
    "\x48\xc9\x35\x1b\x66\xbe\x55\xb2\x15\x2b\xee\x9b\x76\xc4\x2d\xc0"
    "\x57\xd1\x21\x34\x18\x04\x88\xf4\x5a\xee\x94\x91\xfe\x72\xf8\x63"
    "\x4e\x3b\xee\xda\x80\x06\x86\x9a\x82\x9d\x2d\x58\x61\x41\x50\xab"
    "\x48\x9d\xca\x7a\xf2\x68\xc0\x9d\xde\x66\x8c\xc2\x04\x28\xff\x88"
    "\x36\x6a\x3c\x01\x19\x44\x6b\xdb\xa2\x9c\x39\xb0\x72\x3f\xcd\x63"
    "\x93\x93\xd3\x97\xd1\x38\xab\x24\x1c\x18\x7b\xea\xc6\x47\xd8\xf7"
    "\x3e\x5e\x42\xb3\x46\x8e\x39\x58\xe0\xe7\x39\x08\xc0\x81\xce\x0b"
    "\x6c\x89\x4f\x04\x09\xf3\xbd\x32\x18\x07\xa1\x63\x38\x60\xa8\xe7"
    "\x49\xcb\x4a\x10\x87\x5a\x65\xb3\xf0\xa0\x73\xf4\x8f\x14\x17\x47"
    "\xc8\x8a\xfe\x90\x39\xef\x07\x95\x75\x2d\xbd\x07\xef\x51\xa2\xda"
    "\xdb\x40\xbb\x09\xbb\x9d\x4f\xcb\x32\x8f\x68\xaf\x28\xf8\xd7\x60"
    "\x85\xfc\xca\xef\x4a\xfe\x84\x8a\x93\xc4\xca\xc4\x3f\x55\x86\x3a"
    "\x21\xb5\x40\xe6\xd4\x08\xeb\x55\xfd\xfb\xd2\xa0\xc1\x3f\xba\xe6"
    "\xfd\xf6\x8e\x51\x42\x37\x37\xf6\x96\x61\x05\xd1\xed\x57\x57\x0b"
    "\xb5\x21\xad\xb9\x57\x6b\x06\x98\x8d\x7d\x5a\x64\x45\xfe\x77\xd1"
    "\x77\x07\x6d\x47\xca\x45\xb4\x37\xa9\x78\x0b\x37\x6d\x49\x68\x9e"
    "\x6b\x0b\xe9\x83\xd9\x0f\x46\xdb\xf9\x35\xe1\x4b\x53\xf3\xbf\x7a"
    "\xc7\xae\xc7\xfc\x1b\x92\xc1\x4f\x16\x1e\x59\xae\x26\x20\xf7\x55"
    "\x22\x06\xf2\x2a\x36\x5c\x91\x47\x69\x43\xb8\xb5\x1e\x92\x06\x61"
    "\xef\xc1\x9d\x04\x00\x70\x40\x7b\xa1\xcf\x01\x1d\x3a\x0e\x07\x2e"
    "\x68\xd1\x0e\x06\x46\x19\xaa\x21\x84\xd7\xe8\x48\x72\x9b\x25\x4a"
    "\xf6\xb8\x3d\xb1\x5f\xca\x21\x34\xd0\xd5\x4e\xfc\x76\x1f\xff\x25"
    "\xc1\x16\x9d\x60\x8e\xd2\x43\x4d\xe8\xae\x3c\xaf\xb8\xc3\xaf\x0b"
    "\x5b\x23\xa1\x61\x83\xb5\xea\xd5\xdc\x5d\x17\x5c\x95\x5f\x4d\xb5"
    "\x45\x46\x23\xd6\x11\x24\x4c\x46\x27\x76\x11\x89\x92\xba\x03\xe8"
    "\xe2\x0e\x6e\x1d\x9d\x61\x01\xd2\x28\x6d\x7e\x04\x0d\x5a\x56\xf2"
    "\x2d\x6e\x3a\xe8\x6b\xd6\xa0\x60\x5c\x8b\x34\xd7\xa3\x85\xfe\xe5"
    "\xf3\xc9\xb6\xd0\xcf\x55\x0f\x7a\xa6\x7f\x33\x8d\x8a\x01\x4d\xfd"
    "\x63\x9c\xad\xe8\x55\xe8\xd2\x5d\xf7\x3e\xa0\x1b\xc5\x63\x5b\xb5"
    "\xe0\x32\x26\x9b\x2a\x10\xf6\xb2\xba\xea\x7c\x4a\x88\xed\xe4\x2c"
    "\xaf\x91\xd7\xc9\xd3\xb2\x80\x26\x08\xfd\xc3\x61\xe2\x3e\xe8\xcd"
    "\xcc\x1c\x95\x4d\xa8\x6f\x92\x9e\x97\x21\x13\x0e\xf6\xd7\x4e\x99"
    "\x18\x0f\x8c\x8c\x22\x63\xb4\x1f\x53\x8e\x10\x5b\xc5\xf4\x11\xf8"
    "\xdd\x1c\x2d\x3e\x0d\xc4\x54\x0f\xf9\xcb\xdb\x9a\x6c\x44\x52\x4e"
    "\xbc\xdf\xe3\x7d\x94\x27\xa4\x3d\xc2\x4f\xd2\x8c\x2f\xc2\x5b\xae"
    "\xf9\x64\x90\xae\x84\x7b\x43\x5e\xf4\xee\xa8\x7d\xb0\x30\x82\x9d"
    "\x06\xb4\xc5\xd9\x27\x1c\x8f\xfd\xa1\x14\xc3\x36\xf5\xd8\x2f\x9e"
    "\x6c\xa0\xd1\x40\x11\x2f\x36\x4b\x16\x13\xcf\xe8\x4c\x6e\x92\x46"
    "\x29\xcb\xa5\x1a\x7d\x21\xf9\x2c\xe2\x68\x02\xbd\xa0\x65\x13\x40"
    "\xa8\xaa\xd0\xc1\xef\x43\x9a\xcc\x55\x52\x63\x43\x04\x32\x1c\xf6"
    "\x02\x85\x17\x51\x63\x0d\x67\x1a\x8c\xce\x70\x28\xf1\xcc\x6f\xdb"
    "\xce\x64\xf7\x62\xc8\xed\x52\x2c\x2a\x81\xc2\x88\x69\x86\x99\x9a"
    "\x85\xd4\x1a\x87\xd2\xba\x52\x81\xdc\xbc\x2d\xbd\x72\x85\x59\x47"
    "\x00\x17\xe1\x2f\xd7\x0a\x97\xa7\x71\xde\x49\x9d\x29\x53\xc4\x9b"
    "\x0e\x60\xab\xac\x5c\xed\x20\x3d\xd2\x6b\xb7\x5d\xf9\x22\x93\x87"
    "\x23\xb1\x34\x1b\xb0\x7b\x02\x50\xd7\xaf\x1b\xf9\x17\x88\x99\x4f"
    "\x8e\xd1\x93\x22\x1d\xd8\x29\xe6\x66\x5b\x11\x47\x63\xe4\x90\xfd"
    "\x84\x82\x95\x5b\x09\x7a\xc3\xb5\xb1\x24\xbf\x92\xae\x8c\xe9\x02"
    "\x18\x97\xb6\x7d\xb8\x20\xcb\xfd\x64\x6f\xe2\xc6\x1e\x63\xba\xa9"
    "\x72\x65\x1a\x47\xbb\x1a\xae\x56\xf5\xe6\x23\xa1\x16\x7b\xef\xf8"
    "\x41\x66\xea\x78\xcc\x98\x54\xb2\x1a\x94\x78\xeb\xf3\xa1\x42\x92"
    "\x26\x21\x3c\x20\xa7\xa9\xce\x80\x31\xec\xed\x50\x8b\x93\x72\x63"
    "\x13\x57\x59\x10\x69\xd5\xc4\x82\xc0\xf6\xf9\x9e\x4a\x60\x84\xf3"
    "\x4f\xda\xb7\xb2\x63\x99\xb4\xef\xcb\x0e\x52\x17\xe4\xe9\x11\x5d"
    "\x0f\x60\x11\xbc\xfe\x55\xe0\xf0\x5d\x3d\x88\x50\xfe\xba\xb0\xa6"
    "\x10\x0b\xab\x81\x42\xa3\x91\x36\x62\xa5\x68\xf9\xd3\x23\x67\xbf"
    "\x5d\xb4\x6b\x65\x72\xcb\x76\xbd\x6a\x49\xd8\x4b\xd5\x67\xe1\xf8"
    "\x34\xbb\xd7\x05\xdd\x39\x5c\x16\x09\xe9\xeb\xa7\xfe\x8b\x9c\x59"
    "\xf1\xc4\xcb\x25\x61\x46\x12\x04\x80\x5c\x25\xa3\x84\x14\x03\x14"
    "\xe5\x15\xf8\x40\x50\x94\x95\x29\x05\x02\x79\x39\x38\x84\xf8\xd0";

static unsigned char SSC_MASTER_KEY[] =
    "\xf5\xc5\x91\x4b\x27\x23\x5d\xc0\xdc\x27\x42\x00\xdd\xd1\x87\xc3"
    "\x2f\xe0\x2a\xed\x5f\xc5\xc0\x79\x51\x8f\x49\x20\x8e\x4c\x55\x48"
    "\xaa\xef\x31\x3c\x5d\x2e\x7c\x91\xdc\x58\x0d\x3c\xd9\xe1\xae\xc5"
    "\x77\x59\x53\x25\xd3\xc5\xc8\x4b\x44\xa0\x20\x80\x2b\xec\xb1\x7e"
    "\x7d\x6b\x6b\x87\xe8\xa4\xeb\xc8\xe4\xca\xfb\xaf\x57\x20\xf9\x60"
    "\x08\x18\xb3\x34\xad\x26\x95\xba\x0f\x19\xe1\xfb\xd4\x8d\x01\x39"
    "\xf0\x5e\x90\x59\xe9\x8a\x15\xc7\x9e\xba\xbb\x4f\x3a\xa8\x03\x9d"
    "\x87\x20\xae\xf2\xbf\x1b\x46\x93\xa6\x7a\x20\xa1\x14\xb8\x50\x5b";



void ssc_decrypt(unsigned char *key, int keylen, unsigned char *data, int datalen) {
    int             i;
    unsigned char   key1[0x80],
                    key2[0x2000],
                    a,
                    d;

    for(i = 0; i < 0x80; i++) {
        key1[i] = key[i % keylen] ^ SSC_MASTER_TABLE[i];
    }
    for(i = 0; i < 0x2000; i++) {
        key2[i] = key1[i % 0x80] ^ SSC_MASTER_TABLE[i];
    }

    for(i = 0; i < datalen; i++) {
        data[i] ^= key2[i % 0x2000];
    }

    d = data[0];
    for(i = 1; i < datalen; i++) {
        a = data[i];
        data[i] ^= d;
        d = a;
    }
}



void ssc_encrypt(unsigned char *key, int keylen, unsigned char *data, int datalen) {
    int             i;
    unsigned char   key1[0x80],
                    key2[0x2000];

    for(i = 0; i < 0x80; i++) {
        key1[i] = key[i % keylen] ^ SSC_MASTER_TABLE[i];
    }
    for(i = 0; i < 0x2000; i++) {
        key2[i] = key1[i % 0x80] ^ SSC_MASTER_TABLE[i];
    }

    for(i = 1; i < datalen; i++) {
        data[i] ^= data[i - 1];
    }

    for(i = 0; i < datalen; i++) {
        data[i] ^= key2[i % 0x2000];
    }
}



unsigned int ascii_calculate_hash(unsigned char *data, int datalen) {
    static const unsigned char mykey[] = "3qa1zra82pft4omb5hs6nj0ew9ctu7dlv";
    unsigned int    crc;
    int     i,
            mykeylen;

    mykeylen = strlen(mykey) + 1;
    crc = 0;
    for(i = 0; i < datalen; i++) {
        crc += mykey[i % mykeylen] ^ data[i];
    }
    return(crc);
}



unsigned int ascii_calculate_key_hash(unsigned char *key, int keylen, unsigned char *data, int datalen) {
    static const unsigned char mykey[] = "3qa1zra82pft4omb5hs6nj0ew9ctu7dlv";
    unsigned int    crc;
    int     i,
            mykeylen;

    mykeylen = strlen(mykey) + 1;
    crc = 0;
    for(i = 0; i < datalen; i++) {
        crc += mykey[i % mykeylen] ^ data[i] ^ key[i % keylen];
    }
    return(crc);
}


