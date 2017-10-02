/*
* Binary-Decimal Converter - Simple tool that can convert binary numbers to decimal and back.
* Copyright (C) 2017 AHXR
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
//-----------------------------------------------------------------
#include "conversion.h"
#include <bitset>

using namespace std;

string convertToBinary( unsigned short bit, int num ) {
    /*
     * Bitset has a template parameter which means that it must have
     * compile-time constants. With that being said, I had to unfortunately
     * use a switch statement here.
    */

    string
            s_bin;

    switch( bit ) {
        case 8: {
            s_bin = bitset<8>(num).to_string();
            break;
        }
        case 16: {
            s_bin = bitset<16>(num).to_string();
            break;
        }
        case 32: {
           s_bin = bitset<32>(num).to_string();
           break;
        }
        case 64: {
           s_bin = bitset<64>(num).to_string();
           break;
        }
        case 128: {
           s_bin = bitset<128>(num).to_string();
           break;
        }
        case 256: {
           s_bin = bitset<256>(num).to_string();
           break;
        }
        default: {
           s_bin = bitset<DEFAULT_BIT_SIZE>(num).to_string();
           break;
        }
    }
    return s_bin;
}

unsigned long convertToDecimal( unsigned short bit, string num ) {
    unsigned long
            d_val;

    switch( bit ) {
        case 8: {
            d_val = bitset<8>(num).to_ulong();
            break;
        }
        case 16: {
            d_val = bitset<16>(num).to_ulong();
            break;
        }
        case 32: {
           d_val = bitset<32>(num).to_ulong();
           break;
        }
        case 64: {
           d_val = bitset<64>(num).to_ulong();
           break;
        }
        case 128: {
           d_val = bitset<128>(num).to_ulong();
           break;
        }
        case 256: {
           d_val = bitset<256>(num).to_ulong();
           break;
        }
        default: {
           d_val = bitset<DEFAULT_BIT_SIZE>(num).to_ulong();
           break;
        }
    }
    return d_val;
}
