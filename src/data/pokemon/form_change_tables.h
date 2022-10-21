/*
FORM_CHANGE_ITEM_HOLD:
    Form change activates when the specified item is given to or taken from the selected Pokémon.
    Alternatively, form change activates when the specified item is is given to or taken from
    the selected Pokémon that has a particular ability.
    param1 = item to hold
    param2 = ability to check for, optional

FORM_CHANGE_ITEM_USE:
    Form change activates when the item is used on the selected Pokémon.
    param1 = item to use
    param2 = DAY if form change activates in the daytime, optional
             NIGHT if form change activates at nighttime, optional

FORM_CHANGE_MOVE:
    Form change activates when the Pokémon learns or forgets the move.
    param1 = move to check for
    param2 = WHEN_LEARNED if form change activates when move is forgotten
             WHEN_FORGOTTEN if form change activates when move is learned

FORM_CHANGE_WITHDRAW:
    Form change activates when the Pokémon is withdrawn from the PC or Daycare.
    no parameters

FORM_CHANGE_SWITCH:
    Form change activates when the Pokémon is switched out in battle.
    no parameters

FORM_CHANGE_BATTLE_BEGIN:
    Form change activates when the Pokémon is sent out at the beginning of a battle
    param1 = item to hold, optional
    param2 = a move that will be replaced, optional
    param3 = a new move to replace it with, optional

FORM_CHANGE_BATTLE_END:
    Form change activates at the end of a battle
    param1 = item to hold, optional
    param2 = a move that will be replaced, optional
    param3 = a new move to replace it with, optional
*/

// FORM_CHANGE_MOVE param2 Arguments
#define WHEN_LEARNED    0
#define WHEN_FORGOTTEN  1

// FORM_CHANGE_ITEM_USE param2 Arguments
#define DAY    1
#define NIGHT  2

static const struct FormChange sKyogreFormChangeTable[] = {
    {FORM_CHANGE_PRIMAL_REVERSION,  SPECIES_KYOGRE_PRIMAL, ITEM_BLUE_ORB},
    {FORM_CHANGE_BATTLE_END,        SPECIES_KYOGRE},
    {FORM_CHANGE_END},
};

static const struct FormChange sGroudonFormChangeTable[] = {
    {FORM_CHANGE_PRIMAL_REVERSION,  SPECIES_GROUDON_PRIMAL, ITEM_RED_ORB},
    {FORM_CHANGE_BATTLE_END,        SPECIES_GROUDON},
    {FORM_CHANGE_END},
};

#if P_GEN_4_POKEMON == TRUE
static const struct FormChange sGiratinaFormChangeTable[] = {
    {FORM_CHANGE_ITEM_HOLD, SPECIES_GIRATINA, ITEM_NONE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_GIRATINA_ORIGIN, ITEM_GRISEOUS_ORB},
    {FORM_CHANGE_END},
};

static const struct FormChange sShayminFormChangeTable[] = {
    {FORM_CHANGE_ITEM_USE, SPECIES_SHAYMIN_SKY, ITEM_GRACIDEA, DAY},
    // {FORM_CHANGE_WITHDRAW, SPECIES_SHAYMIN},
    {FORM_CHANGE_END},
};

static const struct FormChange sArceusFormChangeTable[] = {
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS,          ITEM_NONE,         ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_FIGHTING, ITEM_FIST_PLATE,   ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_FIGHTING, ITEM_FIGHTINIUM_Z, ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_FLYING,   ITEM_SKY_PLATE,    ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_FLYING,   ITEM_FLYINIUM_Z,   ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_POISON,   ITEM_TOXIC_PLATE,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_POISON,   ITEM_POISONIUM_Z,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_ROCK,     ITEM_STONE_PLATE,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_ROCK,     ITEM_ROCKIUM_Z,    ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_GROUND,   ITEM_EARTH_PLATE,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_GROUND,   ITEM_GROUNDIUM_Z,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_BUG,      ITEM_INSECT_PLATE, ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_BUG,      ITEM_BUGINIUM_Z,   ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_GHOST,    ITEM_SPOOKY_PLATE, ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_GHOST,    ITEM_GHOSTIUM_Z,   ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_STEEL,    ITEM_IRON_PLATE,   ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_STEEL,    ITEM_STEELIUM_Z,   ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_FIRE,     ITEM_FLAME_PLATE,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_FIRE,     ITEM_FIRIUM_Z,     ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_WATER,    ITEM_SPLASH_PLATE, ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_WATER,    ITEM_WATERIUM_Z,   ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_GRASS,    ITEM_MEADOW_PLATE, ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_GRASS,    ITEM_GRASSIUM_Z,   ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_ELECTRIC, ITEM_ZAP_PLATE,    ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_ELECTRIC, ITEM_ELECTRIUM_Z,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_PSYCHIC,  ITEM_MIND_PLATE,   ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_PSYCHIC,  ITEM_PSYCHIUM_Z,   ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_ICE,      ITEM_ICICLE_PLATE, ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_ICE,      ITEM_ICIUM_Z,      ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_DRAGON,   ITEM_DRACO_PLATE,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_DRAGON,   ITEM_DRAGONIUM_Z,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_DARK,     ITEM_DREAD_PLATE,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_DARK,     ITEM_DARKINIUM_Z,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_FAIRY,    ITEM_PIXIE_PLATE,  ABILITY_MULTITYPE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_ARCEUS_FAIRY,    ITEM_FAIRIUM_Z,    ABILITY_MULTITYPE},
    {FORM_CHANGE_END},
};
#endif

#if P_GEN_5_POKEMON == TRUE

static const struct FormChange sDarmanitanFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_DARMANITAN},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_DARMANITAN},
    {FORM_CHANGE_BATTLE_END,    SPECIES_DARMANITAN},
    {FORM_CHANGE_END},
};

static const struct FormChange sDarmanitanGalarianFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_DARMANITAN_GALARIAN},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_DARMANITAN_GALARIAN},
    {FORM_CHANGE_BATTLE_END,    SPECIES_DARMANITAN_GALARIAN},
    {FORM_CHANGE_END},
};

static const struct FormChange sMeloettaFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_MELOETTA},
    {FORM_CHANGE_BATTLE_END,    SPECIES_MELOETTA},
    {FORM_CHANGE_END},
};

static const struct FormChange sTornadusFormChangeTable[] = {
    {FORM_CHANGE_ITEM_USE, SPECIES_TORNADUS_THERIAN, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_ITEM_USE, SPECIES_TORNADUS, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sThundurusFormChangeTable[] = {
    {FORM_CHANGE_ITEM_USE, SPECIES_THUNDURUS_THERIAN, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_ITEM_USE, SPECIES_THUNDURUS, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sLandorusFormChangeTable[] = {
    {FORM_CHANGE_ITEM_USE, SPECIES_LANDORUS_THERIAN, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_ITEM_USE, SPECIES_LANDORUS, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sKeldeoFormChangeTable[] = {
    // {FORM_CHANGE_MOVE, SPECIES_KELDEO_RESOLUTE, MOVE_SECRET_SWORD, WHEN_LEARNED},
    // {FORM_CHANGE_MOVE, SPECIES_KELDEO, MOVE_SECRET_SWORD, WHEN_FORGOTTEN},
    {FORM_CHANGE_END},
};

static const struct FormChange sGenesectFormChangeTable[] = {
    {FORM_CHANGE_ITEM_HOLD, SPECIES_GENESECT,             ITEM_NONE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_GENESECT_DOUSE_DRIVE, ITEM_DOUSE_DRIVE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_GENESECT_SHOCK_DRIVE, ITEM_SHOCK_DRIVE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_GENESECT_BURN_DRIVE,  ITEM_BURN_DRIVE},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_GENESECT_CHILL_DRIVE, ITEM_CHILL_DRIVE},
    {FORM_CHANGE_END},
};
#endif

#if P_GEN_6_POKEMON == TRUE
static const struct FormChange sGreninjaBattleBondFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_GRENINJA_BATTLE_BOND},
    {FORM_CHANGE_BATTLE_END,    SPECIES_GRENINJA_BATTLE_BOND},
    {FORM_CHANGE_END},
};

static const struct FormChange sAegislashFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_AEGISLASH},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_AEGISLASH},
    {FORM_CHANGE_BATTLE_END,    SPECIES_AEGISLASH},
    {FORM_CHANGE_END},
};

static const struct FormChange sXerneasFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_BEGIN, SPECIES_XERNEAS_ACTIVE},
    {FORM_CHANGE_BATTLE_END,   SPECIES_XERNEAS,      },
    {FORM_CHANGE_END},
};

static const struct FormChange sHoopaFormChangeTable[] = {
    {FORM_CHANGE_ITEM_USE, SPECIES_HOOPA_UNBOUND, ITEM_PRISON_BOTTLE, SPECIES_HOOPA},
    {FORM_CHANGE_WITHDRAW, SPECIES_HOOPA},
    {FORM_CHANGE_END},
};
#endif

#if P_GEN_7_POKEMON == TRUE
static const struct FormChange sOricorioFormChangeTable[] = {
    {FORM_CHANGE_ITEM_USE, SPECIES_ORICORIO,         ITEM_RED_NECTAR},
    {FORM_CHANGE_ITEM_USE, SPECIES_ORICORIO_POM_POM, ITEM_YELLOW_NECTAR},
    {FORM_CHANGE_ITEM_USE, SPECIES_ORICORIO_PAU,     ITEM_PINK_NECTAR},
    {FORM_CHANGE_ITEM_USE, SPECIES_ORICORIO_SENSU,   ITEM_PURPLE_NECTAR},
    {FORM_CHANGE_END},
};
static const struct FormChange sWishiwashiFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_WISHIWASHI},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_WISHIWASHI},
    {FORM_CHANGE_BATTLE_END,    SPECIES_WISHIWASHI},
    {FORM_CHANGE_END},
};

static const struct FormChange sSilvallyFormChangeTable[] = {
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY,          ITEM_NONE,            ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_FIGHTING, ITEM_FIGHTING_MEMORY, ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_FLYING,   ITEM_FLYING_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_POISON,   ITEM_POISON_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_GROUND,   ITEM_GROUND_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_ROCK,     ITEM_ROCK_MEMORY,     ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_BUG,      ITEM_BUG_MEMORY,      ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_GHOST,    ITEM_GHOST_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_STEEL,    ITEM_STEEL_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_FIRE,     ITEM_FIRE_MEMORY,     ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_WATER,    ITEM_WATER_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_GRASS,    ITEM_GRASS_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_ELECTRIC, ITEM_ELECTRIC_MEMORY, ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_PSYCHIC,  ITEM_PSYCHIC_MEMORY,  ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_ICE,      ITEM_ICE_MEMORY,      ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_DRAGON,   ITEM_DRAGON_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_DARK,     ITEM_DARK_MEMORY,     ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_ITEM_HOLD, SPECIES_SILVALLY_FAIRY,    ITEM_FAIRY_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_END},
};

static const struct FormChange sMimikyuFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_MIMIKYU},
    {FORM_CHANGE_BATTLE_END,    SPECIES_MIMIKYU},
    {FORM_CHANGE_END},
};

static const struct FormChange sMiniorRedFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_MINIOR_CORE_RED},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_MINIOR_CORE_RED},
    {FORM_CHANGE_BATTLE_END,    SPECIES_MINIOR_CORE_RED},
    {FORM_CHANGE_END},
};
static const struct FormChange sMiniorBlueFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_MINIOR_CORE_BLUE},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_MINIOR_CORE_BLUE},
    {FORM_CHANGE_BATTLE_END,    SPECIES_MINIOR_CORE_BLUE},
    {FORM_CHANGE_END},
};
static const struct FormChange sMiniorGreenFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_MINIOR_CORE_GREEN},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_MINIOR_CORE_GREEN},
    {FORM_CHANGE_BATTLE_END,    SPECIES_MINIOR_CORE_GREEN},
    {FORM_CHANGE_END},
};
static const struct FormChange sMiniorIndigoFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_MINIOR_CORE_INDIGO},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_MINIOR_CORE_INDIGO},
    {FORM_CHANGE_BATTLE_END,    SPECIES_MINIOR_CORE_INDIGO},
    {FORM_CHANGE_END},
};
static const struct FormChange sMiniorOrangeFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_MINIOR_CORE_ORANGE},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_MINIOR_CORE_ORANGE},
    {FORM_CHANGE_BATTLE_END,    SPECIES_MINIOR_CORE_ORANGE},
    {FORM_CHANGE_END},
};
static const struct FormChange sMiniorVioletFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_MINIOR_CORE_VIOLET},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_MINIOR_CORE_VIOLET},
    {FORM_CHANGE_BATTLE_END,    SPECIES_MINIOR_CORE_VIOLET},
    {FORM_CHANGE_END},
};
static const struct FormChange sMiniorYellowFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_MINIOR_CORE_YELLOW},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_MINIOR_CORE_YELLOW},
    {FORM_CHANGE_BATTLE_END,    SPECIES_MINIOR_CORE_YELLOW},
    {FORM_CHANGE_END},
};

#endif

#if P_GEN_8_POKEMON == TRUE
static const struct FormChange sCramorantFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_CRAMORANT},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_CRAMORANT},
    {FORM_CHANGE_BATTLE_END,    SPECIES_CRAMORANT},
    {FORM_CHANGE_END},
};

static const struct FormChange sMorpekoFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_SWITCH, SPECIES_MORPEKO},
    {FORM_CHANGE_BATTLE_FAINT,  SPECIES_MORPEKO},
    {FORM_CHANGE_BATTLE_END,    SPECIES_MORPEKO},
    {FORM_CHANGE_END},
};

static const struct FormChange sZacianFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_BEGIN, SPECIES_ZACIAN_CROWNED_SWORD, ITEM_RUSTED_SWORD, MOVE_IRON_HEAD,      MOVE_BEHEMOTH_BLADE},
    {FORM_CHANGE_BATTLE_END,   SPECIES_ZACIAN,               ITEM_RUSTED_SWORD, MOVE_BEHEMOTH_BLADE, MOVE_IRON_HEAD},
    {FORM_CHANGE_END},
};

static const struct FormChange sZamazentaFormChangeTable[] = {
    {FORM_CHANGE_BATTLE_BEGIN, SPECIES_ZAMAZENTA_CROWNED_SHIELD, ITEM_RUSTED_SHIELD, MOVE_IRON_HEAD,      MOVE_BEHEMOTH_BASH},
    {FORM_CHANGE_BATTLE_END,   SPECIES_ZAMAZENTA,                ITEM_RUSTED_SHIELD, MOVE_BEHEMOTH_BASH,  MOVE_IRON_HEAD},
    {FORM_CHANGE_END},
};

static const struct FormChange sEnamorusFormChangeTable[] = {
    {FORM_CHANGE_ITEM_USE, SPECIES_ENAMORUS, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_ITEM_USE, SPECIES_ENAMORUS_THERIAN, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};
#endif

#undef WHEN_LEARNED
#undef WHEN_FORGOTTEN
