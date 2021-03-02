/* 
 * Copyright 2021 Andreas Quandt <axq on GitHub>
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

// Keymap for the Bastyl, a 4x6 variation on the Dactyl Manuform with 5 key thumb clusters for 58 keys total
// The map allows full use of the Bastyl 3x5 with ? thumb keys.  The 3x5 keys are framed by ****************

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Dvorak Base Layer
  [0] = LAYOUT(                                                                                  
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_HOME,
//---------***********************************************//***********************************************----------//
    RESET,   KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,	      KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
//---------**---------------------------------------------//---------------------------------------------**----------//
    TG(1),   KC_A,    KC_O,    KC_E,    KC_U,    KC_I,        KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,
//---------**---------------------------------------------//---------------------------------------------**----------//
    TG(2),  LGUI_T(KC_SCLN),  LALT_T(KC_Q),  LSFT_T(KC_J),  LCTL_T(KC_K),  LT(3, KC_X),
    LT(3, KC_B),  RCTL_T(KC_M),  RSFT_T(KC_W),  LALT_T(KC_V),  RGUI_T(KC_Z),  KC_END,
//---------*******************----------------------------//-----------------------------******************----------//
             LALT(KC_TAB), LT(1, KC_BSPC), LT(2, KC_DEL),     LT(2, KC_ENT), LT(1, KC_SPC), LALT(KC_TAB),
                           LT(4,KC_SPC),   LCTL(KC_TAB),      OSM(MOD_RCTL), LT(4, KC_TAB)
  ),

// Navigation Layer
  [1] = LAYOUT(
    KC_ESC,  _______,    _______,      _______,    _______,  _______,       _______, KC_MS_L,      KC_MS_D,      KC_MS_U,    KC_MS_R,      RESET,
//---------*************************************************************//***************************************************************-------//
    _______, G(KC_LEFT), RCS(KC_PGUP), C(KC_PGUP), KC_PGUP, G(KC_RGHT),     KC_HOME, RCS(KC_LEFT), RCS(KC_DOWN), RCS(KC_UP), RCS(KC_RGHT), _______,
//---------**-----------------------------------------------------------//-------------------------------------------------------------**-------//
    _______, KC_ESC,     RCS(KC_PGDN), C(KC_PGDN), KC_PGDN, KC_TAB,         KC_HOME, KC_LEFT,      KC_DOWN,      KC_UP,      KC_RGHT,      _______,
//---------**-----------------------------------------------------------//-------------------------------------------------------------**-------//
    _______, _______,    _______,      _______,    _______, _______,        KC_END,  C(KC_LEFT),   C(KC_DOWN),   C(KC_UP),   C(KC_RGHT),   _______,
//---------************-------------------------------------------------//------------------------------------***************************-------//
                                             _______, _______, _______,     _______, KC_BTN1, KC_BTN2,
                                                      _______, _______,     _______, _______
  ),

// Right Hand Numpad Layer
  [2] = LAYOUT(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,	  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, RESET,
//---------************************************************************************************************----------//
    _______, _______, _______, _______, _______, _______,	  KC_SLSH, KC_7,    KC_8,    KC_9,    KC_PPLS, _______,
//---------**---------------------------------------------//---------------------------------------------**----------//
    _______, _______, _______, _______, KC_EQL,  _______,	  KC_ASTR, KC_4,    KC_5,    KC_6,    KC_MINS, KC_EQL,
//---------**---------------------------------------------//---------------------------------------------**----------//
    _______, KC_COLN, _______, _______, _______, _______,     KC_0,    KC_1,    KC_2,    KC_3,    KC_DOT,  _______,
//---------*******************----------------------------//-----------------------------******************----------//
                               _______, _______, _______,      _______, _______, KC_0,
                                        _______, _______,      _______, _______
  ),

// Symbol Layer
  [3] = LAYOUT(
    UC(0x00B0), _______,    _______,    UC(0x00A7), _______,    _______,	 _______,    _______, _______, _______, _______,    RESET,
//--°---------**************************§**********************************//***************************************************------//
    _______,    S(KC_LBRC), S(KC_RBRC), KC_LBRC,    KC_RBRC,	_______,     KC_BSLS,    KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,    _______,
//------------**-----------------------------------------------------------//-------------------------------------------------**------//
    _______,    UC(0x00E4), UC(0x00F6), UC(0x20AC), UC(0x00FC), UC(0x00DF),  S(KC_BSLS), KC_DLR,  KC_PERC, KC_CIRC, UC(0x00DF), _______,
//------------**ä-----------ö-----------€-----------ü-----------ß----------//---------------------------------------ß---------**------//
    _______,    _______,    _______,    _______,    _______,    _______,     _______,    KC_EXLM, KC_AT,   KC_HASH, _______,    _______,
//------------*******************------------------------------------------//-----------------------------**********************------//
                               _______, _______, _______,      _______, _______, _______,
                                        _______, _______,      _______, _______
  ),

// Function Layer
  [4] = LAYOUT(
    KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
//----------**3x5********************************************//************************************************-------//
    RGB_MOD,  _______, RGB_HUI, C(KC_Z), C(KC_Y), _______,  	 KC_PSCR, KC_F7,   KC_F8,   KC_F9,   KC_F12,   KC_VOLU,
//----------**-----------------------------------------------//----------------------------------------------**-------//
    RGB_RMOD, KC_APP,  C(KC_X), C(KC_C), C(KC_V), _______,       _______, KC_F4,   KC_F5,   KC_F6,   KC_F11,   KC_VOLD,
//----------**-----------------------------------------------//----------------------------------------------**-------//
    RGB_TOG,  RGB_HUD, RGB_SAI, RGB_SAD, GB_VAI,  RGB_VAD,       _______, KC_F1,   KC_F2,   KC_F3,   KC_F10,   KC_MUTE,
//----------*****************--------------------------------//-------------------------************************-------//
                                _______, _______, _______,       _______, _______, _______,
                                         _______, _______,       _______, _______
  ),
};
