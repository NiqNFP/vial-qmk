// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

// UID from the user's existing Corne v4 Vial firmware (.vil file)
#define VIAL_KEYBOARD_UID {0x89, 0x36, 0x2A, 0xC7, 0xFA, 0xD8, 0x89, 0x45}

// Unlock combo: hold ESC + Q simultaneously to enable Vial secure features
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

// Match the 6-layer dynamic keymap from the .vil file
#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

// Sync layer state to slave half so RGB indicator works on both sides
#define SPLIT_LAYER_STATE_ENABLE
