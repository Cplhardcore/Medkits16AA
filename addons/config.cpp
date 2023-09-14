#include "BIS_AddonInfo.hpp"
class CfgPatches
{
    class GreenMag_Logistics
    {
        name = "GreenMag Logistics";
        units[] = {};
        weapons[] =
        {};
        requiredAddons[] =
        {
            "greenmag_main",
            "cba_accessory",
            "cba_settings",
            "ace_interaction"
        };
        author = "Challenger";
    };
};

class CfgWeapons
{
    class ItemCore;
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

#include "Items.hpp"
};
#include "Actions.hpp"