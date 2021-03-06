#pragma once
class HouseType;
struct DirectionType;
enum InfantryTypeTD {
	INFANTRYTD_NONE = -1,
	INFANTRYTD_E1,
	INFANTRYTD_E2,
	INFANTRYTD_E3,
	INFANTRYTD_E4,
	INFANTRYTD_E5,
	INFANTRYTD_E7,
	INFANTRYTD_RAMBO,
	INFANTRYTD_C1,
	INFANTRYTD_C2,
	INFANTRYTD_C3,
	INFANTRYTD_C4,
	INFANTRYTD_C5,
	INFANTRYTD_C6,
	INFANTRYTD_C7,
	INFANTRYTD_C8,
	INFANTRYTD_C9,
	INFANTRYTD_C10,
	INFANTRYTD_MOEBIUS,
	INFANTRYTD_DELPHI,
	INFANTRYTD_CHAN,
	INFANTRYTD_COUNT,
	INFANTRYTD_FIRST = 0
};
enum InfantryTypeRA {
	INFANTRYRA_NONE = -1,
	INFANTRYRA_E1,
	INFANTRYRA_E2,
	INFANTRYRA_E3,
	INFANTRYRA_E4,
	INFANTRYRA_RENOVATOR,
	INFANTRYRA_TANYA,
	INFANTRYRA_SPY,
	INFANTRYRA_THIEF,
	INFANTRYRA_MEDIC,
	INFANTRYRA_GENERAL,
	INFANTRYRA_DOG,
	INFANTRYRA_C1,
	INFANTRYRA_C2,
	INFANTRYRA_C3,
	INFANTRYRA_C4,
	INFANTRYRA_C5,
	INFANTRYRA_C6,
	INFANTRYRA_C7,
	INFANTRYRA_C8,
	INFANTRYRA_C9,
	INFANTRYRA_C10,
	INFANTRYRA_EINSTEIN,
	INFANTRYRA_DELPHI,
	INFANTRYRA_CHAN,
	INFANTRYRA_SHOCK,
	INFANTRYRA_MECHANIC,
	INFANTRYRA_COUNT,
	INFANTRYRA_FIRST = 0
};
class InfantryType
{
public:
	char ID;
	std::string Name;
	std::string TextId;
	std::string OwnerHouse;
	Gdiplus::Size RenderSize;
	Gdiplus::Bitmap* Thumbnail;
	InfantryType(char id, const char* name, const char* textid, const char* ownerhouse, bool isra) : ID(id), Name(name), TextId(textid), OwnerHouse(ownerhouse), Thumbnail(nullptr)
	{
		static bool mask[1] = { true };
		if (isra)
		{
			InfantryMapRA[Name] = this;
		}
		else
		{
			InfantryMapTD[Name] = this;
		}
	}
	void Free()
	{
		if (Thumbnail)
		{
			delete[] Thumbnail;
			Thumbnail = nullptr;
		}
	}
	static std::map<std::string, InfantryType*> InfantryMapTD;
	static std::map<std::string, InfantryType*> InfantryMapRA;
	void Init(bool isra, HouseType* house, DirectionType direction);
};
