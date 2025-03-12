#pragma once

#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 2

#define VIA_EEPROM_CUSTOM_CONFIG_SIZE 16

#define VIA_EEPROM_CUSTOM_CONFIG_ADDR (VIA_EEPROM_MAGIC_ADDR + VIA_EEPROM_LAYOUT_OPTIONS_SIZE)

#if (VIA_EEPROM_CUSTOM_CONFIG_ADDR + VIA_EEPROM_CUSTOM_CONFIG_SIZE > DYNAMIC_KEYMAP_EEPROM_ADDR)
    #error "EEPROM space allocation conflict! Adjust VIA_EEPROM_CUSTOM_CONFIG_SIZE."
#endif
/* Copyright 2025 World
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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
