#include "quantum.h"

#define LAYOUT( \
	K000,       K002, K003, K004, K005,       K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, K017, K018,                         \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K115, K116, K117, K118, K119, K120, K121, K122, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213,       K215, K216, K217, K218, K219, K220, K221,       \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312,                               K318, K319, K320,             \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411,       K413,             K416,       K418, K419, K420, K421,       \
	K500, K501, K502,                   K506,                         K511, K512, K513, K514, K515, K516, K517, K518,       K520  \
) { \
	{ K000,  KC_NO, K002,  K003,  K004,  K005,  KC_NO, K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016,  K017,  K018,  KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  KC_NO, K115,  K116,  K117,  K118,  K119,  K120,  K121,  K122 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  KC_NO, K215,  K216,  K217,  K218,  K219,  K220,  K221,  KC_NO }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K318,  K319,  K320,  KC_NO, KC_NO }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  KC_NO, K413,  KC_NO, KC_NO, K416,  KC_NO, K418,  K419,  K420,  K421,  KC_NO }, \
	{ K500,  K501,  K502,  KC_NO, KC_NO, KC_NO, K506,  KC_NO, KC_NO, KC_NO, KC_NO, K511,  K512,  K513,  K514,  K515,  K516,  K517,  K518,  KC_NO, K520,  KC_NO, KC_NO }  \
}



/*#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H,           K0K, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D,                K3H, K3I, K3J, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4D, K4E,      K4F,      K4H, K4I, K4J, K4K, \
    K50, K51, K53,                K56,                K5A, K5B, K5D, K5E,      K5F,      K5H,      K5J, K5K \
) \
{ \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D,   K0E,   K0F,   K0G,   K0H,   KC_NO, KC_NO, K0K,}, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D,   K1E,   K1F,   K1G,   K1H,   K1I,   K1J,   K1K }, \
    { K20,   KC_NO, K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   K2E,   K2F,   K2G,   K2H,   K2I,   K2J,   K2K, }, \
    { K30,   KC_NO, K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   K3B,   K3C,   K3D,   KC_NO, KC_NO, KC_NO, K3H,   K3I,   K3J,    KC_NO,}, \
    { K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47,   K48,   K49,   K4A,   K4B,   K4D,   K4E,   KC_NO, K4F,   KC_NO, K4H,   K4I,   K4J,   K4K }, \
    { K50,   K51,   K53,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K56,   KC_NO, K5A,   K5B,   K5D,   K5E,   KC_NO, K5F,   KC_NO, K5H,   KC_NO, K5J,   K5K }  \
}

#endif*/

/*#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H,           K0K, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D,                K3H, K3I, K3J, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4D, K4E,      K4F,      K4H, K4I, K4J, K4K, \
    K50, K51, K53,                K56,                K5A, K5B, K5D, K5E,      K5F,      K5H,      K5J, K5K \
) \
{ \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D,   K0E,   K0F,   K0G,   K0H,   KC_NO, KC_NO, K0K,}, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D,   K1E,   K1F,   K1G,   K1H,   K1I,   K1J,   K1K }, \
    { K20,   KC_NO, K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   K2E,   K2F,   K2G,   K2H,   K2I,   K2J,   K2K, }, \
    { K30,   KC_NO, K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   K3B,   K3C,   K3D,   KC_NO, KC_NO, KC_NO, K3H,   K3I,   K3J,    KC_NO,}, \
    { K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47,   K48,   K49,   K4A,   K4B,   K4D,   K4E,   KC_NO, K4F,   KC_NO, K4H,   K4I,   K4J,   K4K }, \
    { K50,   K51,   K53,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K56,   KC_NO, K5A,   K5B,   K5D,   K5E,   KC_NO, K5F,   KC_NO, K5H,   KC_NO, K5J,   K5K }  \
}
*/