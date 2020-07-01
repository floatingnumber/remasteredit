#include "structtype.h"
#include "theatertype.h"
std::map<std::string, StructType*> StructType::StructMapTD;
std::map<std::string, StructType*> StructType::StructMapRA;
static bool mask1[9] = { false, false, false, true, true, true, true, true, true };
static bool mask1b[12] = { false, false, false, true, true, true, true, true, true, true, true, true };
static bool mask2[1] = { true };
static bool mask3[2] = { false, true };
static bool mask4[4] = { true, false, true, true };
static bool mask4b[6] = { true, false, true, true, true, true };
static bool mask5[6] = { true, true, true, true, true, true };
static bool mask5b[9] = { true, true, true, true, true, true, true, true, true };
static bool mask6[9] = { false, true, false, true, true, true, false, false, false };
static bool mask6b[12] = { false, true, false, true, true, true, true, true, true, true, true, true };
static bool mask7[2] = { true, true };
static bool mask7b[4] = { true, true, true, true };
static bool mask8[4] = { true, true, true, true };
static bool mask8b[6] = { true, true, true, true, true, true };
static bool mask9[8] = { true, true, true, true, true, true, true, true };
static bool mask9b[12] = { true, true, true, true, true, true, true, true, true, true, true, true };
static bool mask10[4] = { true, true, false, false };
static bool mask10b[6] = { true, true, true, true, true, true };
static bool mask11[9] = { false, true, false, true, true, true, false, true, false };
static bool mask11b[12] = { false, true, false, true, true, true, true, true, true, true, true, true };
static bool mask12[6] = { false, false, true, true, false, true };
static bool mask12b[8] = { false, false, true, true, true, true, true, true };
static bool mask13[4] = { false, false, true, true };
static bool mask13b[6] = { false, false, true, true, true, true };
static bool mask14[4] = { false, true, true, true };
static bool mask15[4] = { true, true, false, true };
static bool mask16[8] = { false, true, true, true, false, true, true, true };
static bool mask17[9] = { true, true, true, true, true, true, true, true, true };
static bool mask17b[12] = { true, true, true, true, true, true, true, true, true, true, true };
static bool mask18[9] = { false, true, false, true, true, true, true, false, false };
static bool mask18b[12] = { false, true, false, true, true, true, true, true, true, true, true, true };
static StructType TDWEAPON(STRUCTTD_WEAP, "weap", "TEXT_STRUCTURE_TITLE_GDI_WEAPONS_FACTORY", 3, 3, mask1, 4, 3, mask1b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "weap2", false);
static StructType TDGTOWER(STRUCTTD_GTOWER, "gtwr", "TEXT_STRUCTURE_TITLE_GDI_GUARD_TOWER", 1, 1, mask2, 1, 1, mask2, false, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDATOWER(STRUCTTD_ATOWER, "atwr", "TEXT_STRUCTURE_TITLE_GDI_ADV_GUARD_TOWER", 2, 1, mask3, 2, 1, mask3, false, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDOBELISK(STRUCTTD_OBELISK, "obli", "TEXT_STRUCTURE_TITLE_NOD_OBELISK", 2, 1, mask3, 2, 1, mask3, false, "Badguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDCOMMAND(STRUCTTD_RADAR, "hq", "TEXT_STRUCTURE_TITLE_GDI_COMM_CENTER", 2, 2, mask4, 3, 2, mask4b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDTURRET(STRUCTTD_TURRET, "gun", "TEXT_STRUCTURE_TITLE_NOD_TURRET", 1, 1, mask2, 1, 1, mask2, false, "Badguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, true, "", false);
static StructType TDCONST(STRUCTTD_CONST, "fact", "TEXT_STRUCTURE_RA_FACT", 2, 3, mask5, 3, 3, mask5b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDREFINERY(STRUCTTD_REFINERY, "proc", "TEXT_STRUCTURE_TITLE_GDI_REFINERY", 3, 3, mask6, 4, 3, mask6b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDSTORAGE(STRUCTTD_STORAGE, "silo", "TEXT_STRUCTURE_TITLE_GDI_SILO", 1, 2, mask7, 2, 2, mask7b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDHELIPAD(STRUCTTD_HELIPAD, "hpad", "TEXT_STRUCTURE_TITLE_GDI_HELIPAD", 2, 2, mask8, 3, 2, mask8b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDSAM(STRUCTTD_SAM, "sam", "TEXT_STRUCTURE_TITLE_NOD_SAM_SITE", 1, 2, mask7, 1, 2, mask7, false, "Badguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDAIRSTRIP(STRUCTTD_AIRSTRIP, "afld", "TEXT_STRUCTURE_TITLE_NOD_AIRFIELD", 2, 4, mask9, 3, 4, mask9b, true, "Badguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDPOWER(STRUCTTD_POWER, "nuke", "TEXT_STRUCTURE_TITLE_GDI_POWER_PLANT", 2, 2, mask4, 3, 2, mask4b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDADVANCEDPOWER(STRUCTTD_ADVANCED_POWER, "nuk2", "TEXT_STRUCTURE_TITLE_GDI_ADV_POWER_PLANT", 2, 2, mask4, 3, 2, mask4b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDHOSPITAL(STRUCTTD_HOSPITAL, "hosp", "TEXT_UNIT_TITLE_HOSP", 2, 2, mask8, 3, 2, mask8b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDBARRACKS(STRUCTTD_BARRACKS, "pyle", "TEXT_STRUCTURE_TITLE_GDI_BARRACKS", 2, 2, mask10, 3, 2, mask10b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDTANKER(STRUCTTD_TANKER, "arco", "TEXT_UNIT_TITLE_ARCO", 1, 2, mask7, 1, 2, mask7, false, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDREPAIR(STRUCTTD_REPAIR, "fix", "TEXT_STRUCTURE_TITLE_GDI_REPAIR_FACILITY", 3, 3, mask11, 4, 3, mask11b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDBIOLAB(STRUCTTD_BIO_LAB, "bio", "TEXT_UNIT_TITLE_BIO", 2, 2, mask8, 3, 2, mask8b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDHAND(STRUCTTD_HAND, "hand", "TEXT_STRUCTURE_TITLE_NOD_HAND_OF_NOD", 3, 2, mask12, 4, 2, mask12b, true, "Badguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDTEMPLE(STRUCTTD_TEMPLE, "tmpl", "TEXT_STRUCTURE_TITLE_NOD_TEMPLE_OF_NOD", 3, 3, mask1, 4, 3, mask1b, true, "Badguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDEYE(STRUCTTD_EYE, "eye", "TEXT_STRUCTURE_TITLE_GDI_ADV_COMM_CENTER", 2, 2, mask4, 3, 2, mask4b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDMISSION(STRUCTTD_MISSION, "miss", "TEXT_STRUCTURE_TITLE_CIV35", 2, 3, mask5, 3, 3, mask5b, true, "Goodguy", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV01(STRUCTTD_V01, "v01", "TEXT_STRUCTURE_TITLE_CIV1", 2, 2, mask13, 2, 2, mask13, false, "Neutral", THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV02(STRUCTTD_V02, "v02", "TEXT_STRUCTURE_TITLE_CIV2", 2, 2, mask13, 2, 2, mask13, false, "Neutral", THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV03(STRUCTTD_V03, "v03", "TEXT_STRUCTURE_TITLE_CIV3", 2, 2, mask14, 2, 2, mask14, false, "Neutral", THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV04(STRUCTTD_V04, "v04", "TEXT_STRUCTURE_TITLE_CIV4", 2, 2, mask13, 2, 2, mask13, false, "Neutral", THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV05(STRUCTTD_V05, "v05", "TEXT_STRUCTURE_TITLE_CIV5", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV06(STRUCTTD_V06, "v06", "TEXT_STRUCTURE_TITLE_CIV6", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV07(STRUCTTD_V07, "v07", "TEXT_STRUCTURE_TITLE_CIV7", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV08(STRUCTTD_V08, "v08", "TEXT_STRUCTURE_TITLE_CIV8", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV09(STRUCTTD_V09, "v09", "TEXT_STRUCTURE_TITLE_CIV9", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV10(STRUCTTD_V10, "v10", "TEXT_STRUCTURE_TITLE_CIV10", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV11(STRUCTTD_V11, "v11", "TEXT_STRUCTURE_TITLE_CIV11", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV19(STRUCTTD_PUMP, "v19", "TEXT_STRUCTURE_CIVILIAN_TITLE", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_DESERTTD | THEATERF_TEMPERATETD | THEATERF_WINTERTD, false, false, "", false);
static StructType TDV20(STRUCTTD_V20, "v20", "TEXT_STRUCTURE_TITLE_CIV18", 2, 2, mask13, 2, 2, mask13, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV21(STRUCTTD_V21, "v21", "TEXT_STRUCTURE_TITLE_CIV19", 2, 2, mask15, 2, 2, mask15, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV22(STRUCTTD_V22, "v22", "TEXT_STRUCTURE_TITLE_CIV20", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV23(STRUCTTD_V23, "v23", "TEXT_STRUCTURE_TITLE_CIV21", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV24(STRUCTTD_V24, "v24", "TEXT_STRUCTURE_TITLE_CIV22", 2, 2, mask13, 2, 2, mask13, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV25(STRUCTTD_V25, "v25", "TEXT_STRUCTURE_TITLE_CIV1", 2, 2, mask14, 2, 2, mask14, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV26(STRUCTTD_V26, "v26", "TEXT_STRUCTURE_TITLE_CIV23", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV27(STRUCTTD_V27, "v27", "TEXT_STRUCTURE_TITLE_CIV24", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV28(STRUCTTD_V28, "v28", "TEXT_STRUCTURE_TITLE_CIV25", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV29(STRUCTTD_V29, "v29", "TEXT_STRUCTURE_TITLE_CIV26", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV30(STRUCTTD_V30, "v30", "TEXT_STRUCTURE_TITLE_CIV27", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV31(STRUCTTD_V31, "v31", "TEXT_STRUCTURE_TITLE_CIV28", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV32(STRUCTTD_V32, "v32", "TEXT_STRUCTURE_TITLE_CIV29", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV33(STRUCTTD_V33, "v33", "TEXT_STRUCTURE_TITLE_CIV30", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV34(STRUCTTD_V34, "v34", "TEXT_STRUCTURE_TITLE_CIV31", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV35(STRUCTTD_V35, "v35", "TEXT_STRUCTURE_TITLE_CIV32", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV36(STRUCTTD_V36, "v36", "TEXT_STRUCTURE_TITLE_CIV33", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType TDV37(STRUCTTD_V37, "v37", "TEXT_STRUCTURE_TITLE_CIV34", 2, 4, mask16, 2, 4, mask16, false, "Neutral", THEATERF_DESERTTD, false, false, "", false);
static StructType RAADVANCEDTECH(STRUCTRA_ADVANCED_TECH, "atek", "TEXT_STRUCTURE_RA_ATEK", 2, 2, mask8, 3, 2, mask8b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAIRONCURTAIN(STRUCTRA_IRON_CURTAIN, "iron", "TEXT_STRUCTURE_RA_IRON", 2, 2, mask13, 2, 2, mask13, false, "USSR", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAWEAPON(STRUCTRA_WEAP, "weap", "TEXT_STRUCTURE_RA_WEAP", 2, 3, mask5, 3, 3, mask5b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "weap2", true);
static StructType RACHRONOSPHERE(STRUCTRA_CHRONOSPHERE, "pdox", "TEXT_STRUCTURE_RA_PDOX", 2, 2, mask8, 2, 2, mask8, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAPILLBOX(STRUCTRA_PILLBOX, "pbox", "TEXT_STRUCTURE_RA_PBOX", 1, 1, mask2, 1, 1, mask2, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RACAMOPILLBOX(STRUCTRA_CAMOPILLBOX, "hbox", "TEXT_STRUCTURE_RA_HBOX", 1, 1, mask2, 1, 1, mask2, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RACOMMAND(STRUCTRA_RADAR, "dome", "TEXT_STRUCTURE_RA_DOME", 2, 2, mask8, 3, 2, mask8b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAGAPGENERATOR(STRUCTRA_GAP, "gap", "TEXT_STRUCTURE_RA_GAP", 2, 1, mask3, 2, 1, mask3, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RATURRET(STRUCTRA_TURRET, "gun", "TEXT_STRUCTURE_RA_GUN", 1, 1, mask2, 1, 1, mask2, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, true, "", true);
static StructType RAAAGUN(STRUCTRA_AAGUN, "agun", "TEXT_STRUCTURE_RA_AGUN", 2, 1, mask3, 2, 1, mask3, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, true, "", true);
static StructType RAFLAMETURRET(STRUCTRA_FLAME_TURRET, "ftur", "TEXT_STRUCTURE_RA_FTUR", 1, 1, mask2, 1, 1, mask2, false, "USSR", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RACONST(STRUCTRA_CONST, "fact", "TEXT_STRUCTURE_RA_FACT", 3, 3, mask17, 4, 3, mask17b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAREFINERY(STRUCTRA_REFINERY, "proc", "TEXT_STRUCTURE_RA_PROC", 3, 3, mask18, 4, 3, mask18b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RASTORAGE(STRUCTRA_STORAGE, "silo", "TEXT_STRUCTURE_RA_SILO", 1, 1, mask2, 1, 1, mask2, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAHELIPAD(STRUCTRA_HELIPAD, "hpad", "TEXT_STRUCTURE_RA_HPAD", 2, 2, mask8, 3, 2, mask8b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RASAM(STRUCTRA_SAM, "sam", "TEXT_STRUCTURE_RA_SAM", 1, 2, mask7, 1, 2, mask7, false, "USSR", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAAIRSTRIP(STRUCTRA_AIRSTRIP, "afld", "TEXT_STRUCTURE_RA_AFLD", 2, 3, mask5, 2, 3, mask5, false, "USSR", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAPOWER(STRUCTRA_POWER, "powr", "TEXT_STRUCTURE_RA_POWR", 2, 2, mask8, 3, 2, mask8b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAADVANCEDPOWER(STRUCTRA_ADVANCED_POWER, "apwr", "TEXT_STRUCTURE_RA_APWR", 3, 3, mask1, 4, 3, mask1b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RASOVIETTECH(STRUCTRA_SOVIET_TECH, "stek", "TEXT_STRUCTURE_RA_STEK", 3, 3, mask1, 4, 3, mask1b, true, "USSR", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAHOSPITAL(STRUCTRA_HOSPITAL, "hosp", "TEXT_STRUCTURE_RA_HOSP", 2, 2, mask8, 3, 2, mask8b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RABARRACKS(STRUCTRA_BARRACKS, "barr", "TEXT_STRUCTURE_RA_BARR", 2, 2, mask8, 3, 2, mask8b, true, "USSR", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RATENT(STRUCTRA_TENT, "tent", "TEXT_STRUCTURE_RA_TENT", 2, 2, mask8, 3, 2, mask8b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAKENNEL(STRUCTRA_KENNEL, "kenn", "TEXT_STRUCTURE_RA_KENN", 1, 1, mask2, 1, 1, mask2, false, "USSR", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAREPAIR(STRUCTRA_REPAIR, "fix", "TEXT_STRUCTURE_RA_FIX", 3, 3, mask11, 3, 3, mask11, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RABIOLAB(STRUCTRA_BIO_LAB, "bio", "TEXT_STRUCTURE_RA_BIO", 2, 2, mask8, 3, 2, mask8b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAMISSION(STRUCTRA_MISSION, "miss", "TEXT_STRUCTURE_RA_MISS", 2, 3, mask5, 3, 3, mask5b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RASHIPYARD(STRUCTRA_SHIP_YARD, "syrd", "TEXT_STRUCTURE_RA_SYRD", 3, 3, mask17, 3, 3, mask17, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RASUBPEN(STRUCTRA_SUB_PEN, "spen", "TEXT_STRUCTURE_RA_SPEN", 3, 3, mask17, 3, 3, mask17, false, "USSR", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAMISSILESILO(STRUCTRA_MSLO, "mslo", "TEXT_STRUCTURE_RA_MSLO", 1, 2, mask7, 1, 2, mask7, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAFORWARDCOM(STRUCTRA_FORWARD_COM, "fcom", "TEXT_STRUCTURE_RA_FCOM", 2, 2, mask13, 3, 2, mask13b, true, "USSR", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RATESLA(STRUCTRA_TESLA, "tsla", "TEXT_STRUCTURE_RA_TSLA", 2, 1, mask3, 2, 1, mask3, false, "USSR", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAFAKEWEAPON(STRUCTRA_FAKEWEAP, "weap", "TEXT_STRUCTURE_RA_WEAF", 2, 3, mask5, 3, 3, mask5b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, true, false, "weap2", true);
static StructType RAFAKECONST(STRUCTRA_FAKECONST, "fact", "TEXT_STRUCTURE_RA_FACF", 3, 3, mask17, 4, 3, mask17b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, true, false, "", true);
static StructType RAFAKESHIPYARD(STRUCTRA_FAKE_YARD, "syrd", "TEXT_STRUCTURE_RA_SYRF", 3, 3, mask17, 3, 3, mask17, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, true, false, "", true);
static StructType RAFAKESUBPEN(STRUCTRA_FAKE_PEN, "spen", "TEXT_STRUCTURE_RA_SPEF", 3, 3, mask17, 3, 3, mask17, false, "USSR", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, true, false, "", true);
static StructType RAFAKECOMMAND(STRUCTRA_FAKE_RADAR, "dome", "TEXT_STRUCTURE_RA_DOMF", 2, 2, mask8, 3, 2, mask8b, true, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, true, false, "", true);
static StructType RAAVMINE(STRUCTRA_AVMINE, "minv", "TEXT_STRUCTURE_RA_MINV", 1, 1, mask2, 1, 1, mask2, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAAPMINE(STRUCTRA_APMINE, "minp", "TEXT_STRUCTURE_RA_MINP", 1, 1, mask2, 1, 1, mask2, false, "Greece", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAV01(STRUCTRA_V01, "v01", "TEXT_STRUCTURE_TITLE_CIV1", 2, 2, mask13, 2, 2, mask13, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAV02(STRUCTRA_V02, "v02", "TEXT_STRUCTURE_TITLE_CIV2", 2, 2, mask13, 2, 2, mask13, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAV03(STRUCTRA_V03, "v03", "TEXT_STRUCTURE_TITLE_CIV3", 2, 2, mask14, 2, 2, mask14, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAV04(STRUCTRA_V04, "v04", "TEXT_STRUCTURE_TITLE_CIV4", 2, 2, mask13, 2, 2, mask13, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAV05(STRUCTRA_V05, "v05", "TEXT_STRUCTURE_TITLE_CIV5", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAV06(STRUCTRA_V06, "v06", "TEXT_STRUCTURE_TITLE_CIV6", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAV07(STRUCTRA_V07, "v07", "TEXT_STRUCTURE_TITLE_CIV7", 1, 2, mask7, 1, 2, mask7, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAV08(STRUCTRA_V08, "v08", "TEXT_STRUCTURE_TITLE_CIV8", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAV09(STRUCTRA_V09, "v09", "TEXT_STRUCTURE_TITLE_CIV9", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAV10(STRUCTRA_V10, "v10", "TEXT_STRUCTURE_TITLE_CIV10", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAV11(STRUCTRA_V11, "v11", "TEXT_STRUCTURE_TITLE_CIV11", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA, false, false, "", true);
static StructType RAV19(STRUCTRA_PUMP, "v19", "TEXT_STRUCTURE_RA_CIVILIAN", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RABARREL(STRUCTRA_BARREL, "barl", "TEXT_STRUCTURE_RA_BARL", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RABARREL3(STRUCTRA_BARREL3, "brl3", "TEXT_STRUCTURE_RA_BRL3", 1, 1, mask2, 1, 1, mask2, false, "Neutral", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RAQUEEN(STRUCTRA_QUEEN, "quee", "TEXT_STRUCTURE_RA_QUEE", 1, 2, mask7, 1, 2, mask7, false, "Special", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RALARVA1(STRUCTRA_LARVA1, "lar1", "TEXT_STRUCTURE_RA_LAR1", 1, 1, mask2, 1, 1, mask2, false, "Special", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
static StructType RALARVA2(STRUCTRA_LARVA2, "lar2", "TEXT_STRUCTURE_RA_LAR2", 1, 1, mask2, 1, 1, mask2, false, "Special", THEATERF_TEMPERATERA | THEATERF_SNOWRA | THEATERF_INTERIORRA, false, false, "", true);
StructType const* const StructType::PointersTD[STRUCTTD_COUNT] = {
	& TDWEAPON,
	& TDGTOWER,
	& TDATOWER,
	& TDOBELISK,
	& TDCOMMAND,
	& TDTURRET,
	& TDCONST,
	& TDREFINERY,
	& TDSTORAGE,
	& TDHELIPAD,
	& TDSAM,
	& TDAIRSTRIP,
	& TDPOWER,
	& TDADVANCEDPOWER,
	& TDHOSPITAL,
	& TDBARRACKS,
	& TDTANKER,
	& TDREPAIR,
	& TDBIOLAB,
	& TDHAND,
	& TDTEMPLE,
	& TDEYE,
	& TDMISSION,
	& TDV01,
	& TDV02,
	& TDV03,
	& TDV04,
	& TDV05,
	& TDV06,
	& TDV07,
	& TDV08,
	& TDV09,
	& TDV10,
	& TDV11,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	& TDV19,
	& TDV20,
	& TDV21,
	& TDV22,
	& TDV23,
	& TDV24,
	& TDV25,
	& TDV26,
	& TDV27,
	& TDV28,
	& TDV29,
	& TDV30,
	& TDV31,
	& TDV32,
	& TDV33,
	& TDV34,
	& TDV35,
	& TDV36,
	& TDV37,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr
};
StructType const* const StructType::PointersRA[STRUCTRA_COUNT] = {
	& RAADVANCEDTECH,
	& RAIRONCURTAIN,
	& RAWEAPON,
	& RACHRONOSPHERE,
	& RAPILLBOX,
	& RACAMOPILLBOX,
	& RACOMMAND,
	& RAGAPGENERATOR,
	& RATURRET,
	& RAAAGUN,
	& RAFLAMETURRET,
	& RACONST,
	& RAREFINERY,
	& RASTORAGE,
	& RAHELIPAD,
	& RASAM,
	& RAAIRSTRIP,
	& RAPOWER,
	& RAADVANCEDPOWER,
	& RASOVIETTECH,
	& RAHOSPITAL,
	& RABARRACKS,
	& RATENT,
	& RAKENNEL,
	& RAREPAIR,
	& RABIOLAB,
	& RAMISSION,
	& RASHIPYARD,
	& RASUBPEN,
	& RAMISSILESILO,
	& RAFORWARDCOM,
	& RATESLA,
	& RAFAKEWEAPON,
	& RAFAKECONST,
	& RAFAKESHIPYARD,
	& RAFAKESUBPEN,
	& RAFAKECOMMAND,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	& RAAVMINE,
	& RAAPMINE,
	& RAV01,
	& RAV02,
	& RAV03,
	& RAV04,
	& RAV05,
	& RAV06,
	& RAV07,
	& RAV08,
	& RAV09,
	& RAV10,
	& RAV11,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	& RAV19,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	& RABARREL,
	& RABARREL3,
	& RAQUEEN,
	& RALARVA1,
	& RALARVA2
};
