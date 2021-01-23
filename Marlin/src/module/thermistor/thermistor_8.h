/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
//ACT cheap chinese glass thermistor
// R25 = 100 kOhm, beta25 = 4700 K, 4.7 kOhm pull-up, NTCS0603E3104FHT   Ahmet Cem TURAN aka ACTion68  Cheap Chinese Thermistor No Name
const temp_entry_t temptable_8[] PROGMEM = {
{OV(15),315},
{OV(19),310},
{OV(22),305},
{OV(25),300},
{OV(29),295},
{OV(32),290},
{OV(35),285},
{OV(39),280},
{OV(42),275},
{OV(44),270},
{OV(48),265},
{OV(51),260},
{OV(52),255},
{OV(60),250},
{OV(65),245},
{OV(71),240},
{OV(78),235},
{OV(83),230},
{OV(90),225},
{OV(99),220},
{OV(107),215},
{OV(118),210},
{OV(127),205},
{OV(139),200},
{OV(152),195},
{OV(166),190},
{OV(179),185},
{OV(196),180},
{OV(213),175},
{OV(233),170},
{OV(253),165},
{OV(278),160},
{OV(299),155},
{OV(322),150},
{OV(351),145},
{OV(381),140},
{OV(408),135},
{OV(441),130},
{OV(474),125},
{OV(504),120},
{OV(538),115},
{OV(571),110},
{OV(606),105},
{OV(642),100},
{OV(674),95},
{OV(705),90},
{OV(738),85},
{OV(769),80},
{OV(796),75},
{OV(821),70},
{OV(846),65},
{OV(868),60},
{OV(889),55},
{OV(908),50},
{OV(924),45},
{OV(939),40},
{OV(950),34},
{OV(963),30},
{OV(977),25},
{OV(986),20},
{OV(993),15},
{OV(1001),10},
{OV(1005),6},
{OV(1009),0},

};
