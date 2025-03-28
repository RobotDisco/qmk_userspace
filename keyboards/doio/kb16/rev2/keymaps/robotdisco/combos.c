/*
 * Copyright (C) 2024 Greg Leo
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Originally from:
 * https://github.com/artseyio/qmk-artsey/blob/main/Firmware%20Files/Version%200.8.1/Right%20Hand/combos.c
 */

enum combo_events{
COMBO_BASE_2_1_BASE_2_3,
COMBO_BASE_1_1_BASE_1_3_BASE_1_4,
COMBO_BASE_2_2_BASE_2_3,
COMBO_BASE_2_1_BASE_2_2,
COMBO_BASE_2_2_BASE_2_4,
COMBO_BASE_2_1_BASE_2_4,
COMBO_BASE_1_1_BASE_1_4,
COMBO_BASE_2_3_BASE_2_4,
COMBO_BASE_1_1_BASE_1_2,
COMBO_BASE_1_2_BASE_1_3_BASE_1_4,
COMBO_BASE_1_3_BASE_1_4,
COMBO_BASE_2_2_BASE_2_3_BASE_2_4,
COMBO_BASE_2_1_BASE_2_3_BASE_2_4,
COMBO_BASE_1_2_BASE_1_4,
COMBO_BASE_2_1_BASE_2_2_BASE_2_3,
COMBO_BASE_1_1_BASE_1_2_BASE_1_3_BASE_1_4,
COMBO_BASE_1_1_BASE_1_2_BASE_1_3,
COMBO_BASE_1_2_BASE_1_3,
COMBO_BASE_2_1_BASE_2_2_BASE_2_3_BASE_2_4,
COMBO_BASE_2_1_BASE_1_2,
COMBO_BASE_1_2_BASE_2_3,
COMBO_BASE_1_1_BASE_2_1,
COMBO_BASE_1_1_BASE_1_2_BASE_2_4,
COMBO_BASE_1_1_BASE_2_2_BASE_2_3,
COMBO_BASE_1_1_BASE_2_3,
COMBO_BASE_1_1_BASE_2_2,
COMBO_BASE_1_1_BASE_2_4,
COMBO_BASE_1_1_BASE_1_2_BASE_1_3_BASE_2_4,
COMBO_BASE_2_1_BASE_1_2_BASE_1_3_BASE_1_4,
COMBO_BASE_1_4_BASE_2_1,
COMBO_BASE_1_4_BASE_2_2,
COMBO_BASE_1_4_BASE_2_3,
COMBO_BASE_1_2_BASE_2_2,
COMBO_BASE_1_3_BASE_2_3,
COMBO_NAV_1_2_NAV_2_2,
COMBO_BASE_1_2_BASE_2_1_BASE_2_3,
COMBO_NAV_1_2_NAV_2_1_NAV_2_3,
COMBO_BASE_1_1_BASE_1_3_BASE_2_2,
COMBO_MOU_1_1_MOU_1_3_MOU_2_2,
COMBO_NUM_1_1_NUM_1_2,
COMBO_NUM_1_2_NUM_1_3,
COMBO_NUM_2_1_NUM_2_2,
COMBO_NUM_2_2_NUM_2_3,
COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM combo_base_2_1_base_2_3[] = {BASE_2_1,BASE_2_3,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_3_base_1_4[] = {BASE_1_1,BASE_1_3,BASE_1_4,COMBO_END};
const uint16_t PROGMEM combo_base_2_2_base_2_3[] = {BASE_2_2,BASE_2_3,COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_2_2[] = {BASE_2_1,BASE_2_2,COMBO_END};
const uint16_t PROGMEM combo_base_2_2_base_2_4[] = {BASE_2_2,BASE_2_4,COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_2_4[] = {BASE_2_1,BASE_2_4,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_4[] = {BASE_1_1,BASE_1_4,COMBO_END};
const uint16_t PROGMEM combo_base_2_3_base_2_4[] = {BASE_2_3,BASE_2_4,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_2[] = {BASE_1_1,BASE_1_2,COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_1_3_base_1_4[] = {BASE_1_2,BASE_1_3,BASE_1_4,COMBO_END};
const uint16_t PROGMEM combo_base_1_3_base_1_4[] = {BASE_1_3,BASE_1_4,COMBO_END};
const uint16_t PROGMEM combo_base_2_2_base_2_3_base_2_4[] = {BASE_2_2,BASE_2_3,BASE_2_4,COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_2_3_base_2_4[] = {BASE_2_1,BASE_2_3,BASE_2_4,COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_1_4[] = {BASE_1_2,BASE_1_4,COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_2_2_base_2_3[] = {BASE_2_1,BASE_2_2,BASE_2_3,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_2_base_1_3_base_1_4[] = {BASE_1_1,BASE_1_2,BASE_1_3,BASE_1_4,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_2_base_1_3[] = {BASE_1_1,BASE_1_2,BASE_1_3,COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_1_3[] = {BASE_1_2,BASE_1_3,COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_2_2_base_2_3_base_2_4[] = {BASE_2_1,BASE_2_2,BASE_2_3,BASE_2_4,COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_1_2[] = {BASE_2_1,BASE_1_2,COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_2_3[] = {BASE_1_2,BASE_2_3,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_2_1[] = {BASE_1_1,BASE_2_1,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_2_base_2_4[] = {BASE_1_1,BASE_1_2,BASE_2_4,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_2_2_base_2_3[] = {BASE_1_1,BASE_2_2,BASE_2_3,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_2_3[] = {BASE_1_1,BASE_2_3,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_2_2[] = {BASE_1_1,BASE_2_2,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_2_4[] = {BASE_1_1,BASE_2_4,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_2_base_1_3_base_2_4[] = {BASE_1_1,BASE_1_2,BASE_1_3,BASE_2_4,COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_1_2_base_1_3_base_1_4[] = {BASE_2_1,BASE_1_2,BASE_1_3,BASE_1_4,COMBO_END};
const uint16_t PROGMEM combo_base_1_4_base_2_1[] = {BASE_1_4,BASE_2_1,COMBO_END};
const uint16_t PROGMEM combo_base_1_4_base_2_2[] = {BASE_1_4,BASE_2_2,COMBO_END};
const uint16_t PROGMEM combo_base_1_4_base_2_3[] = {BASE_1_4,BASE_2_3,COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_2_2[] = {BASE_1_2,BASE_2_2,COMBO_END};
const uint16_t PROGMEM combo_base_1_3_base_2_3[] = {BASE_1_3,BASE_2_3,COMBO_END};
const uint16_t PROGMEM combo_nav_1_2_nav_2_2[] = {NAV_1_2,NAV_2_2,COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_2_1_base_2_3[] = {BASE_1_2,BASE_2_1,BASE_2_3,COMBO_END};
const uint16_t PROGMEM combo_nav_1_2_nav_2_1_nav_2_3[] = {NAV_1_2,NAV_2_1,NAV_2_3,COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_3_base_2_2[] = {BASE_1_1,BASE_1_3,BASE_2_2,COMBO_END};
const uint16_t PROGMEM combo_mou_1_1_mou_1_3_mou_2_2[] = {MOU_1_1,MOU_1_3,MOU_2_2,COMBO_END};
const uint16_t PROGMEM combo_num_1_1_num_1_2[] = {NUM_1_1,NUM_1_2,COMBO_END};
const uint16_t PROGMEM combo_num_1_2_num_1_3[] = {NUM_1_2,NUM_1_3,COMBO_END};
const uint16_t PROGMEM combo_num_2_1_num_2_2[] = {NUM_2_1,NUM_2_2,COMBO_END};
const uint16_t PROGMEM combo_num_2_2_num_2_3[] = {NUM_2_2,NUM_2_3,COMBO_END};
combo_t key_combos[] = {
[COMBO_BASE_2_1_BASE_2_3] = COMBO_ACTION(combo_base_2_1_base_2_3),
[COMBO_BASE_1_1_BASE_1_3_BASE_1_4] = COMBO_ACTION(combo_base_1_1_base_1_3_base_1_4),
[COMBO_BASE_2_2_BASE_2_3] = COMBO_ACTION(combo_base_2_2_base_2_3),
[COMBO_BASE_2_1_BASE_2_2] = COMBO_ACTION(combo_base_2_1_base_2_2),
[COMBO_BASE_2_2_BASE_2_4] = COMBO_ACTION(combo_base_2_2_base_2_4),
[COMBO_BASE_2_1_BASE_2_4] = COMBO_ACTION(combo_base_2_1_base_2_4),
[COMBO_BASE_1_1_BASE_1_4] = COMBO_ACTION(combo_base_1_1_base_1_4),
[COMBO_BASE_2_3_BASE_2_4] = COMBO_ACTION(combo_base_2_3_base_2_4),
[COMBO_BASE_1_1_BASE_1_2] = COMBO_ACTION(combo_base_1_1_base_1_2),
[COMBO_BASE_1_2_BASE_1_3_BASE_1_4] = COMBO_ACTION(combo_base_1_2_base_1_3_base_1_4),
[COMBO_BASE_1_3_BASE_1_4] = COMBO_ACTION(combo_base_1_3_base_1_4),
[COMBO_BASE_2_2_BASE_2_3_BASE_2_4] = COMBO_ACTION(combo_base_2_2_base_2_3_base_2_4),
[COMBO_BASE_2_1_BASE_2_3_BASE_2_4] = COMBO_ACTION(combo_base_2_1_base_2_3_base_2_4),
[COMBO_BASE_1_2_BASE_1_4] = COMBO_ACTION(combo_base_1_2_base_1_4),
[COMBO_BASE_2_1_BASE_2_2_BASE_2_3] = COMBO_ACTION(combo_base_2_1_base_2_2_base_2_3),
[COMBO_BASE_1_1_BASE_1_2_BASE_1_3_BASE_1_4] = COMBO_ACTION(combo_base_1_1_base_1_2_base_1_3_base_1_4),
[COMBO_BASE_1_1_BASE_1_2_BASE_1_3] = COMBO_ACTION(combo_base_1_1_base_1_2_base_1_3),
[COMBO_BASE_1_2_BASE_1_3] = COMBO_ACTION(combo_base_1_2_base_1_3),
[COMBO_BASE_2_1_BASE_2_2_BASE_2_3_BASE_2_4] = COMBO_ACTION(combo_base_2_1_base_2_2_base_2_3_base_2_4),
[COMBO_BASE_2_1_BASE_1_2] = COMBO_ACTION(combo_base_2_1_base_1_2),
[COMBO_BASE_1_2_BASE_2_3] = COMBO_ACTION(combo_base_1_2_base_2_3),
[COMBO_BASE_1_1_BASE_2_1] = COMBO_ACTION(combo_base_1_1_base_2_1),
[COMBO_BASE_1_1_BASE_1_2_BASE_2_4] = COMBO_ACTION(combo_base_1_1_base_1_2_base_2_4),
[COMBO_BASE_1_1_BASE_2_2_BASE_2_3] = COMBO_ACTION(combo_base_1_1_base_2_2_base_2_3),
[COMBO_BASE_1_1_BASE_2_3] = COMBO_ACTION(combo_base_1_1_base_2_3),
[COMBO_BASE_1_1_BASE_2_2] = COMBO_ACTION(combo_base_1_1_base_2_2),
[COMBO_BASE_1_1_BASE_2_4] = COMBO_ACTION(combo_base_1_1_base_2_4),
[COMBO_BASE_1_1_BASE_1_2_BASE_1_3_BASE_2_4] = COMBO_ACTION(combo_base_1_1_base_1_2_base_1_3_base_2_4),
[COMBO_BASE_2_1_BASE_1_2_BASE_1_3_BASE_1_4] = COMBO_ACTION(combo_base_2_1_base_1_2_base_1_3_base_1_4),
[COMBO_BASE_1_4_BASE_2_1] = COMBO_ACTION(combo_base_1_4_base_2_1),
[COMBO_BASE_1_4_BASE_2_2] = COMBO_ACTION(combo_base_1_4_base_2_2),
[COMBO_BASE_1_4_BASE_2_3] = COMBO_ACTION(combo_base_1_4_base_2_3),
[COMBO_BASE_1_2_BASE_2_2] = COMBO_ACTION(combo_base_1_2_base_2_2),
[COMBO_BASE_1_3_BASE_2_3] = COMBO_ACTION(combo_base_1_3_base_2_3),
[COMBO_NAV_1_2_NAV_2_2] = COMBO_ACTION(combo_nav_1_2_nav_2_2),
[COMBO_BASE_1_2_BASE_2_1_BASE_2_3] = COMBO_ACTION(combo_base_1_2_base_2_1_base_2_3),
[COMBO_NAV_1_2_NAV_2_1_NAV_2_3] = COMBO_ACTION(combo_nav_1_2_nav_2_1_nav_2_3),
[COMBO_BASE_1_1_BASE_1_3_BASE_2_2] = COMBO_ACTION(combo_base_1_1_base_1_3_base_2_2),
[COMBO_MOU_1_1_MOU_1_3_MOU_2_2] = COMBO_ACTION(combo_mou_1_1_mou_1_3_mou_2_2),
[COMBO_NUM_1_1_NUM_1_2] = COMBO_ACTION(combo_num_1_1_num_1_2),
[COMBO_NUM_1_2_NUM_1_3] = COMBO_ACTION(combo_num_1_2_num_1_3),
[COMBO_NUM_2_1_NUM_2_2] = COMBO_ACTION(combo_num_2_1_num_2_2),
[COMBO_NUM_2_2_NUM_2_3] = COMBO_ACTION(combo_num_2_2_num_2_3),
};
void process_combo_event(uint16_t combo_index, bool pressed) {
switch(combo_index) {
case COMBO_BASE_2_1_BASE_2_3:
if (pressed) {SEND_STRING("h");}
break;
case COMBO_BASE_1_1_BASE_1_3_BASE_1_4:
if (pressed) {SEND_STRING("q");}
break;
case COMBO_BASE_2_2_BASE_2_3:
if (pressed) {SEND_STRING("u");}
break;
case COMBO_BASE_2_1_BASE_2_2:
if (pressed) {SEND_STRING("c");}
break;
case COMBO_BASE_2_2_BASE_2_4:
if (pressed) {SEND_STRING("k");}
break;
case COMBO_BASE_2_1_BASE_2_4:
if (pressed) {SEND_STRING("b");}
break;
case COMBO_BASE_1_1_BASE_1_4:
if (pressed) {SEND_STRING("w");}
break;
case COMBO_BASE_2_3_BASE_2_4:
if (pressed) {SEND_STRING("n");}
break;
case COMBO_BASE_1_1_BASE_1_2:
if (pressed) {SEND_STRING("f");}
break;
case COMBO_BASE_1_2_BASE_1_3_BASE_1_4:
if (pressed) {SEND_STRING("x");}
break;
case COMBO_BASE_1_3_BASE_1_4:
if (pressed) {SEND_STRING("j");}
break;
case COMBO_BASE_2_2_BASE_2_3_BASE_2_4:
if (pressed) {SEND_STRING("m");}
break;
case COMBO_BASE_2_1_BASE_2_3_BASE_2_4:
if (pressed) {SEND_STRING("p");}
break;
case COMBO_BASE_1_2_BASE_1_4:
if (pressed) {SEND_STRING("v");}
break;
case COMBO_BASE_2_1_BASE_2_2_BASE_2_3:
if (pressed) {SEND_STRING("l");}
break;
case COMBO_BASE_1_1_BASE_1_2_BASE_1_3_BASE_1_4:
if (pressed) {SEND_STRING("z");}
break;
case COMBO_BASE_1_1_BASE_1_2_BASE_1_3:
if (pressed) {SEND_STRING("d");}
break;
case COMBO_BASE_1_2_BASE_1_3:
if (pressed) {SEND_STRING("g");}
break;
case COMBO_BASE_2_1_BASE_2_2_BASE_2_3_BASE_2_4:
if (pressed) {SEND_STRING(" ");}
break;
case COMBO_BASE_2_1_BASE_1_2:
if (pressed) {SEND_STRING(SS_TAP(X_BSPC));}
break;
case COMBO_BASE_1_2_BASE_2_3:
if (pressed) {SEND_STRING(SS_TAP(X_DEL));}
break;
case COMBO_BASE_1_1_BASE_2_1:
if (pressed) {SEND_STRING(SS_TAP(X_ENTER));}
break;
case COMBO_BASE_1_1_BASE_1_2_BASE_2_4:
if (pressed) {SEND_STRING(SS_TAP(X_ESC));}
break;
case COMBO_BASE_1_1_BASE_2_2_BASE_2_3:
if (pressed) {SEND_STRING("'");}
break;
case COMBO_BASE_1_1_BASE_2_3:
if (pressed) {SEND_STRING(".");}
break;
case COMBO_BASE_1_1_BASE_2_2:
if (pressed) {SEND_STRING(",");}
break;
case COMBO_BASE_1_1_BASE_2_4:
if (pressed) {SEND_STRING("/");}
break;
case COMBO_BASE_1_1_BASE_1_2_BASE_1_3_BASE_2_4:
if (pressed) {SEND_STRING(SS_TAP(X_TAB));}
break;
case COMBO_BASE_2_1_BASE_1_2_BASE_1_3_BASE_1_4:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LSFT));}
break;
case COMBO_BASE_1_4_BASE_2_1:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LCTL));}
break;
case COMBO_BASE_1_4_BASE_2_2:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LGUI));}
break;
case COMBO_BASE_1_4_BASE_2_3:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LALT));}
break;
case COMBO_BASE_1_2_BASE_2_2:
if (pressed) {
 if (get_mods() & MOD_MASK_SHIFT){
 del_mods(MOD_MASK_SHIFT);;
 } else {
 add_mods(MOD_MASK_SHIFT); } ;}
break;
case COMBO_BASE_1_3_BASE_2_3:
if (pressed) {SEND_STRING("!");}
break;
case COMBO_NAV_1_2_NAV_2_2:
if (pressed) {
 if (get_mods() & MOD_MASK_SHIFT){
 del_mods(MOD_MASK_SHIFT);;
 } else {
 add_mods(MOD_MASK_SHIFT); } ;}
break;
case COMBO_BASE_1_2_BASE_2_1_BASE_2_3:
if (pressed) {layer_move(_ART_NAV);}
break;
case COMBO_NAV_1_2_NAV_2_1_NAV_2_3:
if (pressed) {layer_move(_ART_BASE);}
break;
case COMBO_BASE_1_1_BASE_1_3_BASE_2_2:
if (pressed) {layer_move(_ART_MOU);}
break;
case COMBO_MOU_1_1_MOU_1_3_MOU_2_2:
if (pressed) {layer_move(_ART_BASE);}
break;
case COMBO_NUM_1_1_NUM_1_2:
if (pressed) {SEND_STRING("7");}
break;
case COMBO_NUM_1_2_NUM_1_3:
if (pressed) {SEND_STRING("8");}
break;
case COMBO_NUM_2_1_NUM_2_2:
if (pressed) {SEND_STRING("9");}
break;
case COMBO_NUM_2_2_NUM_2_3:
if (pressed) {SEND_STRING("0");}
break;
}
}
