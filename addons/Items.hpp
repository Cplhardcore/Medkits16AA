class GML_BandoBase : ACE_ItemCore
{
    scope = 1;
    author = "Challenger";
    picture = "\FourRBG\data\bandolier_co.paa";
    class ItemInfo : CBA_MiscItem_ItemInfo
    {
        mass = 50.0;
    };
};

class GML_556Bando : GML_BandoBase
{
    scope = 2;
    displayName = "5.56mm Bandolier";
    descriptionShort = "Contains 150 5.56mm rounds. 5 Boxes of 30";
};
class GML_556TBando : GML_BandoBase
{
    scope = 2;
    displayName = "5.56mm Tracer Bandolier";
    descriptionShort = "Contains 120 5.56mm tracer rounds. 4 Boxes of 30 plus speedloader";
};
class GML_762Bando : GML_BandoBase
{
    scope = 2;
    displayName = "7.62mm Bandolier";
    descriptionShort = "Contains 100 7.62mm rounds. 5 Boxes of 20.";
};
class GML_40HEDPBando : GML_BandoBase
{
    scope = 2;
    displayName = "40mm HEDP Bandolier";
    descriptionShort = "Contains 11 HEDP Rounds";
};
class GML_40SMOKEBando : GML_BandoBase
{
    scope = 2;
    displayName = "40mm Smoke Bandolier";
    descriptionShort = "Contains 4 Green, 4 Red, and 3 Blue 40mm Smoke Rounds";
};
class GML_40FLAREBando : GML_BandoBase
{
    scope = 2;
    displayName = "40mm Flare Bandolier";
    descriptionShort = "Contains 3 Green, 3 Red, and 3 Yellow and 2 IR 40mm Flare Rounds";
};

class GML_AmmoBox : ACE_ItemCore
{
    scope = 1;
    author = "Challenger";
    picture = "\FourRBG\data\ammocan_co.paa";
    class ItemInfo : CBA_MiscItem_ItemInfo
    {
        mass = 150.0;
    };
};

class GML_556AmmoBox : GML_AmmoBox
{
    scope = 2;
    displayName = "5.56mm Ammo Box";
    descriptionShort = "Contains 800 5.56mm rounds and 2 speedloaders.";
};
class GML_762AmmoBox : GML_AmmoBox
{
    scope = 2;
    displayName = "7.62mm Ammo Box";
    descriptionShort = "Contains 200 7.62mm rounds and 2 speedloaders.";
};
class GML_HEGrenadeAmmoBox : GML_AmmoBox
{
    scope = 2;
    displayName = "Hand Grenade Ammo Box";
    descriptionShort = "Contains 10 Fragmentation Grenades.";
};
class GML_SMOKEGrenadeAmmoBox : GML_AmmoBox
{
    scope = 2;
    displayName = "Hand Grenade, Smoke Ammo Box";
    descriptionShort = "Contains 12 Smoke Grenades.";
};
class GML_CFTAmmoBox : GML_AmmoBox
{
    scope = 2;
    displayName = "Charlie Fireteam Box";
    descriptionShort = "Contains 4 5.56mm Bandoliers.";
};
class GML_DFTAmmoBox : GML_AmmoBox
{
    scope = 2;
    displayName = "Delta Fireteam Box";
    descriptionShort = "Contains 2 5.56mm Bandoliers, 1 7.62mm Bandolier & 400rnds Linked 7.62mm.";
};

class GML_IFAK : ACE_ItemCore
{
    scope = 2;
    author = "Challenger";
    picture = "\FourRBG\data\basicTrauma.paa";
    displayName = "IFAK Replen";
    descriptionShort = "Contains 4 x CAT, 6 Bandages, 2 Morphine, 1 Painkillers, 1 ChestSeal, 1 Guedel Tube, 1 16g IV";
    class ItemInfo : CBA_MiscItem_ItemInfo
    {
        mass = 75.0;
    };
};
class GML_TeamMed : ACE_ItemCore
{
    scope = 2;
    author = "Challenger";
    picture = "\FourRBG\data\Medic_Pouch.paa";
    displayName = "Team Medic Replen";
    descriptionShort = "Contains all the items needed to replenish a Team Medics equipment.";
    class ItemInfo : CBA_MiscItem_ItemInfo
    {
        mass = 75.0;
    };
};