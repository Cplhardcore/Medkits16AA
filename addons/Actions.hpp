class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class Logistics
            {
                displayName="Ammo Logistics";
                icon="a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\cargoMagAll_ca.paa";
                exceptions[]={};
            // 556 Bando - 150 Rounds
                class 556Bando
                {
                    displayName="Open 5.56mm Bandolier";
                    icon="\FourRBG\data\bandolier_co.paa";
                    condition="('GML_556Bando' in (items player))";
                    statement="_player removeItem 'GML_556Bando';for '_i' from 1 to 5 do {_player addItem 'greenmag_ammo_556x45_basic_30Rnd'}";
                    exceptions[]=
                    {
                        "isNotInside",
                        "isNotSitting"
                    };
                };
            // 556 Tracer Bando = 120 Rounds
                class 556TBando : 556Bando
                {
                    displayName = "Open 5.56mm (Tracer) Bandolier";
                    condition="('GML_556TBando' in (items player))";
                    statement = "_player removeItem 'GML_556TBando';for '_i' from 1 to 4 do {_player addItem 'greenmag_ammo_556x45_tracer_30Rnd'};_player addItem 'greenmag_item_speedloader'";
                };
            // 762 Bando
                class 762Bando : 556Bando
                {
                    displayName = "Open 7.62mm Bandolier";
                    condition="('GML_762Bando' in (items player))";
                    statement = "_player removeItem 'GML_762Bando';for '_i' from 1 to 5 do {_player addItem 'greenmag_ammo_762x51_basic_20Rnd'}";
                };
            // 40mm HEDP
                class 40HEDP : 556Bando
                {
                    displayName = "Open 40mm (HEDP) Bandolier";
                    condition="('GML_40HEDPBando' in (items player))";
                    statement = "_player removeItem 'GML_40HEDPBando';for '_i' from 1 to 11 do {_player addItem 'UK3CB_BAF_1Rnd_HEDP_Grenade_Shell'}";
                };
            // 40mm Smoke
                class 40SMOKE : 556Bando
                {
                    displayName = "Open 40mm (Smoke) Bandolier";
                    condition="('GML_40SMOKEBando' in (items player))";
                    statement = "_player removeItem 'GML_40SMOKEBando';for '_i' from 1 to 4 do {_player addItem 'UK3CB_BAF_1Rnd_SmokeGreen_Grenade_shell'};for '_i' from 1 to 4 do {_player addItem  'UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell'};for '_i' from 1 to 3 do {_player addItem 'UK3CB_BAF_1Rnd_SmokeBlue_Grenade_shell '}";
                };
            // 40mm Flare
                class 40FLARE : 556Bando
                {
                    displayName = "Open 40mm (Flare) Bandolier";
                    condition="('GML_40FLAREBando' in (items player))";
                    statement = "_player removeItem 'GML_40FLAREBando';for '_i' from 1 to 3 do {_player addItem 'UK3CB_BAF_UGL_FlareGreen_F'};for '_i' from 1 to 3 do {_player addItem 'UK3CB_BAF_UGL_FlareRed_F'};for '_i' from 1 to 3 do {_player addItem 'UK3CB_BAF_UGL_FlareYellow_F'};for '_i' from 1 to 2 do {_player addItem 'UK3CB_BAF_UGL_FlareCIR_F'}";
                };
            // 556 Box
                class 556Box
                {
                    displayName = "Open 5.56mm Ammobox";
                    icon = "\FourRBG\data\ammocan_co.paa";
                    condition="('GML_556AmmoBox' in (items player))";
                    statement = "_player removeItem 'GML_556AmmoBox';for '_i' from 1 to 20 do {_player addItem 'greenmag_ammo_556x45_basic_30Rnd'};for '_i' from 1 to 10 do {_player addItem 'greenmag_ammo_556x45_tracer_20Rnd'};for '_i' from 1 to 2 do {_player addItem 'greenmag_item_speedloader'}";
                    exceptions[]=
                    {
                        "isNotInside",
                        "isNotSitting"
                    };
                };
            // 762 Box
                class 762Box : 556Box
                {
                    displayName = "Open 7.62mm Ammobox";
                    condition="('GML_762AmmoBox' in (items player))";
                    statement = "_player removeItem 'GML_762AmmoBox';for '_i' from 1 to 10 do {_player addItem 'greenmag_ammo_762x51_basic_20Rnd'}";
                };
            // HE Grenade Box
                class HEGBox : 556Box
                {
                    displayName = "Open Frag Grenade Ammobox";
                    condition="('GML_HEGrenadeAmmoBox' in (items player))";
                    statement = "_player removeItem 'GML_HEGrenadeAmmoBox';for '_i' from 1 to 10 do {_player addItem 'rhs_mag_m67'}";
                };
            // Smoke Grenade Box
                class HESBox : 556Box
                {
                    displayName = "Open Smoke Grenade Ammobox";
                    condition="('GML_SMOKEGrenadeAmmoBox' in (items player))";
                    statement = "_player removeItem 'GML_SMOKEGrenadeAmmoBox';for '_i' from 1 to 4 do {_player addItem 'UK3CB_BAF_SmokeShellGreen'};for '_i' from 1 to 3 do {_player addItem 'UK3CB_BAF_SmokeShellRed '};for '_i' from 1 to 3 do {_player addItem 'UK3CB_BAF_SmokeShellBlue '};for '_i' from 1 to 2 do {_player addItem 'rhs_grenade_m15_mag'}";
                };
            // CFT Box
                class CFTBox : 556Box
                {
                    displayName = "Open Charlie Fireteam Replen";
                    condition="('GML_CFTAmmoBox' in (items player))";
                    statement = "_player removeItem 'GML_CFTAmmoBox';for '_i' from 1 to 4 do {_player addItem 'GML_556Bando'}";
                };
            // DFT Box
                class DFTBox : 556Box
                {
                    displayName = "Open Delta Fireteam Replen";
                    condition="('GML_DFTAmmoBox' in (items player))";
                    statement = "_player removeItem 'GML_DFTAmmoBox';for '_i' from 1 to 2 do {_player addItem 'GML_556Bando'};_player addItem 'GML_762Bando';for '_i' from 1 to 4 do {_player addItem 'UK3CB_BAF_762_100Rnd'}";
                };
            // IFAK
                class IFAKReplen
                {
                    displayName = "Open IFAK Replen";
                    icon = "\FourRBG\data\basicTrauma.paa";
                    condition="('GML_IFAK' in (items player))";
                    statement = "_player removeItem 'GML_IFAK';for '_i' from 1 to 4 do {_player addItem 'ACE_tourniquet'};for '_i' from 1 to 2 do {_player addItem 'ACE_fieldDressing'};for '_i' from 1 to 2 do {_player addItem 'ACE_elasticBandage'};for '_i' from 1 to 2 do {_player addItem 'ACE_packingBandage'};for '_i' from 1 to 2 do {_player addItem 'ACE_morphine'};_player addItem 'kat_PainkillerItem'; _player addItem 'kat_chestSeal'; _player addItem 'kat_guedel';_player addItem 'kat_IV_16'";
                    exceptions[]=
                    {
                        "isNotInside",
                        "isNotSitting"
                    };
                };
            // Team Med
                class TMReplen
                {
                    displayName = "Open Team Medic Replen";
                    icon = "\FourRBG\data\Medic_Pouch.paa";
                    condition="('GML_TeamMed' in (items player))";
                    statement = "_player removeItem 'GML_TeamMed';for '_i' from 1 to 8 do {_player addItem 'ACE_tourniquet'};for '_i' from 1 to 4 do {_player addItem 'kat_IV_16'};for '_i' from 1 to 2 do {_player addItem 'ACE_adenosine'};for '_i' from 1 to 2 do {_player addItem 'kat_atropine'};for '_i' from 1 to 2 do {_player addItem 'ACE_epinehrine'};for '_i' from 1 to 2 do {_player addItem 'ACE_morphine'};for '_i' from 1 to 4 do {_player addItem 'ACE_fieldDressing'};for '_i' from 1 to 4 do {_player addItem 'ACE_elasticBandage'};for '_i' from 1 to 4 do {_player addItem 'ACE_packingBandage'};for '_i' from 1 to 4 do {_player addItem 'ACE_splint'};for '_i' from 1 to 4 do {_player addItem 'kat_chestSeal'};for '_i' from 1 to 4 do {_player addItem 'kat_guedel'};for '_i' from 1 to 4 do {_player addItem 'ACE_EarPlugs'};for '_i' from 1 to 4 do {_player addItem 'ACE_CableTie'};for '_i' from 1 to 2 do {_player addItem 'kat_naxolone'};for '_i' from 1 to 2 do {_player addItem 'kat_Pulseoximiter'};_player addItem 'kat_IO_FAST';_player addItem 'kat_TXA'";
                    exceptions[]=
                    {
                        "isNotInside",
                        "isNotSitting"
                    };
                };
            };
        };
    };
};