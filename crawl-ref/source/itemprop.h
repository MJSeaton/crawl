/*
 *  File:       itemprop.h
 *  Summary:    Misc functions.
 *  Written by: Brent Ross
 *
 *  Change History (most recent first):
 *
 *               <1>     -/--/--        BWR             Created
 */


#ifndef ITEMPROP_H
#define ITEMPROP_H

#include "externs.h"

enum armour_type
{
    ARM_ROBE,                          //    0
    ARM_LEATHER_ARMOUR,
    ARM_RING_MAIL,
    ARM_SCALE_MAIL,
    ARM_CHAIN_MAIL,
    ARM_SPLINT_MAIL,                   //    5
    ARM_BANDED_MAIL,
    ARM_PLATE_MAIL,
    ARM_SHIELD,
    ARM_CLOAK,
    ARM_HELMET,                        //   10
    ARM_GLOVES,
    ARM_BOOTS,
    ARM_BUCKLER,
    ARM_LARGE_SHIELD,
    ARM_DRAGON_HIDE,                   //   15
    ARM_TROLL_HIDE,
    ARM_CRYSTAL_PLATE_MAIL,
    ARM_DRAGON_ARMOUR,
    ARM_TROLL_LEATHER_ARMOUR,
    ARM_ICE_DRAGON_HIDE,               //   20
    ARM_ICE_DRAGON_ARMOUR,
    ARM_STEAM_DRAGON_HIDE,
    ARM_STEAM_DRAGON_ARMOUR,
    ARM_MOTTLED_DRAGON_HIDE,
    ARM_MOTTLED_DRAGON_ARMOUR,         //   25
    ARM_STORM_DRAGON_HIDE,
    ARM_STORM_DRAGON_ARMOUR,
    ARM_GOLD_DRAGON_HIDE,
    ARM_GOLD_DRAGON_ARMOUR,
    ARM_ANIMAL_SKIN,                   //   30
    ARM_SWAMP_DRAGON_HIDE,
    ARM_SWAMP_DRAGON_ARMOUR,
    ARM_STUDDED_LEATHER_ARMOUR,
    ARM_CAP,
    ARM_CENTAUR_BARDING,               //   35
    ARM_NAGA_BARDING,
    
    NUM_ARMOURS
};

enum armour_property_type
{
    PARM_AC,                           //    0
    PARM_EVASION
};

enum boot_type          // used in pluses2
{
    TBOOT_BOOTS = 0,
    TBOOT_NAGA_BARDING,
    TBOOT_CENTAUR_BARDING,
    NUM_BOOT_TYPES
};

enum brand_type // equivalent to (you.inv[].special or mitm[].special) % 30
{
    SPWPN_NORMAL,                      //    0
    SPWPN_FLAMING,
    SPWPN_FREEZING,
    SPWPN_HOLY_WRATH,
    SPWPN_ELECTROCUTION,
    SPWPN_ORC_SLAYING,                 //    5
    SPWPN_VENOM,
    SPWPN_PROTECTION,
    SPWPN_DRAINING,
    SPWPN_SPEED,
    SPWPN_VORPAL,                      //   10
    SPWPN_FLAME,
    SPWPN_FROST,
    SPWPN_VAMPIRICISM,
    SPWPN_DISRUPTION,
    SPWPN_PAIN,                        //   15
    SPWPN_DISTORTION,
    SPWPN_REACHING,                    //   17
    SPWPN_RETURNING,
    SPWPN_CONFUSE,
    SPWPN_RANDART_I = 25,              //   25
    SPWPN_RANDART_II,
    SPWPN_RANDART_III,
    SPWPN_RANDART_IV,
    SPWPN_RANDART_V,
    NUM_SPECIAL_WEAPONS,
    SPWPN_DUMMY_CRUSHING,        // ONLY TEMPORARY USAGE -- converts to VORPAL

    // everything above this point is a special artefact wield:
    SPWPN_START_FIXEDARTS = 181,

    SPWPN_SINGING_SWORD = SPWPN_START_FIXEDARTS,
    SPWPN_WRATH_OF_TROG,
    SPWPN_SCYTHE_OF_CURSES,
    SPWPN_MACE_OF_VARIABILITY,
    SPWPN_GLAIVE_OF_PRUNE,
    SPWPN_SCEPTRE_OF_TORMENT,
    SPWPN_SWORD_OF_ZONGULDROK,
    SPWPN_SWORD_OF_POWER,
    SPWPN_KNIFE_OF_ACCURACY,
    SPWPN_STAFF_OF_OLGREB,
    SPWPN_VAMPIRES_TOOTH,
    SPWPN_STAFF_OF_WUCAD_MU,

    // these three are not generated randomly {dlb}
    SPWPN_START_NOGEN_FIXEDARTS,

    SPWPN_SWORD_OF_CEREBOV = SPWPN_START_NOGEN_FIXEDARTS,
    SPWPN_STAFF_OF_DISPATER,
    SPWPN_SCEPTRE_OF_ASMODEUS,

    SPWPN_END_FIXEDARTS = SPWPN_SCEPTRE_OF_ASMODEUS
};

enum corpse_type
{
    CORPSE_BODY,                       //    0
    CORPSE_SKELETON
};

enum hands_reqd_type
{
    HANDS_ONE,
    HANDS_HALF, 
    HANDS_TWO,

    HANDS_DOUBLE        // not a level, marks double ended weapons (== half)
};

enum helmet_type
{
    THELM_HELMET        = 0x0000,
    THELM_HELM          = 0x0001,
    THELM_CAP           = 0x0002,
    THELM_WIZARD_HAT    = 0x0003,
    THELM_NUM_TYPES     = 4,

    THELM_SPECIAL       = 0x0004,  // type used only for artefacts (mask, hat)
    THELM_TYPE_MASK     = 0x00ff,

    THELM_DESC_PLAIN    = 0x0000,
    THELM_DESC_WINGED   = 0x0100,
    THELM_DESC_HORNED   = 0x0200,
    THELM_DESC_CRESTED  = 0x0300,
    THELM_DESC_PLUMED   = 0x0400,
    THELM_DESC_SPIKED   = 0x0500,
    THELM_DESC_VISORED  = 0x0600,
    THELM_DESC_JEWELLED = 0x0700,

    THELM_DESC_MASK     = 0xff00
};

enum jewellery_type
{
    RING_FIRST_RING = 0,
    
    RING_REGENERATION = RING_FIRST_RING, //    0
    RING_PROTECTION,
    RING_PROTECTION_FROM_FIRE,
    RING_POISON_RESISTANCE,
    RING_PROTECTION_FROM_COLD,
    RING_STRENGTH,                     //    5
    RING_SLAYING,
    RING_SEE_INVISIBLE,
    RING_INVISIBILITY,
    RING_HUNGER,
    RING_TELEPORTATION,                //   10
    RING_EVASION,
    RING_SUSTAIN_ABILITIES,
    RING_SUSTENANCE,
    RING_DEXTERITY,
    RING_INTELLIGENCE,                 //   15
    RING_WIZARDRY,
    RING_MAGICAL_POWER,
    RING_LEVITATION,
    RING_LIFE_PROTECTION,
    RING_PROTECTION_FROM_MAGIC,        //   20
    RING_FIRE,
    RING_ICE,
    RING_TELEPORT_CONTROL,             //   23

    NUM_RINGS,                         //   24, keep as last ring; can overlap
                                       //   safely with first amulet.

    AMU_FIRST_AMULET = 35,
    AMU_RAGE = AMU_FIRST_AMULET,       //   35
    AMU_RESIST_SLOW,
    AMU_CLARITY,
    AMU_WARDING,
    AMU_RESIST_CORROSION,
    AMU_THE_GOURMAND,                  //   40
    AMU_CONSERVATION,
    AMU_CONTROLLED_FLIGHT,
    AMU_INACCURACY,
    AMU_RESIST_MUTATION,
    
    NUM_JEWELLERY
};

enum launch_retval
{
    LRET_FUMBLED = 0,                  // must be left as 0
    LRET_LAUNCHED,
    LRET_THROWN
};

enum misc_item_type
{
    MISC_BOTTLED_EFREET,               //    0
    MISC_CRYSTAL_BALL_OF_SEEING,
    MISC_AIR_ELEMENTAL_FAN,
    MISC_LAMP_OF_FIRE,
    MISC_STONE_OF_EARTH_ELEMENTALS,
    MISC_LANTERN_OF_SHADOWS,
    MISC_HORN_OF_GERYON,
    MISC_BOX_OF_BEASTS,
    MISC_CRYSTAL_BALL_OF_ENERGY,
    MISC_EMPTY_EBONY_CASKET,
    MISC_CRYSTAL_BALL_OF_FIXATION,
    MISC_DISC_OF_STORMS,

    // pure decks
    MISC_DECK_OF_ESCAPE,
    MISC_DECK_OF_DESTRUCTION,
    MISC_DECK_OF_DUNGEONS,
    MISC_DECK_OF_SUMMONING,
    MISC_DECK_OF_WONDERS,
    MISC_DECK_OF_PUNISHMENT,

    // mixed decks
    MISC_DECK_OF_WAR,
    MISC_DECK_OF_CHANGES,
    MISC_DECK_OF_DEFENSE,

    MISC_RUNE_OF_ZOT,

    NUM_MISCELLANY // mv: used for random generation
};

enum missile_type
{
    MI_STONE,                          //    0
    MI_ARROW,
    MI_BOLT,
    MI_DART,
    MI_NEEDLE,
    MI_LARGE_ROCK,
    MI_SLING_BULLET,
    MI_JAVELIN,
    MI_THROWING_NET,
    NUM_MISSILES,
    MI_NONE             // was MI_EGGPLANT... used for launch type detection
};

enum rune_type
{
    // Note: that runes DIS-SWAMP have the same numeric value as the branch
    RUNE_DIS         = BRANCH_DIS,
    RUNE_GEHENNA     = BRANCH_GEHENNA,
    RUNE_COCYTUS     = BRANCH_COCYTUS,
    RUNE_TARTARUS    = BRANCH_TARTARUS,
    RUNE_SLIME_PITS  = BRANCH_SLIME_PITS,
    RUNE_VAULTS      = BRANCH_VAULTS,
    RUNE_SNAKE_PIT   = BRANCH_SNAKE_PIT,
    RUNE_ELVEN_HALLS = BRANCH_ELVEN_HALLS, // unused
    RUNE_TOMB        = BRANCH_TOMB,
    RUNE_SWAMP       = BRANCH_SWAMP,
    RUNE_SHOALS      = BRANCH_SHOALS,

    // Runes 50 and 51 are for Pandemonium (general demon) and the Abyss
    RUNE_DEMONIC                = 50,
    RUNE_ABYSSAL,

    // Runes 60-63 correspond to the Pandemonium demonlords, 
    // and are equal to the corresponding vault.
    RUNE_MNOLEG                 = 60,
    RUNE_LOM_LOBON,
    RUNE_CEREBOV,
    RUNE_GLOORX_VLOQ,
    NUM_RUNE_TYPES,             // should always be last
    RUNE_NONE
};

enum scroll_type
{
    SCR_IDENTIFY,                      //    0
    SCR_TELEPORTATION,
    SCR_FEAR,
    SCR_NOISE,
    SCR_REMOVE_CURSE,
    SCR_DETECT_CURSE,                  //   5
    SCR_SUMMONING,
    SCR_ENCHANT_WEAPON_I,
    SCR_ENCHANT_ARMOUR,
    SCR_TORMENT,
    SCR_RANDOM_USELESSNESS,            //   10
    SCR_CURSE_WEAPON,
    SCR_CURSE_ARMOUR,
    SCR_IMMOLATION,
    SCR_BLINKING,
    SCR_PAPER,                         //   15
    SCR_MAGIC_MAPPING,
    SCR_FOG,
    SCR_ACQUIREMENT,
    SCR_ENCHANT_WEAPON_II,
    SCR_VORPALISE_WEAPON,              //   20
    SCR_RECHARGING,
    SCR_ENCHANT_WEAPON_III,
    NUM_SCROLLS
};

enum special_armour_type
{
    SPARM_NORMAL,                      //    0
    SPARM_RUNNING,
    SPARM_FIRE_RESISTANCE,
    SPARM_COLD_RESISTANCE,
    SPARM_POISON_RESISTANCE,
    SPARM_SEE_INVISIBLE,               //    5
    SPARM_DARKNESS,
    SPARM_STRENGTH,
    SPARM_DEXTERITY,
    SPARM_INTELLIGENCE,
    SPARM_PONDEROUSNESS,               //   10
    SPARM_LEVITATION,
    SPARM_MAGIC_RESISTANCE,
    SPARM_PROTECTION,
    SPARM_STEALTH,
    SPARM_RESISTANCE,                  //   15
    SPARM_POSITIVE_ENERGY,
    SPARM_ARCHMAGI,
    SPARM_PRESERVATION                //   18
};

enum special_missile_type // to separate from weapons in general {dlb}
{
    SPMSL_NORMAL,                      //    0
    SPMSL_FLAME,                       //    1
    SPMSL_ICE,                         //    2
    SPMSL_POISONED,                    //    3
    SPMSL_POISONED_II,                 //    4 - unused
    SPMSL_CURARE                       //    5
};

enum special_ring_type // jewellery mitm[].special values
{
    SPRING_RANDART = 200,
    SPRING_UNRANDART = 201
};

enum special_wield_type                     // you.special_wield
{
    SPWLD_NONE,                        //    0
    SPWLD_SING,
    SPWLD_TROG,
    SPWLD_CURSE,
    SPWLD_VARIABLE,                    //    4
    SPWLD_PRUNE, //    5 - implicit in it_use3::special_wielded() {dlb}
    SPWLD_TORMENT,                     //    6
    SPWLD_ZONGULDROK,
    SPWLD_POWER,
    SPWLD_WUCAD_MU,                    //    9
    SPWLD_OLGREB,                      //   10
    SPWLD_SHADOW = 50,                 //   50
    SPWLD_NOISE //   further differentiation useless -> removed (jpeg)
};

enum stave_type
{
    // staves
    STAFF_WIZARDRY = 0,
    STAFF_POWER,
    STAFF_FIRE,
    STAFF_COLD,
    STAFF_POISON,
    STAFF_ENERGY,
    STAFF_DEATH,
    STAFF_CONJURATION,
    STAFF_ENCHANTMENT,
    STAFF_SUMMONING,
    STAFF_AIR,
    STAFF_EARTH,
    STAFF_CHANNELING,
    // rods
    STAFF_SMITING,              // must be first rod!
    STAFF_SPELL_SUMMONING,
    STAFF_DESTRUCTION_I,
    STAFF_DESTRUCTION_II,
    STAFF_DESTRUCTION_III,
    STAFF_DESTRUCTION_IV,
    STAFF_WARDING,
    STAFF_DISCOVERY,
    STAFF_DEMONOLOGY,
    STAFF_STRIKING,
    STAFF_VENOM,
    NUM_STAVES                         // must remain last member {dlb}
};

enum weapon_type
{
// Base weapons
    WPN_CLUB,                          //    0
    WPN_MACE,
    WPN_FLAIL,
    WPN_DAGGER,
    WPN_MORNINGSTAR,
    WPN_SHORT_SWORD,                   //    5
    WPN_LONG_SWORD,
    WPN_GREAT_SWORD,
    WPN_SCIMITAR,
    WPN_HAND_AXE,
    WPN_BATTLEAXE,                     //   10
    WPN_SPEAR,
    WPN_HALBERD,
    WPN_SLING,
    WPN_BOW,
    WPN_CROSSBOW,                      //   15
    WPN_HAND_CROSSBOW,
    WPN_GLAIVE,
    WPN_QUARTERSTAFF,
// these three not created ordinarily
    WPN_SCYTHE,
    WPN_GIANT_CLUB,                    //   20
    WPN_GIANT_SPIKED_CLUB,
// "rare" weapons - some have special cases and are uncommon
    WPN_EVENINGSTAR,
    WPN_QUICK_BLADE,
    WPN_KATANA,
    WPN_EXECUTIONERS_AXE,              //   25
    WPN_DOUBLE_SWORD,
    WPN_TRIPLE_SWORD,
    WPN_HAMMER,
    WPN_ANCUS,
    WPN_WHIP,                          //   30
    WPN_SABRE,
    WPN_DEMON_BLADE,
    WPN_DEMON_WHIP,
    WPN_DEMON_TRIDENT,
    WPN_BROAD_AXE,                     //   35
// base items (continued)
    WPN_WAR_AXE,
    WPN_TRIDENT,
    WPN_SPIKED_FLAIL,
    WPN_GREAT_MACE,
    WPN_DIRE_FLAIL,                    //   40
    WPN_KNIFE,
    WPN_BLOWGUN,
    WPN_FALCHION,
    WPN_BLESSED_BLADE,                 //   44
    WPN_LONGBOW,
    WPN_LAJATANG,
    WPN_LOCHABER_AXE,

    NUM_WEAPONS,                       //   48 - must be last regular member {dlb}

// special cases
    WPN_UNARMED = 500,                 //  500
    WPN_UNKNOWN = 1000,                // 1000
    WPN_RANDOM
};

enum weapon_description_type
{
    DWPN_PLAIN = 0,                    //    0 - added to round out enum {dlb}
    DWPN_RUNED = 1,                    //    1
    DWPN_GLOWING,
    DWPN_ORCISH,
    DWPN_ELVEN,
    DWPN_DWARVEN                       //    5
};

enum weapon_property_type
{
    PWPN_DAMAGE,                       //    0
    PWPN_HIT,
    PWPN_SPEED,
    PWPN_ACQ_WEIGHT
};

enum vorpal_damage_type
{
    // Types of damage a weapon can do... currently assuming that anything 
    // with BLUDGEON always does "AND" with any other specified types, 
    // and and sets not including BLUDGEON are "OR".
    DAM_BASH            = 0x0000,       // non-melee weapon blugeoning
    DAM_BLUDGEON        = 0x0001,       // crushing
    DAM_SLICE           = 0x0002,       // slicing/chopping
    DAM_PIERCE          = 0x0004,       // stabbing/piercing
    DAM_WHIP            = 0x0008,       // whip slashing (no butcher)

    // These are used for vorpal weapon desc (don't set more than one)
    DVORP_NONE          = 0x0000,       // used for non-melee weapons
    DVORP_CRUSHING      = 0x1000,
    DVORP_SLICING       = 0x2000,
    DVORP_PIERCING      = 0x3000,
    DVORP_CHOPPING      = 0x4000,       // used for axes
    DVORP_SLASHING      = 0x5000,       // used for whips
    DVORP_STABBING      = 0x6000,       // used for knives/daggers
    
    DVORP_CLAWING       = 0x7000,       // claw damage

    // These are shortcuts to tie vorpal/damage types for easy setting...
    // as above, setting more than one vorpal type is trouble.
    DAMV_NON_MELEE      = DVORP_NONE     | DAM_BASH,            // launchers
    DAMV_CRUSHING       = DVORP_CRUSHING | DAM_BLUDGEON,
    DAMV_SLICING        = DVORP_SLICING  | DAM_SLICE,
    DAMV_PIERCING       = DVORP_PIERCING | DAM_PIERCE,
    DAMV_CHOPPING       = DVORP_CHOPPING | DAM_SLICE,
    DAMV_SLASHING       = DVORP_SLASHING | DAM_WHIP,
    DAMV_STABBING       = DVORP_STABBING | DAM_PIERCE,

    DAM_MASK            = 0x0fff,       // strips vorpal specification
    DAMV_MASK           = 0xf000        // strips non-vorpal specification
};

// NOTE:  This order is very special!  Its basically the same as ZAP_*, 
// and there are bits of the code that still use that fact.
// See item_def::zap().
enum wand_type                         // mitm[].subtype
{
    WAND_FLAME,                        //    0
    WAND_FROST,
    WAND_SLOWING,
    WAND_HASTING,
    WAND_MAGIC_DARTS,
    WAND_HEALING,                      //    5
    WAND_PARALYSIS,
    WAND_FIRE,
    WAND_COLD,
    WAND_CONFUSION,
    WAND_INVISIBILITY,                 //   10
    WAND_DIGGING,
    WAND_FIREBALL,
    WAND_TELEPORTATION,
    WAND_LIGHTNING,
    WAND_POLYMORPH_OTHER,              //   15
    WAND_ENSLAVEMENT,
    WAND_DRAINING,
    WAND_RANDOM_EFFECTS,
    WAND_DISINTEGRATION,
    NUM_WANDS                          // must remain last member {dlb}
};

enum zap_count_type
{
    ZAPCOUNT_EMPTY = -1,
    ZAPCOUNT_UNKNOWN = -2
};

void init_properties(void);

// Returns true if this item should be preserved as far as possible.
bool item_is_critical(const item_def &item);

// cursed:
bool item_cursed( const item_def &item );
bool item_known_cursed( const item_def &item );
bool item_known_uncursed( const item_def &item );
void do_curse_item(  item_def &item );
void do_uncurse_item(  item_def &item );

// stationary:
void set_item_stationary( item_def &item );
void remove_item_stationary( item_def &item );
bool item_is_stationary( const item_def &item );

// ident:
bool item_ident( const item_def &item, unsigned long flags );
void set_ident_flags( item_def &item, unsigned long flags );
void unset_ident_flags( item_def &item, unsigned long flags );
bool fully_identified( const item_def &item );
unsigned long full_ident_mask( const item_def& item );

// racial item and item descriptions:
void set_equip_race( item_def &item, unsigned long flags );
void set_equip_desc( item_def &item, unsigned long flags );
unsigned long get_equip_race( const item_def &item );
unsigned long get_equip_desc( const item_def &item );

// helmet functions:
void  set_helmet_type( item_def &item, short flags );
void  set_helmet_desc( item_def &item, short flags );
void  set_helmet_random_desc( item_def &item );

short get_helmet_type( const item_def &item );
short get_helmet_desc( const item_def &item );

bool  is_helmet_type( const item_def &item, short val );

// ego items:
bool set_item_ego_type( item_def &item, int item_type, int ego_type ); 
int  get_weapon_brand( const item_def &item );
special_armour_type get_armour_ego_type( const item_def &item );
int  get_ammo_brand( const item_def &item );

// armour functions:
int armour_max_enchant( const item_def &item );
bool armour_is_hide( const item_def &item, bool inc_made = false );
bool armour_not_shiny( const item_def &item );
int armour_str_required( const item_def &arm );

equipment_type get_armour_slot( const item_def &item );
equipment_type get_armour_slot( armour_type arm );

bool jewellery_is_amulet( const item_def &item );
bool check_jewellery_size( const item_def &item, size_type size );

bool  hide2armour( item_def &item );

bool  base_armour_is_light( const item_def &item );
int   fit_armour_size( const item_def &item, size_type size );
bool  check_armour_size( const item_def &item, size_type size );
bool  check_armour_shape( const item_def &item, bool quiet );

// weapon functions:
int weapon_rarity( int w_type );

int   cmp_weapon_size( const item_def &item, size_type size );
bool  check_weapon_tool_size( const item_def &item, size_type size );
int   fit_weapon_wieldable_size( const item_def &item, size_type size );
bool  check_weapon_wieldable_size( const item_def &item, size_type size );

int   fit_item_throwable_size( const item_def &item, size_type size );

bool  check_weapon_shape( const item_def &item, bool quiet, bool check_id = false );

int weapon_ev_bonus( const item_def &wpn, int skill, size_type body, int dex,
                     bool hide_hidden = false );

int get_inv_wielded( void );
int get_inv_hand_tool( void );
int get_inv_in_hand( void );

hands_reqd_type  hands_reqd( const item_def &item, size_type size );
hands_reqd_type hands_reqd(object_class_type base_type, int sub_type,
                           size_type size);
bool is_double_ended( const item_def &item );

int double_wpn_awkward_speed( const item_def &item );

bool  is_demonic( const item_def &item );

int   get_vorpal_type( const item_def &item );
int   get_damage_type( const item_def &item );
bool  does_damage_type( const item_def &item, int dam_type );

int weapon_str_weight( const item_def &wpn );
int weapon_dex_weight( const item_def &wpn );
int weapon_impact_mass( const item_def &wpn );
int weapon_str_required( const item_def &wpn, bool half );

skill_type weapon_skill( const item_def &item );
skill_type weapon_skill( object_class_type wclass, int wtype );

skill_type range_skill( const item_def &item );
skill_type range_skill( object_class_type wclass, int wtype );

// launcher and ammo functions:
bool          is_range_weapon( const item_def &item );
bool          is_range_weapon_type( weapon_type wtype );
missile_type  fires_ammo_type( const item_def &item );
missile_type fires_ammo_type( weapon_type wtype );
const char *  ammo_name( const item_def &bow );
const char *  ammo_name( missile_type mtyp );
bool          has_launcher( const item_def &wpn );
bool          is_throwable( const item_def &wpn,
                            size_type bodysize = SIZE_MEDIUM );
launch_retval is_launched(actor *actor, const item_def *launcher,
                         const item_def &missile);

// staff/rod functions:
bool item_is_rod( const item_def &item );
bool item_is_staff( const item_def &item );

// ring functions:
int ring_has_pluses( const item_def &item );

// food functions:
bool food_is_meat( const item_def &item );
bool food_is_veg( const item_def &item );
int  food_value( const item_def &item );
int  food_turns( const item_def &item );
bool can_cut_meat( const item_def &item );

// generic item property functions:
bool is_tool( const item_def &item );
int property( const item_def &item, int prop_type );
bool gives_ability( const item_def &item );
bool gives_resistance( const item_def &item );
int item_mass( const item_def &item );
size_type item_size( const item_def &item );

bool is_colourful_item( const item_def &item );

bool is_shield(const item_def &item);
bool is_shield_incompatible(const item_def &weapon, 
                            const item_def *shield = NULL);

// Only works for armour/weapons/missiles
std::string item_base_name(const item_def &item);
const char* weapon_base_name(unsigned char subtype);

#endif
