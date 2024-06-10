/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

#include QMK_KEYBOARD_H

// clang-format off
enum layers{
  _LAYER0,
  _LAYER1,
  _LAYER2,
  _LAYER3,
  _LAYER4,
  _LAYER5,
  _LAYER6,
  _LAYER7

};


// Macros named starting with M_
enum custom_keycodes {
    M_BM = SAFE_RANGE,
    M_NEXT,
    M_BM_LST,
    M_TPL,
    M_CS_I,
    M_BM_ADD2,
    M_7,
    M_8,
    M_KVM_UP,
    M_KVM_DN,
    M_KVM_1,
    M_KVM_2,
    M_KVM_3,
    M_KVM_4
};


// Macro processing
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case M_BM: /* Add Bookmark */
        if (record->event.pressed) {

              tap_code(KC_END);
              register_code16(S(KC_HOME));
              unregister_code16(S(KC_HOME));
              register_code16(LCTL(LALT(S( KC_K ))));

//            tap_code(KC_END);
//            register_code(KC_LSFT);
//            tap_code(KC_HOME);
//            unregister_code(KC_LSFT);
//            register_code(KC_LCTL);
//            register_code(KC_LALT);
//            register_code(KC_LSFT);
//            tap_code(KC_K);
//            unregister_code(KC_LCTL);
//            unregister_code(KC_LALT);
//            unregister_code(KC_LSFT);
//            tap_code(KC_DOWN);
//            register_code(KC_LCTL);
//            tap_code(KC_S);
//            unregister_code(KC_LCTL);
//

        } else {
            // when keycode _M_BKMK_ADD is released

              unregister_code16(LCTL(LALT(S( KC_K ))));
              register_code16(LCTL(KC_S));
              unregister_code16(LCTL(KC_S));

//              tap_code(KC_END);
//              tap_code(KC_HOME);
//              tap_code(KC_DOWN);


        }
        break;

   case M_NEXT:
        if (record->event.pressed) {
            // when keycode M_NEXT is pressed
            SEND_STRING("next");
        } else {
            // when keycode M_NEXT is released
        }
        break;

   case M_BM_LST: // Bookmark List
        if (record->event.pressed) {
            // when keycode _M_BKMK_LIST is pressed
            //SEND_STRING("QMK is the best thing ever!");
           register_code16( LCTL(LALT(S( KC_L ))) );

        } else {
            // when keycode _M_BKMK_LIST is released
           unregister_code16( LCTL(LALT(S( KC_L ))) );
        }
        break;

   case M_TPL:
        if (record->event.pressed) {
            // when keycode M_TPL is pressed
            //SEND_STRING("QMK is the best thing ever!");
            //SEND_STRING("TEMPLATE");
//            tap_code(KC_T);
//            tap_code(KC_E);
//            tap_code(KC_M);
//            tap_code(KC_P);
//            tap_code(KC_L);
//            tap_code(KC_A);
//            tap_code(KC_T);
//            tap_code(KC_E);
//          This is still bringing up a windows prompt.
//          Something else is going on
//          It does type 'template' but also hits the windows key.
//
            register_code16(   S( KC_T ) );
            unregister_code16( S( KC_T ) );
            register_code16(   S( KC_E ) );
            unregister_code16( S( KC_E ) );
            register_code16(   S( KC_M ) );
            unregister_code16( S( KC_M ) );
            register_code16(   S( KC_P ) );
            unregister_code16( S( KC_P ) );
            register_code16(   S( KC_L ) );
            unregister_code16( S( KC_L ) );
            register_code16(   S( KC_A ) );
            unregister_code16( S( KC_A ) );
            register_code16(   S( KC_T ) );
            unregister_code16( S( KC_T ) );
            register_code16(   S( KC_E ) );
            unregister_code16( S( KC_E ) );

        } else {
            // when keycode M_TPL is released
        }
        break;

   case M_CS_I: // CTL SFT I is used to Add DateTime in VS-Code
        if (record->event.pressed) {
            // when keycode M_CS_I is pressed
            // SEND_STRING(SS_LCTL(SS_LSFT("I")));
            register_code16(LCTL(S(KC_I)));
//            register_code(KC_RCTL);
//            register_code(KC_RSFT);
//            tap_code(KC_I);
//            unregister_code(KC_RCTL);
//            unregister_code(KC_RSFT);
//
        } else {
            // when keycode M_CS_I is released
            unregister_code16(LCTL(S(KC_I)));

        }
        break;

 case M_BM_ADD2:
        if (record->event.pressed) {
            // when keycode _M_BKMK_ADD2 is pressed
            //SEND_STRING("QMK is the best thing ever!");
        } else {
            // when keycode _M_BKMK_ADD2 is released
        }
        break;

 case M_7:
        if (record->event.pressed) {
            // when keycode M_7 is pressed
            //SEND_STRING("QMK is the best thing ever!");
        } else {
            // when keycode M_7 is released
        }
        break;

 case M_8:
        if (record->event.pressed) {
            // when keycode M_8 is pressed
            //SEND_STRING("QMK is the best thing ever!");
        } else {
            // when keycode M_8 is released
        }
        break;

 case M_KVM_UP:
        if (record->event.pressed) {
            // when keycode M_KVM_UP is pressed
            //SEND_STRING("QMK is the best thing ever!");
            // _M_KVM_UP    Macro 9    "{KC_SCRL}{KC_SCRL}{KC_PGUP}",
           tap_code(KC_SCRL);
           tap_code(KC_SCRL);
           tap_code(KC_PGUP);
        } else {
            // when keycode M_KVM_UP is released
        }
        break;

 case M_KVM_DN:
        if (record->event.pressed) {
            // when keycode M_KVM_DN is pressed
            //SEND_STRING("QMK is the best thing ever!");
            // _M_KVM_DN    Macro 10   "{KC_SCRL}{KC_SCRL}{KC_PGDN}",
           tap_code(KC_SCRL);
           tap_code(KC_SCRL);
           tap_code(KC_PGDN);
        } else {
            // when keycode M_KVM_DN is released
        }
        break;

 case M_KVM_1:
        if (record->event.pressed) {
            // when keycode M_KVM_1 is pressed
            //SEND_STRING("QMK is the best thing ever!");
           //  _M_KVM_1     Macro 11   "{KC_SCRL}{KC_SCRL}1",
           tap_code(KC_SCRL);
           tap_code(KC_SCRL);
           tap_code(KC_1);
        } else {
            // when keycode M_KVM_1 is released
        }
        break;

case M_KVM_2:
        if (record->event.pressed) {
            // when keycode M_KVM_2 is pressed
            //SEND_STRING("QMK is the best thing ever!");
           tap_code(KC_SCRL);
           tap_code(KC_SCRL);
           tap_code(KC_2);
        } else {
            // when keycode M_KVM_2 is released
        }
        break;

case M_KVM_3:
        if (record->event.pressed) {
            // when keycode M_KVM_3 is pressed
            //SEND_STRING("QMK is the best thing ever!");
           tap_code(KC_SCRL);
           tap_code(KC_SCRL);
           tap_code(KC_3);
        } else {
            // when keycode M_KVM_3 is released
        }
        break;

case M_KVM_4:
        if (record->event.pressed) {
            // when keycode M_KVM_4 is pressed
            //SEND_STRING("QMK is the best thing ever!");
           tap_code(KC_SCRL);
           tap_code(KC_SCRL);
           tap_code(KC_4);
        } else {
            // when keycode M_KVM_4 is released
        }

    } // switch

    return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//[_LAYER0] = LAYOUT_tkl_ansi(
//     KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,           KC_SNAP,   KC_SIRI,  RGB_MOD,
//     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, KC_INS,    KC_HOME,  KC_PGUP,
//     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS, KC_DEL,    KC_END,   KC_PGDN,
//     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
//     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,
//     KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, KC_ROPTN, MO(1),    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),
//
//[_LAYER1] = LAYOUT_tkl_ansi(
//     _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             _______,  _______,  RGB_TOG,
//     _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
//     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
//     _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
//     _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,            _______,
//     _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),
//


//Test layer with wider spacing. 14 characters per column.
[_LAYER0] = LAYOUT_tkl_ansi(
     KC_ESC,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,                         KC_PSCR,        MO(1),          RGB_MOD,
     KC_GRV,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINS,        KC_EQL,         KC_BSPC,        KC_INS,         KC_HOME,        KC_PGUP,
     KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        KC_RBRC,        KC_BSLS,        KC_DEL,         KC_END,         KC_PGDN,
     LT(7,KC_CAPS),  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,                        KC_ENT,
     KC_LSFT,                        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,                        KC_RSFT,                        KC_UP,
     KC_LCTL,        KC_LGUI,        KC_LALT,                                                        LT(1,KC_SPC),                                                   KC_RALT,        KC_RGUI,        MO(1),          KC_RCTL,        KC_LEFT,        KC_DOWN,        KC_RGHT),

//
[_LAYER1] = LAYOUT_tkl_ansi(
     _______,        KC_BRID,        KC_BRIU,        KC_TASK,        KC_FILE,        RGB_VAD,        RGB_VAI,        KC_MPRV,        KC_MPLY,        KC_MNXT,        KC_MUTE,        KC_VOLD,        KC_VOLU,                        RGB_TOG,        _______,        RGB_TOG,
     _______,        BT_HST1,        BT_HST2,        BT_HST3,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        M_KVM_1,        M_KVM_2,        M_KVM_UP,
     KC_F5,          KC_F6,          KC_F7,          KC_F8,          RGB_SAI,        M_TPL,          _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        M_KVM_3,        M_KVM_4,        M_KVM_DN,
     _______,        RGB_RMOD,       RGB_VAD,        M_CS_I,         RGB_SAD,        RGB_SPD,        _______,        _______,        M_BM,           M_BM_LST,       _______,        _______,                        _______,
     _______,                        _______,        RGB_HUD,        _______,        _______,        BAT_LVL,        M_NEXT,         _______,        _______,        _______,        _______,                        _______,                        _______,
     _______,        _______,        _______,                                                        _______,                                                        _______,        _______,        _______,        _______,        _______,        _______,        _______),

[_LAYER2] = LAYOUT_tkl_ansi(
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,
     _______,                        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,                        _______,
     _______,        _______,        _______,                                                        _______,                                                        _______,        _______,        _______,        _______,        _______,        _______,        _______),


// Original Win Layer
//[_LAYER2] = LAYOUT_tkl_ansi(
//     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             KC_PSCR,   MO(3),    RGB_MOD,
//     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,    KC_HOME,  KC_PGUP,
//     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,    KC_END,   KC_PGDN,
//     _______,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
//     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,             KC_UP,
//     KC_LCTL,  KC_LGUI,  KC_LALT,                                LT(3,KC_SPC),                           KC_RALT,  KC_RGUI,  MO(3),    KC_RCTL,  KC_LEFT,   KC_DOWN,  KC_RGHT),
//
//

//[_LAYER3] = LAYOUT_tkl_ansi(
//     _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,            RGB_TOG,  _______,  RGB_TOG,
//     _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  M_KVM_1,  M_KVM_2,  M_KVM_UP,
//     KC_F5,    KC_F6,    KC_F7,    KC_F8,    RGB_SAI,  M_TPL,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  M_KVM_3,  M_KVM_4,  M_KVM_DN,
//     _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  M_BM,     M_BM_LST, _______,  _______,            _______,
//     _______,            _______,  _______,  _______,  _______,  BAT_LVL,  M_NEXT,   _______,  _______,  _______,  _______,            _______,            _______,
//     _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),
//
//// Layer 4 - All transparent for now.
//[_LAYER4] = LAYOUT_tkl_ansi(
//     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
//     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,   _______,  _______,  _______,
//     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,   _______,  _______,  _______,
//     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,           _______,
//     _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,           _______,             _______,
//     _______,  _______,  _______,                                _______,                                _______,  _______,  _______, _______,   _______,  _______,  _______)
//
//


[_LAYER3] = LAYOUT_tkl_ansi(
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,
     _______,                        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,                        _______,
     _______,        _______,        _______,                                                        _______,                                                        _______,        _______,        _______,        _______,        _______,        _______,        _______),


[_LAYER4] = LAYOUT_tkl_ansi(
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,
     _______,                        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,                        _______,
     _______,        _______,        _______,                                                        _______,                                                        _______,        _______,        _______,        _______,        _______,        _______,        _______),


[_LAYER5] = LAYOUT_tkl_ansi(
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,
     _______,                        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,                        _______,
     _______,        _______,        _______,                                                        _______,                                                        _______,        _______,        _______,        _______,        _______,        _______,        _______),


[_LAYER6] = LAYOUT_tkl_ansi(
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,
     _______,                        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,                        _______,
     _______,        _______,        _______,                                                        _______,                                                        _______,        _______,        _______,        _______,        _______,        _______,        _______),


[_LAYER7] = LAYOUT_tkl_ansi(
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        _______,        _______,        _______,        _______,        KC_F2,          _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
     _______,        _______,        _______,        M_CS_I,         _______,        _______,        KC_F5,          KC_F7,          KC_F8,          KC_F6,          _______,        _______,                        _______,
     _______,                        _______,        _______,        _______,        _______,        _______,        KC_F3,          _______,        _______,        _______,        _______,                        _______,                        NK_ON,
     _______,        _______,        _______,                                                        _______,                                                        _______,        _______,        _______,        _______,        NK_TOGG,        NK_OFF,         NK_TOGG)


//[_LAYER7] = LAYOUT_tkl_ansi(
//     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
//     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,   _______,  _______,  _______,
//     _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_F2,    _______,  _______,  _______,  _______,  _______, _______,   _______,  _______,  _______,
//     _______,  _______,  _______,  M_CS_I,   _______,  _______,  KC_F5,    KC_F7,    KC_F8,    KC_F6,    _______,  _______,           _______,
//     _______,            _______,  _______,  _______,  _______,  _______,  KC_F3,    _______,  _______,  _______,  _______,           _______,             _______,
//     _______,  _______,  _______,                                _______,                                _______,  _______,  _______, _______,   _______,  _______,  _______)


};


