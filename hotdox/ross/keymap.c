#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0
    [0] = LAYOUT_ergodox(
        // Left hand
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_HOME,
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_LBRC, 
        MO(1),      KC_A,       KC_S,       KC_D,       KC_F,       KC_G,   
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_NUBS, 
        KC_LCTL,    KC_LGUI,    KC_NO,      KC_NO,      KC_LALT,    

                                                                    KC_NO,      KC_NO,      KC_NO,      KC_SPC,     KC_BSPC,    KC_NO, 
                                                        
       // Right hand                                                 
       KC_END,      KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC, 
       KC_RBRC,     KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_MINS, 
                    KC_H,       KC_J,       KC_K,       KC_L,       KC_QUOT,    KC_SCLN, 
       KC_NUHS,     KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT, 
                    KC_SLSH,    KC_EQL,     KC_NO,      KC_NO,      KC_NO,     

                                                                    KC_PSCR,    KC_MPLY,    KC_NO,      KC_NO,      KC_ENT,     KC_SPC
    ),
    // Layer 1
    [1] = LAYOUT_ergodox(
        // Left hand
        KC_GRV,     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
        KC_NO,      KC_PGUP,    KC_UP,      KC_PGUP,    KC_VOLU,    KC_NO,      KC_NO, 
        KC_TRNS,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_MUTE,    KC_NO,      
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_VOLD,    KC_NO,      KC_NO, 
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      
                                                                    
                                                                    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
                                                                    
        // Right hand
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
                    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
                    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
 
                                                                    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO
                                                                    
    )
};
