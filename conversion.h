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
#ifndef CONVERSION_H
#define CONVERSION_H

#ifndef DEFAULT_BIT_SIZE
    #define DEFAULT_BIT_SIZE 8
#endif

#include <string>

extern std::string convertToBinary( unsigned short bit, int num );
extern unsigned long convertToDecimal( unsigned short bit, std::string num );

#endif // CONVERSION_H
