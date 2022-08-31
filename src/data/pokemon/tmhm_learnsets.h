#define TMHM_LEARNSET(moves) {(u32)(moves), ((u64)(moves) >> 32)}
#define TMHM(tmhm) ((u64)1 << (ITEM_##tmhm - ITEM_TM01_WILL_O_WISP - ((ITEM_##tmhm > ITEM_TM100) ? 50 : 0)))

// This table determines which TMs and HMs a species is capable of learning.
// Each entry is a 64-bit bit array spread across two 32-bit values, with
// each bit corresponding to a TM or HM.
const u32 gTMHMLearnsets[][2] =
{
    [SPECIES_NONE]        = TMHM_LEARNSET(0),

    [SPECIES_BULBASAUR]   = TMHM_LEARNSET(0),

    [SPECIES_IVYSAUR]     = TMHM_LEARNSET(0),

    [SPECIES_VENUSAUR]    = TMHM_LEARNSET(0),

    [SPECIES_CHARMANDER]  = TMHM_LEARNSET(0),

    [SPECIES_CHARMELEON]  = TMHM_LEARNSET(0),

    [SPECIES_CHARIZARD]   = TMHM_LEARNSET(0),

    [SPECIES_SQUIRTLE]    = TMHM_LEARNSET(0),

    [SPECIES_WARTORTLE]   = TMHM_LEARNSET(0),

    [SPECIES_BLASTOISE]   = TMHM_LEARNSET(0),

    [SPECIES_CATERPIE]    = TMHM_LEARNSET(0),

    [SPECIES_METAPOD]     = TMHM_LEARNSET(0),

    [SPECIES_BUTTERFREE]  = TMHM_LEARNSET(0),

    [SPECIES_WEEDLE]      = TMHM_LEARNSET(0),

    [SPECIES_KAKUNA]      = TMHM_LEARNSET(0),

    [SPECIES_BEEDRILL]    = TMHM_LEARNSET(0),

    [SPECIES_PIDGEY]      = TMHM_LEARNSET(0),

    [SPECIES_PIDGEOTTO]   = TMHM_LEARNSET(0),

    [SPECIES_PIDGEOT]     = TMHM_LEARNSET(0),

    [SPECIES_RATTATA]     = TMHM_LEARNSET(0),

    [SPECIES_RATICATE]    = TMHM_LEARNSET(0),

    [SPECIES_SPEAROW]     = TMHM_LEARNSET(0),

    [SPECIES_FEAROW]      = TMHM_LEARNSET(0),

    [SPECIES_EKANS]       = TMHM_LEARNSET(0),

    [SPECIES_ARBOK]       = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RAICHU]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SANDSHREW]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SANDSLASH]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDORAN_F]   = TMHM_LEARNSET(0),

    [SPECIES_NIDORINA]    = TMHM_LEARNSET(0),

    [SPECIES_NIDOQUEEN]   = TMHM_LEARNSET(0),

    [SPECIES_NIDORAN_M]   = TMHM_LEARNSET(0),

    [SPECIES_NIDORINO]    = TMHM_LEARNSET(0),

    [SPECIES_NIDOKING]    = TMHM_LEARNSET(0),

    [SPECIES_CLEFAIRY]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CLEFABLE]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VULPIX]      = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM63_HYPNOSIS)),

    [SPECIES_NINETALES]   = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM63_HYPNOSIS)),

    [SPECIES_JIGGLYPUFF]  = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_WIGGLYTUFF]  = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_ZUBAT]       = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM02_FLY)),

    [SPECIES_GOLBAT]      = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM02_FLY)),

    [SPECIES_ODDISH]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_GLOOM]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_VILEPLUME]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_PARAS]       = TMHM_LEARNSET(0),

    [SPECIES_PARASECT]    = TMHM_LEARNSET(0),

    [SPECIES_VENONAT]     = TMHM_LEARNSET(0),

    [SPECIES_VENOMOTH]    = TMHM_LEARNSET(0),

    [SPECIES_DIGLETT]     = TMHM_LEARNSET(0),

    [SPECIES_DUGTRIO]     = TMHM_LEARNSET(0),

    [SPECIES_MEOWTH]      = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM63_HYPNOSIS)),

    [SPECIES_PERSIAN]     = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM63_HYPNOSIS)),

    [SPECIES_PSYDUCK]     = TMHM_LEARNSET(0),

    [SPECIES_GOLDUCK]     = TMHM_LEARNSET(0),

    [SPECIES_MANKEY]      = TMHM_LEARNSET(0),

    [SPECIES_PRIMEAPE]    = TMHM_LEARNSET(0),

    [SPECIES_GROWLITHE]   = TMHM_LEARNSET(0),

    [SPECIES_ARCANINE]    = TMHM_LEARNSET(0),

    [SPECIES_POLIWAG]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_POLIWHIRL]   = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_POLIWRATH]   = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_ABRA]        = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_KADABRA]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_ALAKAZAM]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_MACHOP]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MACHOKE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MACHAMP]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BELLSPROUT]  = TMHM_LEARNSET(0),

    [SPECIES_WEEPINBELL]  = TMHM_LEARNSET(0),

    [SPECIES_VICTREEBEL]  = TMHM_LEARNSET(0),

    [SPECIES_TENTACOOL]   = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_TENTACRUEL]  = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_GEODUDE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GRAVELER]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GOLEM]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PONYTA]      = TMHM_LEARNSET(0),

    [SPECIES_RAPIDASH]    = TMHM_LEARNSET(0),

    [SPECIES_SLOWPOKE]    = TMHM_LEARNSET(0),

    [SPECIES_SLOWBRO]     = TMHM_LEARNSET(0),

    [SPECIES_MAGNEMITE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_MAGNETON]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_FARFETCHD]   = TMHM_LEARNSET(0),

    [SPECIES_DODUO]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(HM02_FLY)),

    [SPECIES_DODRIO]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(HM02_FLY)),

    [SPECIES_SEEL]        = TMHM_LEARNSET(0),

    [SPECIES_DEWGONG]     = TMHM_LEARNSET(0),

    [SPECIES_GRIMER]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(HM04_STRENGTH)),

    [SPECIES_MUK]         = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SHELLDER]    = TMHM_LEARNSET(0),

    [SPECIES_CLOYSTER]    = TMHM_LEARNSET(0),

    [SPECIES_GASTLY]      = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM63_HYPNOSIS)),

    [SPECIES_HAUNTER]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM63_HYPNOSIS)),

    [SPECIES_GENGAR]      = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ONIX]        = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DROWZEE]     = TMHM_LEARNSET(0),

    [SPECIES_HYPNO]       = TMHM_LEARNSET(0),

    [SPECIES_KRABBY]      = TMHM_LEARNSET(0),

    [SPECIES_KINGLER]     = TMHM_LEARNSET(0),

    [SPECIES_VOLTORB]     = TMHM_LEARNSET(0),

    [SPECIES_ELECTRODE]   = TMHM_LEARNSET(0),

    [SPECIES_EXEGGCUTE]   = TMHM_LEARNSET(0),

    [SPECIES_EXEGGUTOR]   = TMHM_LEARNSET(0),

    [SPECIES_CUBONE]      = TMHM_LEARNSET(0),

    [SPECIES_MAROWAK]     = TMHM_LEARNSET(0),

    [SPECIES_HITMONLEE]   = TMHM_LEARNSET(0),

    [SPECIES_HITMONCHAN]  = TMHM_LEARNSET(0),

    [SPECIES_LICKITUNG]   = TMHM_LEARNSET(0),

    [SPECIES_KOFFING]     = TMHM_LEARNSET(0),

    [SPECIES_WEEZING]     = TMHM_LEARNSET(0),

    [SPECIES_RHYHORN]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RHYDON]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CHANSEY]     = TMHM_LEARNSET(0),

    [SPECIES_TANGELA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_KANGASKHAN]  = TMHM_LEARNSET(0),

    [SPECIES_HORSEA]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_SEADRA]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_GOLDEEN]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_SEAKING]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_STARYU]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_STARMIE]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_MR_MIME]     = TMHM_LEARNSET(0),

    [SPECIES_SCYTHER]     = TMHM_LEARNSET(0),

    [SPECIES_JYNX]        = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_ELECTABUZZ]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAGMAR]      = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PINSIR]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TAUROS]      = TMHM_LEARNSET(0),

    [SPECIES_MAGIKARP]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)),

    [SPECIES_GYARADOS]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_LAPRAS]      = TMHM_LEARNSET(0),

    [SPECIES_DITTO]       = TMHM_LEARNSET(0),

    [SPECIES_EEVEE]       = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)),

    [SPECIES_VAPOREON]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_JOLTEON]     = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FLAREON]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PORYGON]     = TMHM_LEARNSET(0),

    [SPECIES_OMANYTE]     = TMHM_LEARNSET(0),

    [SPECIES_OMASTAR]     = TMHM_LEARNSET(0),

    [SPECIES_KABUTO]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)),

    [SPECIES_KABUTOPS]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_AERODACTYL]  = TMHM_LEARNSET(0),

    [SPECIES_SNORLAX]     = TMHM_LEARNSET(0),

    [SPECIES_ARTICUNO]    = TMHM_LEARNSET(0),

    [SPECIES_ZAPDOS]      = TMHM_LEARNSET(0),

    [SPECIES_MOLTRES]     = TMHM_LEARNSET(0),

    [SPECIES_DRATINI]     = TMHM_LEARNSET(0),

    [SPECIES_DRAGONAIR]   = TMHM_LEARNSET(0),

    [SPECIES_DRAGONITE]   = TMHM_LEARNSET(0),

    [SPECIES_MEWTWO]      = TMHM_LEARNSET(0),

    [SPECIES_MEW]         = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM61_AURA_SPHERE)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_CHIKORITA]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_BAYLEEF]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEGANIUM]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CYNDAQUIL]   = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM01_CUT)),

    [SPECIES_QUILAVA]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TYPHLOSION]  = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TOTODILE]    = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_CROCONAW]    = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_FERALIGATR]  = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_SENTRET]     = TMHM_LEARNSET(0),

    [SPECIES_FURRET]      = TMHM_LEARNSET(0),

    [SPECIES_HOOTHOOT]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_NOCTOWL]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_LEDYBA]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_LEDIAN]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SPINARAK]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_ARIADOS]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_CROBAT]      = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM02_FLY)),

    [SPECIES_CHINCHOU]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_LANTURN]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_PICHU]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_CLEFFA]      = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_IGGLYBUFF]   = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_TOGEPI]      = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TOGETIC]     = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NATU]        = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_XATU]        = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_MAREEP]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_FLAAFFY]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_AMPHAROS]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BELLOSSOM]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_MARILL]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_AZUMARILL]   = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_SUDOWOODO]   = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_POLITOED]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_HOPPIP]      = TMHM_LEARNSET(0),

    [SPECIES_SKIPLOOM]    = TMHM_LEARNSET(0),

    [SPECIES_JUMPLUFF]    = TMHM_LEARNSET(0),

    [SPECIES_AIPOM]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SUNKERN]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_SUNFLORA]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_YANMA]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_WOOPER]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_QUAGSIRE]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_ESPEON]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_UMBREON]     = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_MURKROW]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM02_FLY)),

    [SPECIES_SLOWKING]    = TMHM_LEARNSET(0),

    [SPECIES_MISDREAVUS]  = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_UNOWN]       = TMHM_LEARNSET(0),

    [SPECIES_WOBBUFFET]   = TMHM_LEARNSET(TMHM(TM20_SAFEGUARD)),

    [SPECIES_GIRAFARIG]   = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PINECO]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FORRETRESS]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DUNSPARCE]   = TMHM_LEARNSET(0),

    [SPECIES_GLIGAR]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_STEELIX]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SNUBBULL]    = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GRANBULL]    = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_QWILFISH]    = TMHM_LEARNSET(0),

    [SPECIES_SCIZOR]      = TMHM_LEARNSET(0),

    [SPECIES_SHUCKLE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HERACROSS]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SNEASEL]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TEDDIURSA]   = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_URSARING]    = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SLUGMA]      = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAGCARGO]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SWINUB]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PILOSWINE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CORSOLA]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_REMORAID]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_OCTILLERY]   = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_DELIBIRD]    = TMHM_LEARNSET(0),

    [SPECIES_MANTINE]     = TMHM_LEARNSET(0),

    [SPECIES_SKARMORY]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HOUNDOUR]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HOUNDOOM]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_KINGDRA]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_PHANPY]      = TMHM_LEARNSET(0),

    [SPECIES_DONPHAN]     = TMHM_LEARNSET(0),

    [SPECIES_PORYGON2]    = TMHM_LEARNSET(0),

    [SPECIES_STANTLER]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_SMEARGLE]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM61_AURA_SPHERE)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_TYROGUE]     = TMHM_LEARNSET(0),

    [SPECIES_HITMONTOP]   = TMHM_LEARNSET(0),

    [SPECIES_SMOOCHUM]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_ELEKID]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAGBY]       = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MILTANK]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BLISSEY]     = TMHM_LEARNSET(0),

    [SPECIES_RAIKOU]      = TMHM_LEARNSET(0),

    [SPECIES_ENTEI]       = TMHM_LEARNSET(0),

    [SPECIES_SUICUNE]     = TMHM_LEARNSET(0),

    [SPECIES_LARVITAR]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PUPITAR]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TYRANITAR]   = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LUGIA]       = TMHM_LEARNSET(0),

    [SPECIES_HO_OH]       = TMHM_LEARNSET(0),

    [SPECIES_CELEBI]      = TMHM_LEARNSET(0),

    [SPECIES_TREECKO]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GROVYLE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SCEPTILE]    = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TORCHIC]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_COMBUSKEN]   = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BLAZIKEN]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM61_AURA_SPHERE)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MUDKIP]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_MARSHTOMP]   = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_SWAMPERT]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_POOCHYENA]   = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MIGHTYENA]   = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ZIGZAGOON]   = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LINOONE]     = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_WURMPLE]     = TMHM_LEARNSET(0),

    [SPECIES_SILCOON]     = TMHM_LEARNSET(0),

    [SPECIES_BEAUTIFLY]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_CASCOON]     = TMHM_LEARNSET(0),

    [SPECIES_DUSTOX]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_LOTAD]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_LOMBRE]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_LUDICOLO]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_SEEDOT]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NUZLEAF]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SHIFTRY]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TAILLOW]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(HM02_FLY)),

    [SPECIES_SWELLOW]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(HM02_FLY)),

    [SPECIES_WINGULL]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(HM02_FLY)),

    [SPECIES_PELIPPER]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM03_SURF)),

    [SPECIES_RALTS]       = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_KIRLIA]      = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_GARDEVOIR]   = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_SURSKIT]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_MASQUERAIN]  = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_SHROOMISH]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_BRELOOM]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SLAKOTH]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VIGOROTH]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SLAKING]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NINCADA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_NINJASK]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_SHEDINJA]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_WHISMUR]     = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)),

    [SPECIES_LOUDRED]     = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_EXPLOUD]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAKUHITA]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HARIYAMA]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_AZURILL]     = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)),

    [SPECIES_NOSEPASS]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SKITTY]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_DELCATTY]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SABLEYE]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAWILE]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ARON]        = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LAIRON]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_AGGRON]      = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEDITITE]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEDICHAM]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ELECTRIKE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_MANECTRIC]   = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_PLUSLE]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_MINUN]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_VOLBEAT]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_ILLUMISE]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_ROSELIA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_GULPIN]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SWALOT]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CARVANHA]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_SHARPEDO]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_WAILMER]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_WAILORD]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_NUMEL]       = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CAMERUPT]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TORKOAL]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SPOINK]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_GRUMPIG]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_SPINDA]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TRAPINCH]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VIBRAVA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FLYGON]      = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CACNEA]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_CACTURNE]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_SWABLU]      = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(HM02_FLY)),

    [SPECIES_ALTARIA]     = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ZANGOOSE]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SEVIPER]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LUNATONE]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_SOLROCK]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_BARBOACH]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_WHISCASH]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_CORPHISH]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)),

    [SPECIES_CRAWDAUNT]   = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_BALTOY]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_CLAYDOL]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LILEEP]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_CRADILY]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ANORITH]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ARMALDO]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FEEBAS]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_MILOTIC]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_CASTFORM]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_KECLEON]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SHUPPET]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_BANETTE]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_DUSKULL]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_DUSCLOPS]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TROPIUS]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CHIMECHO]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_ABSOL]       = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_WYNAUT]      = TMHM_LEARNSET(TMHM(TM20_SAFEGUARD)),

    [SPECIES_SNORUNT]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_GLALIE]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_SPHEAL]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_SEALEO]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_WALREIN]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_CLAMPERL]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_HUNTAIL]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_GOREBYSS]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_RELICANTH]   = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_LUVDISC]     = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_BAGON]       = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SHELGON]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SALAMENCE]   = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BELDUM]      = TMHM_LEARNSET(TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM48_ZEN_HEADBUTT)),

    [SPECIES_METANG]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_METAGROSS]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_REGIROCK]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_REGICE]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_REGISTEEL]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LATIAS]      = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM61_AURA_SPHERE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_LATIOS]      = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM61_AURA_SPHERE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_KYOGRE]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_GROUDON]     = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RAYQUAZA]    = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_JIRACHI]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM61_AURA_SPHERE)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_DEOXYS]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM55_COSMIC_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TURTWIG]     = TMHM_LEARNSET(0),

    [SPECIES_GROTLE]      = TMHM_LEARNSET(0),

    [SPECIES_TORTERRA]    = TMHM_LEARNSET(0),

    [SPECIES_CHIMCHAR]    = TMHM_LEARNSET(0),

    [SPECIES_MONFERNO]    = TMHM_LEARNSET(0),

    [SPECIES_INFERNAPE]   = TMHM_LEARNSET(0),

    [SPECIES_PIPLUP]      = TMHM_LEARNSET(0),

    [SPECIES_PRINPLUP]    = TMHM_LEARNSET(0),

    [SPECIES_EMPOLEON]    = TMHM_LEARNSET(0),

    [SPECIES_STARLY]      = TMHM_LEARNSET(0),

    [SPECIES_STARAVIA]    = TMHM_LEARNSET(0),

    [SPECIES_STARAPTOR]   = TMHM_LEARNSET(0),

    [SPECIES_BIDOOF]      = TMHM_LEARNSET(0),

    [SPECIES_BIBAREL]     = TMHM_LEARNSET(0),

    [SPECIES_KRICKETOT]   = TMHM_LEARNSET(0),

    [SPECIES_KRICKETUNE]  = TMHM_LEARNSET(0),

    [SPECIES_SHINX]       = TMHM_LEARNSET(0),

    [SPECIES_LUXIO]       = TMHM_LEARNSET(0),

    [SPECIES_LUXRAY]      = TMHM_LEARNSET(0),

    [SPECIES_BUDEW]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_ROSERADE]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_CRANIDOS]    = TMHM_LEARNSET(0),

    [SPECIES_RAMPARDOS]   = TMHM_LEARNSET(0),

    [SPECIES_SHIELDON]    = TMHM_LEARNSET(0),

    [SPECIES_BASTIODON]   = TMHM_LEARNSET(0),

    [SPECIES_BURMY]       = TMHM_LEARNSET(0),

    [SPECIES_WORMADAM]    = TMHM_LEARNSET(0),

    [SPECIES_MOTHIM]      = TMHM_LEARNSET(0),

    [SPECIES_COMBEE]      = TMHM_LEARNSET(0),

    [SPECIES_VESPIQUEN]   = TMHM_LEARNSET(0),

    [SPECIES_PACHIRISU]   = TMHM_LEARNSET(0),

    [SPECIES_BUIZEL]      = TMHM_LEARNSET(0),

    [SPECIES_FLOATZEL]    = TMHM_LEARNSET(0),

    [SPECIES_CHERUBI]     = TMHM_LEARNSET(0),

    [SPECIES_CHERRIM]     = TMHM_LEARNSET(0),

    [SPECIES_SHELLOS]     = TMHM_LEARNSET(0),

    [SPECIES_GASTRODON]   = TMHM_LEARNSET(0),

    [SPECIES_AMBIPOM]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DRIFLOON]    = TMHM_LEARNSET(0),

    [SPECIES_DRIFBLIM]    = TMHM_LEARNSET(0),

    [SPECIES_BUNEARY]     = TMHM_LEARNSET(0),

    [SPECIES_LOPUNNY]     = TMHM_LEARNSET(0),

    [SPECIES_MISMAGIUS]   = TMHM_LEARNSET(0),

    [SPECIES_HONCHKROW]   = TMHM_LEARNSET(0),

    [SPECIES_GLAMEOW]     = TMHM_LEARNSET(0),

    [SPECIES_PURUGLY]     = TMHM_LEARNSET(0),

    [SPECIES_CHINGLING]   = TMHM_LEARNSET(0),

    [SPECIES_STUNKY]      = TMHM_LEARNSET(0),

    [SPECIES_SKUNTANK]    = TMHM_LEARNSET(0),

    [SPECIES_BRONZOR]     = TMHM_LEARNSET(0),

    [SPECIES_BRONZONG]    = TMHM_LEARNSET(0),

    [SPECIES_BONSLY]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM60_EARTH_POWER)),

    [SPECIES_MIME_JR]     = TMHM_LEARNSET(0),

    [SPECIES_HAPPINY]     = TMHM_LEARNSET(0),

    [SPECIES_CHATOT]      = TMHM_LEARNSET(0),

    [SPECIES_SPIRITOMB]   = TMHM_LEARNSET(0),

    [SPECIES_GIBLE]       = TMHM_LEARNSET(0),

    [SPECIES_GABITE]      = TMHM_LEARNSET(0),

    [SPECIES_GARCHOMP]    = TMHM_LEARNSET(0),

    [SPECIES_MUNCHLAX]    = TMHM_LEARNSET(0),

    [SPECIES_RIOLU]       = TMHM_LEARNSET(0),

    [SPECIES_LUCARIO]     = TMHM_LEARNSET(0),

    [SPECIES_HIPPOPOTAS]  = TMHM_LEARNSET(0),

    [SPECIES_HIPPOWDON]   = TMHM_LEARNSET(0),

    [SPECIES_SKORUPI]     = TMHM_LEARNSET(0),

    [SPECIES_DRAPION]     = TMHM_LEARNSET(0),

    [SPECIES_CROAGUNK]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TOXICROAK]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CARNIVINE]   = TMHM_LEARNSET(0),

    [SPECIES_FINNEON]     = TMHM_LEARNSET(0),

    [SPECIES_LUMINEON]    = TMHM_LEARNSET(0),

    [SPECIES_MANTYKE]     = TMHM_LEARNSET(0),

    [SPECIES_SNOVER]      = TMHM_LEARNSET(0),

    [SPECIES_ABOMASNOW]   = TMHM_LEARNSET(0),

    [SPECIES_WEAVILE]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAGNEZONE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_LICKILICKY]  = TMHM_LEARNSET(0),

    [SPECIES_RHYPERIOR]   = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TANGROWTH]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ELECTIVIRE]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAGMORTAR]   = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TOGEKISS]    = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM61_AURA_SPHERE)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM02_FLY)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_YANMEGA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_LEAFEON]     = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GLACEON]     = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GLISCOR]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAMOSWINE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PORYGON_Z]   = TMHM_LEARNSET(0),

    [SPECIES_GALLADE]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM61_AURA_SPHERE)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM63_HYPNOSIS)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PROBOPASS]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DUSKNOIR]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM05_FLASH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FROSLASS]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_ROTOM]       = TMHM_LEARNSET(0),

    [SPECIES_UXIE]        = TMHM_LEARNSET(0),

    [SPECIES_MESPRIT]     = TMHM_LEARNSET(0),

    [SPECIES_AZELF]       = TMHM_LEARNSET(0),

    [SPECIES_DIALGA]      = TMHM_LEARNSET(0),

    [SPECIES_PALKIA]      = TMHM_LEARNSET(0),

    [SPECIES_HEATRAN]     = TMHM_LEARNSET(0),

    [SPECIES_REGIGIGAS]   = TMHM_LEARNSET(0),

    [SPECIES_GIRATINA]    = TMHM_LEARNSET(0),

    [SPECIES_CRESSELIA]   = TMHM_LEARNSET(0),

    [SPECIES_PHIONE]      = TMHM_LEARNSET(0),

    [SPECIES_MANAPHY]     = TMHM_LEARNSET(0),

    [SPECIES_DARKRAI]     = TMHM_LEARNSET(0),

    [SPECIES_SHAYMIN]     = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS]      = TMHM_LEARNSET(0),

    [SPECIES_VICTINI]     = TMHM_LEARNSET(0),

    [SPECIES_SNIVY]       = TMHM_LEARNSET(0),

    [SPECIES_SERVINE]     = TMHM_LEARNSET(0),

    [SPECIES_SERPERIOR]   = TMHM_LEARNSET(0),

    [SPECIES_TEPIG]       = TMHM_LEARNSET(0),

    [SPECIES_PIGNITE]     = TMHM_LEARNSET(0),

    [SPECIES_EMBOAR]      = TMHM_LEARNSET(0),

    [SPECIES_OSHAWOTT]    = TMHM_LEARNSET(0),

    [SPECIES_DEWOTT]      = TMHM_LEARNSET(0),

    [SPECIES_SAMUROTT]    = TMHM_LEARNSET(0),

    [SPECIES_PATRAT]      = TMHM_LEARNSET(0),

    [SPECIES_WATCHOG]     = TMHM_LEARNSET(0),

    [SPECIES_LILLIPUP]    = TMHM_LEARNSET(0),

    [SPECIES_HERDIER]     = TMHM_LEARNSET(0),

    [SPECIES_STOUTLAND]   = TMHM_LEARNSET(0),

    [SPECIES_PURRLOIN]    = TMHM_LEARNSET(0),

    [SPECIES_LIEPARD]     = TMHM_LEARNSET(0),

    [SPECIES_PANSAGE]     = TMHM_LEARNSET(0),

    [SPECIES_SIMISAGE]    = TMHM_LEARNSET(0),

    [SPECIES_PANSEAR]     = TMHM_LEARNSET(0),

    [SPECIES_SIMISEAR]    = TMHM_LEARNSET(0),

    [SPECIES_PANPOUR]     = TMHM_LEARNSET(0),

    [SPECIES_SIMIPOUR]    = TMHM_LEARNSET(0),

    [SPECIES_MUNNA]       = TMHM_LEARNSET(0),

    [SPECIES_MUSHARNA]    = TMHM_LEARNSET(0),

    [SPECIES_PIDOVE]      = TMHM_LEARNSET(0),

    [SPECIES_TRANQUILL]   = TMHM_LEARNSET(0),

    [SPECIES_UNFEZANT]    = TMHM_LEARNSET(0),

    [SPECIES_BLITZLE]     = TMHM_LEARNSET(0),

    [SPECIES_ZEBSTRIKA]   = TMHM_LEARNSET(0),

    [SPECIES_ROGGENROLA]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BOLDORE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GIGALITH]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_WOOBAT]      = TMHM_LEARNSET(0),

    [SPECIES_SWOOBAT]     = TMHM_LEARNSET(0),

    [SPECIES_DRILBUR]     = TMHM_LEARNSET(0),

    [SPECIES_EXCADRILL]   = TMHM_LEARNSET(0),

    [SPECIES_AUDINO]      = TMHM_LEARNSET(0),

    [SPECIES_TIMBURR]     = TMHM_LEARNSET(0),

    [SPECIES_GURDURR]     = TMHM_LEARNSET(0),

    [SPECIES_CONKELDURR]  = TMHM_LEARNSET(0),

    [SPECIES_TYMPOLE]     = TMHM_LEARNSET(0),

    [SPECIES_PALPITOAD]   = TMHM_LEARNSET(0),

    [SPECIES_SEISMITOAD]  = TMHM_LEARNSET(0),

    [SPECIES_THROH]       = TMHM_LEARNSET(0),

    [SPECIES_SAWK]        = TMHM_LEARNSET(0),

    [SPECIES_SEWADDLE]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_SWADLOON]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_LEAVANNY]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VENIPEDE]    = TMHM_LEARNSET(0),

    [SPECIES_WHIRLIPEDE]  = TMHM_LEARNSET(0),

    [SPECIES_SCOLIPEDE]   = TMHM_LEARNSET(0),

    [SPECIES_COTTONEE]    = TMHM_LEARNSET(0),

    [SPECIES_WHIMSICOTT]  = TMHM_LEARNSET(0),

    [SPECIES_PETILIL]     = TMHM_LEARNSET(0),

    [SPECIES_LILLIGANT]   = TMHM_LEARNSET(0),

    [SPECIES_BASCULIN]    = TMHM_LEARNSET(0),

    [SPECIES_SANDILE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)),

    [SPECIES_KROKOROK]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_KROOKODILE]  = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DARUMAKA]    = TMHM_LEARNSET(0),

    [SPECIES_DARMANITAN]  = TMHM_LEARNSET(0),

    [SPECIES_MARACTUS]    = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)),

    [SPECIES_DWEBBLE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CRUSTLE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SCRAGGY]     = TMHM_LEARNSET(0),

    [SPECIES_SCRAFTY]     = TMHM_LEARNSET(0),

    [SPECIES_SIGILYPH]    = TMHM_LEARNSET(0),

    [SPECIES_YAMASK]      = TMHM_LEARNSET(0),

    [SPECIES_COFAGRIGUS]  = TMHM_LEARNSET(0),

    [SPECIES_TIRTOUGA]    = TMHM_LEARNSET(0),

    [SPECIES_CARRACOSTA]  = TMHM_LEARNSET(0),

    [SPECIES_ARCHEN]      = TMHM_LEARNSET(0),

    [SPECIES_ARCHEOPS]    = TMHM_LEARNSET(0),

    [SPECIES_TRUBBISH]    = TMHM_LEARNSET(0),

    [SPECIES_GARBODOR]    = TMHM_LEARNSET(0),

    [SPECIES_ZORUA]       = TMHM_LEARNSET(0),

    [SPECIES_ZOROARK]     = TMHM_LEARNSET(0),

    [SPECIES_MINCCINO]    = TMHM_LEARNSET(0),

    [SPECIES_CINCCINO]    = TMHM_LEARNSET(0),

    [SPECIES_GOTHITA]     = TMHM_LEARNSET(0),

    [SPECIES_GOTHORITA]   = TMHM_LEARNSET(0),

    [SPECIES_GOTHITELLE]  = TMHM_LEARNSET(0),

    [SPECIES_SOLOSIS]     = TMHM_LEARNSET(0),

    [SPECIES_DUOSION]     = TMHM_LEARNSET(0),

    [SPECIES_REUNICLUS]   = TMHM_LEARNSET(0),

    [SPECIES_DUCKLETT]    = TMHM_LEARNSET(0),

    [SPECIES_SWANNA]      = TMHM_LEARNSET(0),

    [SPECIES_VANILLITE]   = TMHM_LEARNSET(0),

    [SPECIES_VANILLISH]   = TMHM_LEARNSET(0),

    [SPECIES_VANILLUXE]   = TMHM_LEARNSET(0),

    [SPECIES_DEERLING]    = TMHM_LEARNSET(0),

    [SPECIES_SAWSBUCK]    = TMHM_LEARNSET(0),

    [SPECIES_EMOLGA]      = TMHM_LEARNSET(0),

    [SPECIES_KARRABLAST]  = TMHM_LEARNSET(0),

    [SPECIES_ESCAVALIER]  = TMHM_LEARNSET(0),

    [SPECIES_FOONGUS]     = TMHM_LEARNSET(0),

    [SPECIES_AMOONGUSS]   = TMHM_LEARNSET(0),

    [SPECIES_FRILLISH]    = TMHM_LEARNSET(0),

    [SPECIES_JELLICENT]   = TMHM_LEARNSET(0),

    [SPECIES_ALOMOMOLA]   = TMHM_LEARNSET(0),

    [SPECIES_JOLTIK]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_GALVANTULA]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_FERROSEED]   = TMHM_LEARNSET(0),

    [SPECIES_FERROTHORN]  = TMHM_LEARNSET(0),

    [SPECIES_KLINK]       = TMHM_LEARNSET(0),

    [SPECIES_KLANG]       = TMHM_LEARNSET(0),

    [SPECIES_KLINKLANG]   = TMHM_LEARNSET(0),

    [SPECIES_TYNAMO]      = TMHM_LEARNSET(0),

    [SPECIES_EELEKTRIK]   = TMHM_LEARNSET(0),

    [SPECIES_EELEKTROSS]  = TMHM_LEARNSET(0),

    [SPECIES_ELGYEM]      = TMHM_LEARNSET(0),

    [SPECIES_BEHEEYEM]    = TMHM_LEARNSET(0),

    [SPECIES_LITWICK]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_LAMPENT]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_CHANDELURE]  = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_AXEW]        = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FRAXURE]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                                | TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HAXORUS]     = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                                | TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CUBCHOO]     = TMHM_LEARNSET(0),

    [SPECIES_BEARTIC]     = TMHM_LEARNSET(0),

    [SPECIES_CRYOGONAL]   = TMHM_LEARNSET(0),

    [SPECIES_SHELMET]     = TMHM_LEARNSET(0),

    [SPECIES_ACCELGOR]    = TMHM_LEARNSET(0),

    [SPECIES_STUNFISK]    = TMHM_LEARNSET(0),

    [SPECIES_MIENFOO]     = TMHM_LEARNSET(0),

    [SPECIES_MIENSHAO]    = TMHM_LEARNSET(0),

    [SPECIES_DRUDDIGON]   = TMHM_LEARNSET(0),

    [SPECIES_GOLETT]      = TMHM_LEARNSET(0),

    [SPECIES_GOLURK]      = TMHM_LEARNSET(0),

    [SPECIES_PAWNIARD]    = TMHM_LEARNSET(0),

    [SPECIES_BISHARP]     = TMHM_LEARNSET(0),

    [SPECIES_BOUFFALANT]  = TMHM_LEARNSET(0),

    [SPECIES_RUFFLET]     = TMHM_LEARNSET(0),

    [SPECIES_BRAVIARY]    = TMHM_LEARNSET(0),

    [SPECIES_VULLABY]     = TMHM_LEARNSET(0),

    [SPECIES_MANDIBUZZ]   = TMHM_LEARNSET(0),

    [SPECIES_HEATMOR]     = TMHM_LEARNSET(0),

    [SPECIES_DURANT]      = TMHM_LEARNSET(0),

    [SPECIES_DEINO]       = TMHM_LEARNSET(0),

    [SPECIES_ZWEILOUS]    = TMHM_LEARNSET(0),

    [SPECIES_HYDREIGON]   = TMHM_LEARNSET(0),

    [SPECIES_LARVESTA]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)),

    [SPECIES_VOLCARONA]   = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM02_FLY)),

    [SPECIES_COBALION]    = TMHM_LEARNSET(0),

    [SPECIES_TERRAKION]   = TMHM_LEARNSET(0),

    [SPECIES_VIRIZION]    = TMHM_LEARNSET(0),

    [SPECIES_TORNADUS]    = TMHM_LEARNSET(0),

    [SPECIES_THUNDURUS]   = TMHM_LEARNSET(0),

    [SPECIES_RESHIRAM]    = TMHM_LEARNSET(0),

    [SPECIES_ZEKROM]      = TMHM_LEARNSET(0),

    [SPECIES_LANDORUS]    = TMHM_LEARNSET(0),

    [SPECIES_KYUREM]      = TMHM_LEARNSET(0),

    [SPECIES_KELDEO]      = TMHM_LEARNSET(0),

    [SPECIES_MELOETTA]    = TMHM_LEARNSET(0),

    [SPECIES_GENESECT]    = TMHM_LEARNSET(0),

    [SPECIES_CHESPIN]     = TMHM_LEARNSET(0),

    [SPECIES_QUILLADIN]   = TMHM_LEARNSET(0),

    [SPECIES_CHESNAUGHT]  = TMHM_LEARNSET(0),

    [SPECIES_FENNEKIN]    = TMHM_LEARNSET(0),

    [SPECIES_BRAIXEN]     = TMHM_LEARNSET(0),

    [SPECIES_DELPHOX]     = TMHM_LEARNSET(0),

    [SPECIES_FROAKIE]     = TMHM_LEARNSET(0),

    [SPECIES_FROGADIER]   = TMHM_LEARNSET(0),

    [SPECIES_GRENINJA]    = TMHM_LEARNSET(0),

    [SPECIES_BUNNELBY]    = TMHM_LEARNSET(0),

    [SPECIES_DIGGERSBY]   = TMHM_LEARNSET(0),

    [SPECIES_FLETCHLING]  = TMHM_LEARNSET(0),

    [SPECIES_FLETCHINDER] = TMHM_LEARNSET(0),

    [SPECIES_TALONFLAME]  = TMHM_LEARNSET(0),

    [SPECIES_SCATTERBUG]  = TMHM_LEARNSET(0),

    [SPECIES_SPEWPA]      = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON]    = TMHM_LEARNSET(0),

    [SPECIES_LITLEO]      = TMHM_LEARNSET(0),

    [SPECIES_PYROAR]      = TMHM_LEARNSET(0),

    [SPECIES_FLABEBE]     = TMHM_LEARNSET(0),

    [SPECIES_FLOETTE]     = TMHM_LEARNSET(0),

    [SPECIES_FLORGES]     = TMHM_LEARNSET(0),

    [SPECIES_SKIDDO]      = TMHM_LEARNSET(0),

    [SPECIES_GOGOAT]      = TMHM_LEARNSET(0),

    [SPECIES_PANCHAM]     = TMHM_LEARNSET(0),

    [SPECIES_PANGORO]     = TMHM_LEARNSET(0),

    [SPECIES_FURFROU]     = TMHM_LEARNSET(0),

    [SPECIES_ESPURR]      = TMHM_LEARNSET(0),

    [SPECIES_MEOWSTIC]    = TMHM_LEARNSET(0),

    [SPECIES_HONEDGE]     = TMHM_LEARNSET(0),

    [SPECIES_DOUBLADE]    = TMHM_LEARNSET(0),

    [SPECIES_AEGISLASH]   = TMHM_LEARNSET(0),

    [SPECIES_SPRITZEE]    = TMHM_LEARNSET(0),

    [SPECIES_AROMATISSE]  = TMHM_LEARNSET(0),

    [SPECIES_SWIRLIX]     = TMHM_LEARNSET(0),

    [SPECIES_SLURPUFF]    = TMHM_LEARNSET(0),

    [SPECIES_INKAY]       = TMHM_LEARNSET(0),

    [SPECIES_MALAMAR]     = TMHM_LEARNSET(0),

    [SPECIES_BINACLE]     = TMHM_LEARNSET(0),

    [SPECIES_BARBARACLE]  = TMHM_LEARNSET(0),

    [SPECIES_SKRELP]      = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_DRAGALGE]    = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_CLAUNCHER]   = TMHM_LEARNSET(0),

    [SPECIES_CLAWITZER]   = TMHM_LEARNSET(0),

    [SPECIES_HELIOPTILE]  = TMHM_LEARNSET(0),

    [SPECIES_HELIOLISK]   = TMHM_LEARNSET(0),

    [SPECIES_TYRUNT]      = TMHM_LEARNSET(0),

    [SPECIES_TYRANTRUM]   = TMHM_LEARNSET(0),

    [SPECIES_AMAURA]      = TMHM_LEARNSET(0),

    [SPECIES_AURORUS]     = TMHM_LEARNSET(0),

    [SPECIES_SYLVEON]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_HAWLUCHA]    = TMHM_LEARNSET(0),

    [SPECIES_DEDENNE]     = TMHM_LEARNSET(0),

    [SPECIES_CARBINK]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM54_POWER_GEM)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(HM05_FLASH)),

    [SPECIES_GOOMY]       = TMHM_LEARNSET(0),

    [SPECIES_SLIGGOO]     = TMHM_LEARNSET(0),

    [SPECIES_GOODRA]      = TMHM_LEARNSET(0),

    [SPECIES_KLEFKI]      = TMHM_LEARNSET(0),

    [SPECIES_PHANTUMP]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TREVENANT]   = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM09_SEED_BOMB)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM04_STRENGTH)
                                            | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PUMPKABOO]   = TMHM_LEARNSET(0),

    [SPECIES_GOURGEIST]   = TMHM_LEARNSET(0),

    [SPECIES_BERGMITE]    = TMHM_LEARNSET(0),

    [SPECIES_AVALUGG]     = TMHM_LEARNSET(0),

    [SPECIES_NOIBAT]      = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM02_FLY)),

    [SPECIES_NOIVERN]     = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM65_VOLT_TACKLE)
                                            | TMHM(HM01_CUT)
                                            | TMHM(HM02_FLY)),

    [SPECIES_XERNEAS]     = TMHM_LEARNSET(0),

    [SPECIES_YVELTAL]     = TMHM_LEARNSET(0),

    [SPECIES_ZYGARDE]     = TMHM_LEARNSET(0),

    [SPECIES_DIANCIE]     = TMHM_LEARNSET(0),

    [SPECIES_HOOPA]       = TMHM_LEARNSET(0),

    [SPECIES_VOLCANION]   = TMHM_LEARNSET(0),

    [SPECIES_ROWLET]      = TMHM_LEARNSET(0),

    [SPECIES_DARTRIX]     = TMHM_LEARNSET(0),

    [SPECIES_DECIDUEYE]   = TMHM_LEARNSET(0),

    [SPECIES_LITTEN]      = TMHM_LEARNSET(0),

    [SPECIES_TORRACAT]    = TMHM_LEARNSET(0),

    [SPECIES_INCINEROAR]  = TMHM_LEARNSET(0),

    [SPECIES_POPPLIO]     = TMHM_LEARNSET(0),

    [SPECIES_BRIONNE]     = TMHM_LEARNSET(0),

    [SPECIES_PRIMARINA]   = TMHM_LEARNSET(0),

    [SPECIES_PIKIPEK]     = TMHM_LEARNSET(0),

    [SPECIES_TRUMBEAK]    = TMHM_LEARNSET(0),

    [SPECIES_TOUCANNON]   = TMHM_LEARNSET(0),

    [SPECIES_YUNGOOS]     = TMHM_LEARNSET(0),

    [SPECIES_GUMSHOOS]    = TMHM_LEARNSET(0),

    [SPECIES_GRUBBIN]     = TMHM_LEARNSET(0),

    [SPECIES_CHARJABUG]   = TMHM_LEARNSET(0),

    [SPECIES_VIKAVOLT]    = TMHM_LEARNSET(0),

    [SPECIES_CRABRAWLER]  = TMHM_LEARNSET(0),

    [SPECIES_CRABOMINABLE]  = TMHM_LEARNSET(0),

    [SPECIES_ORICORIO]    = TMHM_LEARNSET(0),

    [SPECIES_CUTIEFLY]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM64_SIGNAL_BEAM)),

    [SPECIES_RIBOMBEE]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM40_DUAL_WINGBEAT)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM45_PLAY_ROUGH)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM59_AIR_SLASH)
                                            | TMHM(TM64_SIGNAL_BEAM)),

    [SPECIES_ROCKRUFF]    = TMHM_LEARNSET(0),

    [SPECIES_LYCANROC]    = TMHM_LEARNSET(0),

    [SPECIES_WISHIWASHI]  = TMHM_LEARNSET(0),

    [SPECIES_MAREANIE]    = TMHM_LEARNSET(0),

    [SPECIES_TOXAPEX]     = TMHM_LEARNSET(0),

    [SPECIES_MUDBRAY]     = TMHM_LEARNSET(0),

    [SPECIES_MUDSDALE]    = TMHM_LEARNSET(0),

    [SPECIES_DEWPIDER]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)),

    [SPECIES_ARAQUANID]   = TMHM_LEARNSET(TMHM(TM03_HYDRO_PUMP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM64_SIGNAL_BEAM)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_FOMANTIS]    = TMHM_LEARNSET(0),

    [SPECIES_LURANTIS]    = TMHM_LEARNSET(0),

    [SPECIES_MORELULL]    = TMHM_LEARNSET(0),

    [SPECIES_SHIINOTIC]   = TMHM_LEARNSET(0),

    [SPECIES_SALANDIT]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                                | TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)),

    [SPECIES_SALAZZLE]    = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                                | TMHM(TM02_DRAGON_CLAW)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM50_FLARE_BLITZ)
                                            | TMHM(TM57_DRAGON_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)),

    [SPECIES_STUFFUL]     = TMHM_LEARNSET(0),

    [SPECIES_BEWEAR]      = TMHM_LEARNSET(0),

    [SPECIES_BOUNSWEET]   = TMHM_LEARNSET(0),

    [SPECIES_STEENEE]     = TMHM_LEARNSET(0),

    [SPECIES_TSAREENA]    = TMHM_LEARNSET(0),

    [SPECIES_COMFEY]      = TMHM_LEARNSET(0),

    [SPECIES_ORANGURU]    = TMHM_LEARNSET(0),

    [SPECIES_PASSIMIAN]   = TMHM_LEARNSET(0),

    [SPECIES_WIMPOD]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM07_WATERFALL)),

    [SPECIES_GOLISOPOD]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM08_BULK_UP)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(HM03_SURF)
                                            | TMHM(HM06_ROCK_SMASH)
                                            | TMHM(HM07_WATERFALL)
                                            | TMHM(HM08_DIVE)),

    [SPECIES_SANDYGAST]   = TMHM_LEARNSET(0),

    [SPECIES_PALOSSAND]   = TMHM_LEARNSET(0),

    [SPECIES_PYUKUMUKU]   = TMHM_LEARNSET(0),

    [SPECIES_TYPE_NULL]   = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY]    = TMHM_LEARNSET(0),

    [SPECIES_MINIOR]      = TMHM_LEARNSET(0),

    [SPECIES_KOMALA]      = TMHM_LEARNSET(0),

    [SPECIES_TURTONATOR]  = TMHM_LEARNSET(0),

    [SPECIES_TOGEDEMARU]  = TMHM_LEARNSET(0),

    [SPECIES_MIMIKYU]     = TMHM_LEARNSET(0),

    [SPECIES_BRUXISH]     = TMHM_LEARNSET(0),

    [SPECIES_DRAMPA]      = TMHM_LEARNSET(0),

    [SPECIES_DHELMISE]    = TMHM_LEARNSET(0),

    [SPECIES_JANGMO_O]    = TMHM_LEARNSET(0),

    [SPECIES_HAKAMO_O]    = TMHM_LEARNSET(0),

    [SPECIES_KOMMO_O]     = TMHM_LEARNSET(0),

    [SPECIES_TAPU_KOKO]   = TMHM_LEARNSET(0),

    [SPECIES_TAPU_LELE]   = TMHM_LEARNSET(0),

    [SPECIES_TAPU_BULU]   = TMHM_LEARNSET(0),

    [SPECIES_TAPU_FINI]   = TMHM_LEARNSET(0),

    [SPECIES_COSMOG]      = TMHM_LEARNSET(0),

    [SPECIES_COSMOEM]     = TMHM_LEARNSET(0),

    [SPECIES_SOLGALEO]    = TMHM_LEARNSET(0),

    [SPECIES_LUNALA]      = TMHM_LEARNSET(0),

    [SPECIES_NIHILEGO]    = TMHM_LEARNSET(0),

    [SPECIES_BUZZWOLE]    = TMHM_LEARNSET(0),

    [SPECIES_PHEROMOSA]   = TMHM_LEARNSET(0),

    [SPECIES_XURKITREE]   = TMHM_LEARNSET(0),

    [SPECIES_CELESTEELA]  = TMHM_LEARNSET(0),

    [SPECIES_KARTANA]     = TMHM_LEARNSET(0),

    [SPECIES_GUZZLORD]    = TMHM_LEARNSET(0),

    [SPECIES_NECROZMA]    = TMHM_LEARNSET(0),

    [SPECIES_MAGEARNA]    = TMHM_LEARNSET(0),

    [SPECIES_MARSHADOW]   = TMHM_LEARNSET(0),

    [SPECIES_POIPOLE]     = TMHM_LEARNSET(0),

    [SPECIES_NAGANADEL]   = TMHM_LEARNSET(0),

    [SPECIES_STAKATAKA]   = TMHM_LEARNSET(0),

    [SPECIES_BLACEPHALON] = TMHM_LEARNSET(0),

    [SPECIES_ZERAORA]     = TMHM_LEARNSET(0),
    //TMs of LGPE don't match with USUM
    [SPECIES_MELTAN]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)),

    [SPECIES_MELMETAL]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM23_FLASH_CANNON)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)),

    [SPECIES_GROOKEY]     = TMHM_LEARNSET(0),

    [SPECIES_THWACKEY]    = TMHM_LEARNSET(0),

    [SPECIES_RILLABOOM]   = TMHM_LEARNSET(0),

    [SPECIES_SCORBUNNY]   = TMHM_LEARNSET(0),

    [SPECIES_RABOOT]      = TMHM_LEARNSET(0),

    [SPECIES_CINDERACE]   = TMHM_LEARNSET(0),

    [SPECIES_SOBBLE]      = TMHM_LEARNSET(0),

    [SPECIES_DRIZZILE]    = TMHM_LEARNSET(0),

    [SPECIES_INTELEON]    = TMHM_LEARNSET(0),

    [SPECIES_SKWOVET]     = TMHM_LEARNSET(0),

    [SPECIES_GREEDENT]    = TMHM_LEARNSET(0),

    [SPECIES_ROOKIDEE]    = TMHM_LEARNSET(0),

    [SPECIES_CORVISQUIRE] = TMHM_LEARNSET(0),

    [SPECIES_CORVIKNIGHT] = TMHM_LEARNSET(0),

    [SPECIES_BLIPBUG]     = TMHM_LEARNSET(0),

    [SPECIES_DOTTLER]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)),

    [SPECIES_ORBEETLE]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM16_LIGHT_SCREEN)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM19_ENERGY_BALL)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM29_PSYCHIC)
                                            | TMHM(TM30_SHADOW_BALL)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM63_HYPNOSIS)),

    [SPECIES_NICKIT]      = TMHM_LEARNSET(0),

    [SPECIES_THIEVUL]     = TMHM_LEARNSET(0),

    [SPECIES_GOSSIFLEUR]  = TMHM_LEARNSET(0),

    [SPECIES_ELDEGOSS]    = TMHM_LEARNSET(0),

    [SPECIES_WOOLOO]      = TMHM_LEARNSET(0),

    [SPECIES_DUBWOOL]     = TMHM_LEARNSET(0),

    [SPECIES_CHEWTLE]     = TMHM_LEARNSET(0),

    [SPECIES_DREDNAW]     = TMHM_LEARNSET(0),

    [SPECIES_YAMPER]      = TMHM_LEARNSET(0),

    [SPECIES_BOLTUND]     = TMHM_LEARNSET(0),

    [SPECIES_ROLYCOLY]    = TMHM_LEARNSET(0),

    [SPECIES_CARKOL]      = TMHM_LEARNSET(0),

    [SPECIES_COALOSSAL]   = TMHM_LEARNSET(0),

    [SPECIES_APPLIN]      = TMHM_LEARNSET(0),

    [SPECIES_FLAPPLE]     = TMHM_LEARNSET(0),

    [SPECIES_APPLETUN]    = TMHM_LEARNSET(0),

    [SPECIES_SILICOBRA]   = TMHM_LEARNSET(0),

    [SPECIES_SANDACONDA]  = TMHM_LEARNSET(0),

    [SPECIES_CRAMORANT]   = TMHM_LEARNSET(0),

    [SPECIES_ARROKUDA]    = TMHM_LEARNSET(0),

    [SPECIES_BARRASKEWDA] = TMHM_LEARNSET(0),

    [SPECIES_TOXEL]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)),

    [SPECIES_TOXTRICITY]  = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM65_VOLT_TACKLE)),

    [SPECIES_SIZZLIPEDE]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)),

    [SPECIES_CENTISKORCH] = TMHM_LEARNSET(TMHM(TM01_WILL_O_WISP)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM50_FLARE_BLITZ)),

    [SPECIES_CLOBBOPUS]   = TMHM_LEARNSET(0),

    [SPECIES_GRAPPLOCT]   = TMHM_LEARNSET(0),

    [SPECIES_SINISTEA]    = TMHM_LEARNSET(0),

    [SPECIES_POLTEAGEIST] = TMHM_LEARNSET(0),

    [SPECIES_HATENNA]     = TMHM_LEARNSET(0),

    [SPECIES_HATTREM]     = TMHM_LEARNSET(0),

    [SPECIES_HATTERENE]   = TMHM_LEARNSET(0),

    [SPECIES_IMPIDIMP]    = TMHM_LEARNSET(0),

    [SPECIES_MORGREM]     = TMHM_LEARNSET(0),

    [SPECIES_GRIMMSNARL]  = TMHM_LEARNSET(0),

    [SPECIES_OBSTAGOON]   = TMHM_LEARNSET(0),

    [SPECIES_PERRSERKER]  = TMHM_LEARNSET(0),

    [SPECIES_CURSOLA]     = TMHM_LEARNSET(0),

    [SPECIES_SIRFETCHD]   = TMHM_LEARNSET(0),

    [SPECIES_MR_RIME]     = TMHM_LEARNSET(0),

    [SPECIES_RUNERIGUS]   = TMHM_LEARNSET(0),

    [SPECIES_MILCERY]     = TMHM_LEARNSET(0),

    [SPECIES_ALCREMIE]    = TMHM_LEARNSET(0),

    [SPECIES_FALINKS]     = TMHM_LEARNSET(0),

    [SPECIES_PINCURCHIN]  = TMHM_LEARNSET(0),

    [SPECIES_SNOM]        = TMHM_LEARNSET(0),

    [SPECIES_FROSMOTH]    = TMHM_LEARNSET(0),

    [SPECIES_STONJOURNER] = TMHM_LEARNSET(0),

    [SPECIES_EISCUE]      = TMHM_LEARNSET(0),

    [SPECIES_INDEEDEE]    = TMHM_LEARNSET(0),

    [SPECIES_MORPEKO]     = TMHM_LEARNSET(0),

    [SPECIES_CUFANT]      = TMHM_LEARNSET(0),

    [SPECIES_COPPERAJAH]  = TMHM_LEARNSET(0),

    [SPECIES_DRACOZOLT]   = TMHM_LEARNSET(0),

    [SPECIES_ARCTOZOLT]   = TMHM_LEARNSET(0),

    [SPECIES_DRACOVISH]   = TMHM_LEARNSET(0),

    [SPECIES_ARCTOVISH]   = TMHM_LEARNSET(0),

    [SPECIES_DURALUDON]   = TMHM_LEARNSET(0),

    [SPECIES_DREEPY]      = TMHM_LEARNSET(0),

    [SPECIES_DRAKLOAK]    = TMHM_LEARNSET(0),

    [SPECIES_DRAGAPULT]   = TMHM_LEARNSET(0),

    [SPECIES_ZACIAN]      = TMHM_LEARNSET(0),

    [SPECIES_ZAMAZENTA]   = TMHM_LEARNSET(0),

    [SPECIES_ETERNATUS]   = TMHM_LEARNSET(0),

    [SPECIES_KUBFU]       = TMHM_LEARNSET(0),

    [SPECIES_URSHIFU]     = TMHM_LEARNSET(0),

    [SPECIES_ZARUDE]      = TMHM_LEARNSET(0),

    [SPECIES_REGIELEKI]   = TMHM_LEARNSET(0),

    [SPECIES_REGIDRAGO]   = TMHM_LEARNSET(0),

    [SPECIES_GLASTRIER]   = TMHM_LEARNSET(0),

    [SPECIES_SPECTRIER]   = TMHM_LEARNSET(0),

    [SPECIES_CALYREX]     = TMHM_LEARNSET(0),

    [SPECIES_RATTATA_ALOLAN]  = TMHM_LEARNSET(0),

    [SPECIES_RATICATE_ALOLAN]  = TMHM_LEARNSET(0),

    [SPECIES_RAICHU_ALOLAN]  = TMHM_LEARNSET(0),

    [SPECIES_SANDSHREW_ALOLAN]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)),

    [SPECIES_SANDSLASH_ALOLAN]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM12_NIGHT_SLASH)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM22_X_SCISSOR)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM46_THIEF)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM52_ICE_PUNCH)
                                            | TMHM(TM58_SHADOW_CLAW)
                                            | TMHM(TM62_FOCUS_BLAST)),

    [SPECIES_VULPIX_ALOLAN]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM63_HYPNOSIS)),

    [SPECIES_NINETALES_ALOLAN]  = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM07_HAIL)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM13_ICE_BEAM)
                                            | TMHM(TM14_BLIZZARD)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM18_RAIN_DANCE)
                                            | TMHM(TM20_SAFEGUARD)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM33_REFLECT)
                                            | TMHM(TM41_CONFUSE_RAY)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM48_ZEN_HEADBUTT)
                                            | TMHM(TM49_DARK_PULSE)
                                            | TMHM(TM56_DAZZLING_GLEAM)
                                            | TMHM(TM63_HYPNOSIS)),

    [SPECIES_DIGLETT_ALOLAN]  = TMHM_LEARNSET(0),

    [SPECIES_DUGTRIO_ALOLAN]  = TMHM_LEARNSET(0),

    [SPECIES_MEOWTH_ALOLAN]  = TMHM_LEARNSET(0),

    [SPECIES_PERSIAN_ALOLAN]  = TMHM_LEARNSET(0),

    [SPECIES_GEODUDE_ALOLAN]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)),
    
    [SPECIES_GRAVELER_ALOLAN]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)),
    
    [SPECIES_GOLEM_ALOLAN]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM11_SUNNY_DAY)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM26_EARTHQUAKE)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM28_DIG)
                                            | TMHM(TM31_BRICK_BREAK)
                                            | TMHM(TM32_DOUBLE_TEAM)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM35_FLAMETHROWER)
                                            | TMHM(TM37_SANDSTORM)
                                            | TMHM(TM38_FIRE_BLAST)
                                            | TMHM(TM39_ROCK_SLIDE)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM47_IRON_HEAD)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM60_EARTH_POWER)
                                            | TMHM(TM62_FOCUS_BLAST)
                                            | TMHM(TM65_VOLT_TACKLE)),
    
    [SPECIES_GRIMER_ALOLAN]  = TMHM_LEARNSET(0),
                                                                      
    [SPECIES_MUK_ALOLAN]  = TMHM_LEARNSET(0),

    [SPECIES_EXEGGUTOR_ALOLAN]  = TMHM_LEARNSET(0),
                                                                                                         
    [SPECIES_MAROWAK_ALOLAN]  = TMHM_LEARNSET(0),
           
    [SPECIES_MEOWTH_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_PONYTA_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_RAPIDASH_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_SLOWPOKE_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_SLOWBRO_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_FARFETCHD_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_WEEZING_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_MR_MIME_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_ARTICUNO_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_ZAPDOS_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_MOLTRES_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_SLOWKING_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_CORSOLA_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_ZIGZAGOON_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_LINOONE_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_DARUMAKA_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_DARMANITAN_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_YAMASK_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_STUNFISK_GALARIAN]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_COSPLAY]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_ROCK_STAR]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_BELLE]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_POP_STAR]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_PH_D]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_LIBRE]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_ORIGINAL_CAP]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_HOENN_CAP]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_SINNOH_CAP]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_UNOVA_CAP]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_KALOS_CAP]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_ALOLA_CAP]  = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_PARTNER_CAP]  = TMHM_LEARNSET(0),

    [SPECIES_PICHU_SPIKY_EARED]  = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_B]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_C]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_D]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_E]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_F]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_G]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_H]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_I]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_J]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_K]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_L]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_M]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_N]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_O]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_P]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_Q]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_R]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_S]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_T]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_U]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_V]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_W]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_X]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_Y]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_Z]     = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_EMARK] = TMHM_LEARNSET(0),

    [SPECIES_UNOWN_QMARK] = TMHM_LEARNSET(0),

    [SPECIES_DEOXYS_ATTACK]  = TMHM_LEARNSET(0),

    [SPECIES_DEOXYS_DEFENSE]  = TMHM_LEARNSET(0),

    [SPECIES_DEOXYS_SPEED]  = TMHM_LEARNSET(0),

    [SPECIES_BURMY_SANDY_CLOAK]  = TMHM_LEARNSET(0),

    [SPECIES_BURMY_TRASH_CLOAK]  = TMHM_LEARNSET(0),

    [SPECIES_WORMADAM_SANDY_CLOAK]  = TMHM_LEARNSET(0),

    [SPECIES_WORMADAM_TRASH_CLOAK]  = TMHM_LEARNSET(0),

    [SPECIES_SHELLOS_EAST_SEA]  = TMHM_LEARNSET(0),

    [SPECIES_GASTRODON_EAST_SEA]  = TMHM_LEARNSET(0),

    [SPECIES_ROTOM_HEAT]  = TMHM_LEARNSET(0),

    [SPECIES_ROTOM_WASH]  = TMHM_LEARNSET(0),

    [SPECIES_ROTOM_FROST] = TMHM_LEARNSET(0),

    [SPECIES_ROTOM_FAN]   = TMHM_LEARNSET(0),

    [SPECIES_ROTOM_MOW]   = TMHM_LEARNSET(0),

    [SPECIES_GIRATINA_ORIGIN]  = TMHM_LEARNSET(0),

    [SPECIES_SHAYMIN_SKY] = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_FIGHTING]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_FLYING]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_POISON]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_GROUND]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_ROCK] = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_BUG]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_GHOST]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_STEEL]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_FIRE] = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_WATER]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_GRASS]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_ELECTRIC]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_PSYCHIC]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_ICE]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_DRAGON]  = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_DARK] = TMHM_LEARNSET(0),

    [SPECIES_ARCEUS_FAIRY]  = TMHM_LEARNSET(0),

    [SPECIES_BASCULIN_BLUE_STRIPED]  = TMHM_LEARNSET(0),

    [SPECIES_DEERLING_SUMMER]  = TMHM_LEARNSET(0),

    [SPECIES_DEERLING_AUTUMN]  = TMHM_LEARNSET(0),

    [SPECIES_DEERLING_WINTER]  = TMHM_LEARNSET(0),

    [SPECIES_SAWSBUCK_SUMMER]  = TMHM_LEARNSET(0),

    [SPECIES_SAWSBUCK_AUTUMN]  = TMHM_LEARNSET(0),

    [SPECIES_SAWSBUCK_WINTER]  = TMHM_LEARNSET(0),

    [SPECIES_TORNADUS_THERIAN]  = TMHM_LEARNSET(0),

    [SPECIES_THUNDURUS_THERIAN]  = TMHM_LEARNSET(0),

    [SPECIES_LANDORUS_THERIAN]  = TMHM_LEARNSET(0),

    [SPECIES_KYUREM_WHITE]  = TMHM_LEARNSET(0),

    [SPECIES_KYUREM_BLACK]  = TMHM_LEARNSET(0),

    [SPECIES_KELDEO_RESOLUTE]  = TMHM_LEARNSET(0),

    [SPECIES_GENESECT_DOUSE_DRIVE]  = TMHM_LEARNSET(0),

    [SPECIES_GENESECT_SHOCK_DRIVE]  = TMHM_LEARNSET(0),

    [SPECIES_GENESECT_BURN_DRIVE]  = TMHM_LEARNSET(0),

    [SPECIES_GENESECT_CHILL_DRIVE]  = TMHM_LEARNSET(0),

    [SPECIES_GRENINJA_BATTLE_BOND]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_POLAR]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_TUNDRA]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_CONTINENTAL]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_GARDEN]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_ELEGANT]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_MEADOW]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_MODERN]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_MARINE]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_ARCHIPELAGO]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_HIGH_PLAINS]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_SANDSTORM]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_RIVER]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_MONSOON]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_SAVANNA]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_SUN]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_OCEAN]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_JUNGLE]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_FANCY]  = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON_POKE_BALL]  = TMHM_LEARNSET(0),

    [SPECIES_FLABEBE_YELLOW_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLABEBE_ORANGE_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLABEBE_BLUE_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLABEBE_WHITE_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLOETTE_YELLOW_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLOETTE_ORANGE_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLOETTE_BLUE_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLOETTE_WHITE_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLOETTE_ETERNAL_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLORGES_YELLOW_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLORGES_ORANGE_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLORGES_BLUE_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FLORGES_WHITE_FLOWER]  = TMHM_LEARNSET(0),

    [SPECIES_FURFROU_HEART_TRIM]  = TMHM_LEARNSET(0),

    [SPECIES_FURFROU_STAR_TRIM]  = TMHM_LEARNSET(0),

    [SPECIES_FURFROU_DIAMOND_TRIM]  = TMHM_LEARNSET(0),

    [SPECIES_FURFROU_DEBUTANTE_TRIM]  = TMHM_LEARNSET(0),

    [SPECIES_FURFROU_MATRON_TRIM]  = TMHM_LEARNSET(0),

    [SPECIES_FURFROU_DANDY_TRIM]  = TMHM_LEARNSET(0),

    [SPECIES_FURFROU_LA_REINE_TRIM]  = TMHM_LEARNSET(0),

    [SPECIES_FURFROU_KABUKI_TRIM]  = TMHM_LEARNSET(0),

    [SPECIES_FURFROU_PHARAOH_TRIM]  = TMHM_LEARNSET(0),

    [SPECIES_MEOWSTIC_FEMALE]  = TMHM_LEARNSET(0),

    [SPECIES_PUMPKABOO_SMALL]  = TMHM_LEARNSET(0),

    [SPECIES_PUMPKABOO_LARGE]  = TMHM_LEARNSET(0),

    [SPECIES_PUMPKABOO_SUPER]  = TMHM_LEARNSET(0),

    [SPECIES_GOURGEIST_SMALL]  = TMHM_LEARNSET(0),

    [SPECIES_GOURGEIST_LARGE]  = TMHM_LEARNSET(0),

    [SPECIES_GOURGEIST_SUPER]  = TMHM_LEARNSET(0),

    [SPECIES_ZYGARDE_10]  = TMHM_LEARNSET(0),

    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT]  = TMHM_LEARNSET(0),

    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT]  = TMHM_LEARNSET(0),

    [SPECIES_ZYGARDE_COMPLETE]  = TMHM_LEARNSET(0),

    [SPECIES_HOOPA_UNBOUND]  = TMHM_LEARNSET(0),

    [SPECIES_ORICORIO_POM_POM]  = TMHM_LEARNSET(0),

    [SPECIES_ORICORIO_PAU]  = TMHM_LEARNSET(0),

    [SPECIES_ORICORIO_SENSU]  = TMHM_LEARNSET(0),

    [SPECIES_ROCKRUFF_OWN_TEMPO]  = TMHM_LEARNSET(0),

    [SPECIES_LYCANROC_MIDNIGHT]  = TMHM_LEARNSET(0),

    [SPECIES_LYCANROC_DUSK]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_FIGHTING]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_FLYING]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_POISON]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_GROUND]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_ROCK]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_BUG]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_GHOST]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_STEEL]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_FIRE]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_WATER]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_GRASS]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_ELECTRIC]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_PSYCHIC]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_ICE]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_DRAGON]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_DARK]  = TMHM_LEARNSET(0),

    [SPECIES_SILVALLY_FAIRY]  = TMHM_LEARNSET(0),

    [SPECIES_MINIOR_CORE_RED]  = TMHM_LEARNSET(0),

    [SPECIES_MINIOR_CORE_ORANGE]  = TMHM_LEARNSET(0),

    [SPECIES_MINIOR_CORE_YELLOW]  = TMHM_LEARNSET(0),

    [SPECIES_MINIOR_CORE_GREEN]  = TMHM_LEARNSET(0),

    [SPECIES_MINIOR_CORE_BLUE]  = TMHM_LEARNSET(0),

    [SPECIES_MINIOR_CORE_INDIGO]  = TMHM_LEARNSET(0),

    [SPECIES_MINIOR_CORE_VIOLET]  = TMHM_LEARNSET(0),

    [SPECIES_NECROZMA_DUSK_MANE]  = TMHM_LEARNSET(0),

    [SPECIES_NECROZMA_DAWN_WINGS]  = TMHM_LEARNSET(0),

    [SPECIES_MAGEARNA_ORIGINAL_COLOR]  = TMHM_LEARNSET(0),

    [SPECIES_TOXTRICITY_LOW_KEY]  = TMHM_LEARNSET(TMHM(TM05_HYPER_VOICE)
                                            | TMHM(TM06_TOXIC)
                                            | TMHM(TM10_HIDDEN_POWER)
                                            | TMHM(TM15_HYPER_BEAM)
                                            | TMHM(TM17_PROTECT)
                                            | TMHM(TM21_POISON_JAB)
                                            | TMHM(TM24_THUNDERBOLT)
                                            | TMHM(TM25_THUNDER)
                                            | TMHM(TM27_RETURN)
                                            | TMHM(TM34_THUNDER_WAVE)
                                            | TMHM(TM36_SLUDGE_BOMB)
                                            | TMHM(TM42_GIGA_IMPACT)
                                            | TMHM(TM43_SECRET_POWER)
                                            | TMHM(TM44_REST)
                                            | TMHM(TM51_FIRE_PUNCH)
                                            | TMHM(TM53_THUNDER_PUNCH)
                                            | TMHM(TM65_VOLT_TACKLE)),

    [SPECIES_SINISTEA_ANTIQUE]  = TMHM_LEARNSET(0),

    [SPECIES_POLTEAGEIST_ANTIQUE]  = TMHM_LEARNSET(0),

    [SPECIES_ALCREMIE_RUBY_CREAM]  = TMHM_LEARNSET(0),

    [SPECIES_ALCREMIE_MATCHA_CREAM]  = TMHM_LEARNSET(0),

    [SPECIES_ALCREMIE_MINT_CREAM]  = TMHM_LEARNSET(0),

    [SPECIES_ALCREMIE_LEMON_CREAM]  = TMHM_LEARNSET(0),

    [SPECIES_ALCREMIE_SALTED_CREAM]  = TMHM_LEARNSET(0),

    [SPECIES_ALCREMIE_RUBY_SWIRL]  = TMHM_LEARNSET(0),

    [SPECIES_ALCREMIE_CARAMEL_SWIRL]  = TMHM_LEARNSET(0),

    [SPECIES_ALCREMIE_RAINBOW_SWIRL]  = TMHM_LEARNSET(0),

    [SPECIES_INDEEDEE_FEMALE]  = TMHM_LEARNSET(0),

    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE]  = TMHM_LEARNSET(0),

    [SPECIES_ZARUDE_DADA] = TMHM_LEARNSET(0),

    [SPECIES_CALYREX_ICE_RIDER]  = TMHM_LEARNSET(0),

    [SPECIES_CALYREX_SHADOW_RIDER]  = TMHM_LEARNSET(0),
};
