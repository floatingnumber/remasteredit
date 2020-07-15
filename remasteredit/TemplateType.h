#pragma once
#include "theatertype.h"
enum TemplateTypeFlag
{
	TEMPLATETYPE_NONE = 0,
	TEMPLATETYPE_CLEAR = 2,
	TEMPLATETYPE_WATER = 4
};

enum TemplateTypeTD {
	TEMPLATETD_CLEAR1,
	TEMPLATETD_WATER,			// This must be the first non-clear template.
	TEMPLATETD_WATER2,
	TEMPLATETD_SHORE1,
	TEMPLATETD_SHORE2,
	TEMPLATETD_SHORE3,
	TEMPLATETD_SHORE4,
	TEMPLATETD_SHORE5,
	TEMPLATETD_SHORE11,
	TEMPLATETD_SHORE12,
	TEMPLATETD_SHORE13,
	TEMPLATETD_SHORE14,
	TEMPLATETD_SHORE15,
	TEMPLATETD_SLOPE1,
	TEMPLATETD_SLOPE2,
	TEMPLATETD_SLOPE3,
	TEMPLATETD_SLOPE4,
	TEMPLATETD_SLOPE5,
	TEMPLATETD_SLOPE6,
	TEMPLATETD_SLOPE7,
	TEMPLATETD_SLOPE8,
	TEMPLATETD_SLOPE9,
	TEMPLATETD_SLOPE10,
	TEMPLATETD_SLOPE11,
	TEMPLATETD_SLOPE12,
	TEMPLATETD_SLOPE13,
	TEMPLATETD_SLOPE14,
	TEMPLATETD_SLOPE15,
	TEMPLATETD_SLOPE16,
	TEMPLATETD_SLOPE17,
	TEMPLATETD_SLOPE18,
	TEMPLATETD_SLOPE19,
	TEMPLATETD_SLOPE20,
	TEMPLATETD_SLOPE21,
	TEMPLATETD_SLOPE22,
	TEMPLATETD_SLOPE23,
	TEMPLATETD_SLOPE24,
	TEMPLATETD_SLOPE25,
	TEMPLATETD_SLOPE26,
	TEMPLATETD_SLOPE27,
	TEMPLATETD_SLOPE28,
	TEMPLATETD_SLOPE29,
	TEMPLATETD_SLOPE30,
	TEMPLATETD_SLOPE31,
	TEMPLATETD_SLOPE32,
	TEMPLATETD_SLOPE33,
	TEMPLATETD_SLOPE34,
	TEMPLATETD_SLOPE35,
	TEMPLATETD_SLOPE36,
	TEMPLATETD_SLOPE37,
	TEMPLATETD_SLOPE38,
	TEMPLATETD_SHORE32,
	TEMPLATETD_SHORE33,
	TEMPLATETD_SHORE20,
	TEMPLATETD_SHORE21,
	TEMPLATETD_SHORE22,
	TEMPLATETD_SHORE23,
	TEMPLATETD_BRUSH1,
	TEMPLATETD_BRUSH2,
	TEMPLATETD_BRUSH3,
	TEMPLATETD_BRUSH4,
	TEMPLATETD_BRUSH5,
	TEMPLATETD_BRUSH6,
	TEMPLATETD_BRUSH7,
	TEMPLATETD_BRUSH8,
	TEMPLATETD_BRUSH9,
	TEMPLATETD_BRUSH10,
	TEMPLATETD_PATCH1,
	TEMPLATETD_PATCH2,
	TEMPLATETD_PATCH3,
	TEMPLATETD_PATCH4,
	TEMPLATETD_PATCH5,
	TEMPLATETD_PATCH6,
	TEMPLATETD_PATCH7,
	TEMPLATETD_PATCH8,
	TEMPLATETD_SHORE16,
	TEMPLATETD_SHORE17,
	TEMPLATETD_SHORE18,
	TEMPLATETD_SHORE19,
	TEMPLATETD_PATCH13,
	TEMPLATETD_PATCH14,
	TEMPLATETD_PATCH15,
	TEMPLATETD_BOULDER1,
	TEMPLATETD_BOULDER2,
	TEMPLATETD_BOULDER3,
	TEMPLATETD_BOULDER4,
	TEMPLATETD_BOULDER5,
	TEMPLATETD_BOULDER6,
	TEMPLATETD_SHORE6,
	TEMPLATETD_SHORE7,
	TEMPLATETD_SHORE8,
	TEMPLATETD_SHORE9,
	TEMPLATETD_SHORE10,

	TEMPLATETD_ROAD1,
	TEMPLATETD_ROAD2,
	TEMPLATETD_ROAD3,
	TEMPLATETD_ROAD4,
	TEMPLATETD_ROAD5,
	TEMPLATETD_ROAD6,
	TEMPLATETD_ROAD7,
	TEMPLATETD_ROAD8,
	TEMPLATETD_ROAD9,
	TEMPLATETD_ROAD10,
	TEMPLATETD_ROAD11,
	TEMPLATETD_ROAD12,
	TEMPLATETD_ROAD13,
	TEMPLATETD_ROAD14,
	TEMPLATETD_ROAD15,
	TEMPLATETD_ROAD16,
	TEMPLATETD_ROAD17,
	TEMPLATETD_ROAD18,
	TEMPLATETD_ROAD19,
	TEMPLATETD_ROAD20,
	TEMPLATETD_ROAD21,
	TEMPLATETD_ROAD22,
	TEMPLATETD_ROAD23,
	TEMPLATETD_ROAD24,
	TEMPLATETD_ROAD25,
	TEMPLATETD_ROAD26,
	TEMPLATETD_ROAD27,
	TEMPLATETD_ROAD28,
	TEMPLATETD_ROAD29,
	TEMPLATETD_ROAD30,
	TEMPLATETD_ROAD31,
	TEMPLATETD_ROAD32,
	TEMPLATETD_ROAD33,
	TEMPLATETD_ROAD34,
	TEMPLATETD_ROAD35,
	TEMPLATETD_ROAD36,
	TEMPLATETD_ROAD37,
	TEMPLATETD_ROAD38,
	TEMPLATETD_ROAD39,
	TEMPLATETD_ROAD40,
	TEMPLATETD_ROAD41,
	TEMPLATETD_ROAD42,
	TEMPLATETD_ROAD43,

	TEMPLATETD_RIVER1,
	TEMPLATETD_RIVER2,
	TEMPLATETD_RIVER3,
	TEMPLATETD_RIVER4,
	TEMPLATETD_RIVER5,
	TEMPLATETD_RIVER6,
	TEMPLATETD_RIVER7,
	TEMPLATETD_RIVER8,
	TEMPLATETD_RIVER9,
	TEMPLATETD_RIVER10,
	TEMPLATETD_RIVER11,
	TEMPLATETD_RIVER12,
	TEMPLATETD_RIVER13,

	TEMPLATETD_RIVER14,
	TEMPLATETD_RIVER15,
	TEMPLATETD_RIVER16,
	TEMPLATETD_RIVER17,
	TEMPLATETD_RIVER18,
	TEMPLATETD_RIVER19,
	TEMPLATETD_RIVER20,
	TEMPLATETD_RIVER21,
	TEMPLATETD_RIVER22,
	TEMPLATETD_RIVER23,
	TEMPLATETD_RIVER24,
	TEMPLATETD_RIVER25,
	TEMPLATETD_FORD1,
	TEMPLATETD_FORD2,
	TEMPLATETD_FALLS1,
	TEMPLATETD_FALLS2,

	TEMPLATETD_BRIDGE1,
	TEMPLATETD_BRIDGE1D,
	TEMPLATETD_BRIDGE2,
	TEMPLATETD_BRIDGE2D,
	TEMPLATETD_BRIDGE3,
	TEMPLATETD_BRIDGE3D,
	TEMPLATETD_BRIDGE4,
	TEMPLATETD_BRIDGE4D,

	TEMPLATETD_SHORE24,
	TEMPLATETD_SHORE25,
	TEMPLATETD_SHORE26,
	TEMPLATETD_SHORE27,
	TEMPLATETD_SHORE28,
	TEMPLATETD_SHORE29,
	TEMPLATETD_SHORE30,
	TEMPLATETD_SHORE31,

	TEMPLATETD_PATCH16,
	TEMPLATETD_PATCH17,
	TEMPLATETD_PATCH18,
	TEMPLATETD_PATCH19,
	TEMPLATETD_PATCH20,

	TEMPLATETD_SHORE34,
	TEMPLATETD_SHORE35,
	TEMPLATETD_SHORE36,
	TEMPLATETD_SHORE37,
	TEMPLATETD_SHORE38,
	TEMPLATETD_SHORE39,
	TEMPLATETD_SHORE40,
	TEMPLATETD_SHORE41,
	TEMPLATETD_SHORE42,
	TEMPLATETD_SHORE43,
	TEMPLATETD_SHORE44,
	TEMPLATETD_SHORE45,

	TEMPLATETD_SHORE46,
	TEMPLATETD_SHORE47,
	TEMPLATETD_SHORE48,
	TEMPLATETD_SHORE49,
	TEMPLATETD_SHORE50,
	TEMPLATETD_SHORE51,
	TEMPLATETD_SHORE52,
	TEMPLATETD_SHORE53,
	TEMPLATETD_SHORE54,
	TEMPLATETD_SHORE55,
	TEMPLATETD_SHORE56,
	TEMPLATETD_SHORE57,
	TEMPLATETD_SHORE58,
	TEMPLATETD_SHORE59,
	TEMPLATETD_SHORE60,
	TEMPLATETD_SHORE61,

	TEMPLATETD_SHORE62,
	TEMPLATETD_SHORE63,

	TEMPLATETD_COUNT,
	TEMPLATETD_NONE = 255,
	TEMPLATETD_FIRST = 0
};

enum TemplateTypeRA {
	TEMPLATERA_CLEAR1,
	TEMPLATERA_WATER,			// This must be the first non-clear template.
	TEMPLATERA_WATER2,
	TEMPLATERA_SHORE01,
	TEMPLATERA_SHORE02,
	TEMPLATERA_SHORE03,
	TEMPLATERA_SHORE04,
	TEMPLATERA_SHORE05,
	TEMPLATERA_SHORE06,
	TEMPLATERA_SHORE07,
	TEMPLATERA_SHORE08,
	TEMPLATERA_SHORE09,
	TEMPLATERA_SHORE10,
	TEMPLATERA_SHORE11,
	TEMPLATERA_SHORE12,
	TEMPLATERA_SHORE13,
	TEMPLATERA_SHORE14,
	TEMPLATERA_SHORE15,
	TEMPLATERA_SHORE16,
	TEMPLATERA_SHORE17,
	TEMPLATERA_SHORE18,
	TEMPLATERA_SHORE19,
	TEMPLATERA_SHORE20,
	TEMPLATERA_SHORE21,
	TEMPLATERA_SHORE22,
	TEMPLATERA_SHORE23,
	TEMPLATERA_SHORE24,
	TEMPLATERA_SHORE25,
	TEMPLATERA_SHORE26,
	TEMPLATERA_SHORE27,
	TEMPLATERA_SHORE28,
	TEMPLATERA_SHORE29,
	TEMPLATERA_SHORE30,
	TEMPLATERA_SHORE31,
	TEMPLATERA_SHORE32,
	TEMPLATERA_SHORE33,
	TEMPLATERA_SHORE34,
	TEMPLATERA_SHORE35,
	TEMPLATERA_SHORE36,
	TEMPLATERA_SHORE37,
	TEMPLATERA_SHORE38,
	TEMPLATERA_SHORE39,
	TEMPLATERA_SHORE40,
	TEMPLATERA_SHORE41,
	TEMPLATERA_SHORE42,
	TEMPLATERA_SHORE43,
	TEMPLATERA_SHORE44,
	TEMPLATERA_SHORE45,
	TEMPLATERA_SHORE46,
	TEMPLATERA_SHORE47,
	TEMPLATERA_SHORE48,
	TEMPLATERA_SHORE49,
	TEMPLATERA_SHORE50,
	TEMPLATERA_SHORE51,
	TEMPLATERA_SHORE52,
	TEMPLATERA_SHORE53,
	TEMPLATERA_SHORE54,
	TEMPLATERA_SHORE55,
	TEMPLATERA_SHORE56,
	TEMPLATERA_SHORECLIFF01,
	TEMPLATERA_SHORECLIFF02,
	TEMPLATERA_SHORECLIFF03,
	TEMPLATERA_SHORECLIFF04,
	TEMPLATERA_SHORECLIFF05,
	TEMPLATERA_SHORECLIFF06,
	TEMPLATERA_SHORECLIFF07,
	TEMPLATERA_SHORECLIFF08,
	TEMPLATERA_SHORECLIFF09,
	TEMPLATERA_SHORECLIFF10,
	TEMPLATERA_SHORECLIFF11,
	TEMPLATERA_SHORECLIFF12,
	TEMPLATERA_SHORECLIFF13,
	TEMPLATERA_SHORECLIFF14,
	TEMPLATERA_SHORECLIFF15,
	TEMPLATERA_SHORECLIFF16,
	TEMPLATERA_SHORECLIFF17,
	TEMPLATERA_SHORECLIFF18,
	TEMPLATERA_SHORECLIFF19,
	TEMPLATERA_SHORECLIFF20,
	TEMPLATERA_SHORECLIFF21,
	TEMPLATERA_SHORECLIFF22,
	TEMPLATERA_SHORECLIFF23,
	TEMPLATERA_SHORECLIFF24,
	TEMPLATERA_SHORECLIFF25,
	TEMPLATERA_SHORECLIFF26,
	TEMPLATERA_SHORECLIFF27,
	TEMPLATERA_SHORECLIFF28,
	TEMPLATERA_SHORECLIFF29,
	TEMPLATERA_SHORECLIFF30,
	TEMPLATERA_SHORECLIFF31,
	TEMPLATERA_SHORECLIFF32,
	TEMPLATERA_SHORECLIFF33,
	TEMPLATERA_SHORECLIFF34,
	TEMPLATERA_SHORECLIFF35,
	TEMPLATERA_SHORECLIFF36,
	TEMPLATERA_SHORECLIFF37,
	TEMPLATERA_SHORECLIFF38,
	TEMPLATERA_BOULDER1,
	TEMPLATERA_BOULDER2,
	TEMPLATERA_BOULDER3,
	TEMPLATERA_BOULDER4,
	TEMPLATERA_BOULDER5,
	TEMPLATERA_BOULDER6,
	TEMPLATERA_PATCH01,
	TEMPLATERA_PATCH02,
	TEMPLATERA_PATCH03,
	TEMPLATERA_PATCH04,
	TEMPLATERA_PATCH07,
	TEMPLATERA_PATCH08,
	TEMPLATERA_PATCH13,
	TEMPLATERA_PATCH14,
	TEMPLATERA_PATCH15,
	TEMPLATERA_RIVER01,
	TEMPLATERA_RIVER02,
	TEMPLATERA_RIVER03,
	TEMPLATERA_RIVER04,
	TEMPLATERA_RIVER05,
	TEMPLATERA_RIVER06,
	TEMPLATERA_RIVER07,
	TEMPLATERA_RIVER08,
	TEMPLATERA_RIVER09,
	TEMPLATERA_RIVER10,
	TEMPLATERA_RIVER11,
	TEMPLATERA_RIVER12,
	TEMPLATERA_RIVER13,
	TEMPLATERA_FALLS1,
	TEMPLATERA_FALLS1A,
	TEMPLATERA_FALLS2,
	TEMPLATERA_FALLS2A,
	TEMPLATERA_FORD1,
	TEMPLATERA_FORD2,
	TEMPLATERA_BRIDGE1,
	TEMPLATERA_BRIDGE1D,
	TEMPLATERA_BRIDGE2,
	TEMPLATERA_BRIDGE2D,
	TEMPLATERA_SLOPE01,
	TEMPLATERA_SLOPE02,
	TEMPLATERA_SLOPE03,
	TEMPLATERA_SLOPE04,
	TEMPLATERA_SLOPE05,
	TEMPLATERA_SLOPE06,
	TEMPLATERA_SLOPE07,
	TEMPLATERA_SLOPE08,
	TEMPLATERA_SLOPE09,
	TEMPLATERA_SLOPE10,
	TEMPLATERA_SLOPE11,
	TEMPLATERA_SLOPE12,
	TEMPLATERA_SLOPE13,
	TEMPLATERA_SLOPE14,
	TEMPLATERA_SLOPE15,
	TEMPLATERA_SLOPE16,
	TEMPLATERA_SLOPE17,
	TEMPLATERA_SLOPE18,
	TEMPLATERA_SLOPE19,
	TEMPLATERA_SLOPE20,
	TEMPLATERA_SLOPE21,
	TEMPLATERA_SLOPE22,
	TEMPLATERA_SLOPE23,
	TEMPLATERA_SLOPE24,
	TEMPLATERA_SLOPE25,
	TEMPLATERA_SLOPE26,
	TEMPLATERA_SLOPE27,
	TEMPLATERA_SLOPE28,
	TEMPLATERA_SLOPE29,
	TEMPLATERA_SLOPE30,
	TEMPLATERA_SLOPE31,
	TEMPLATERA_SLOPE32,
	TEMPLATERA_SLOPE33,
	TEMPLATERA_SLOPE34,
	TEMPLATERA_SLOPE35,
	TEMPLATERA_SLOPE36,
	TEMPLATERA_SLOPE37,
	TEMPLATERA_SLOPE38,
	TEMPLATERA_ROAD01,
	TEMPLATERA_ROAD02,
	TEMPLATERA_ROAD03,
	TEMPLATERA_ROAD04,
	TEMPLATERA_ROAD05,
	TEMPLATERA_ROAD06,
	TEMPLATERA_ROAD07,
	TEMPLATERA_ROAD08,
	TEMPLATERA_ROAD09,
	TEMPLATERA_ROAD10,
	TEMPLATERA_ROAD11,
	TEMPLATERA_ROAD12,
	TEMPLATERA_ROAD13,
	TEMPLATERA_ROAD14,
	TEMPLATERA_ROAD15,
	TEMPLATERA_ROAD16,
	TEMPLATERA_ROAD17,
	TEMPLATERA_ROAD18,
	TEMPLATERA_ROAD19,
	TEMPLATERA_ROAD20,
	TEMPLATERA_ROAD21,
	TEMPLATERA_ROAD22,
	TEMPLATERA_ROAD23,
	TEMPLATERA_ROAD24,
	TEMPLATERA_ROAD25,
	TEMPLATERA_ROAD26,
	TEMPLATERA_ROAD27,
	TEMPLATERA_ROAD28,
	TEMPLATERA_ROAD29,
	TEMPLATERA_ROAD30,
	TEMPLATERA_ROAD31,
	TEMPLATERA_ROAD32,
	TEMPLATERA_ROAD33,
	TEMPLATERA_ROAD34,
	TEMPLATERA_ROAD35,
	TEMPLATERA_ROAD36,
	TEMPLATERA_ROAD37,
	TEMPLATERA_ROAD38,
	TEMPLATERA_ROAD39,
	TEMPLATERA_ROAD40,
	TEMPLATERA_ROAD41,
	TEMPLATERA_ROAD42,
	TEMPLATERA_ROAD43,
	TEMPLATERA_ROUGH01,
	TEMPLATERA_ROUGH02,
	TEMPLATERA_ROUGH03,
	TEMPLATERA_ROUGH04,
	TEMPLATERA_ROUGH05,
	TEMPLATERA_ROUGH06,
	TEMPLATERA_ROUGH07,
	TEMPLATERA_ROUGH08,
	TEMPLATERA_ROUGH09,
	TEMPLATERA_ROUGH10,
	TEMPLATERA_ROUGH11,
	TEMPLATERA_ROAD44,
	TEMPLATERA_ROAD45,
	TEMPLATERA_RIVER14,
	TEMPLATERA_RIVER15,
	TEMPLATERA_RIVERCLIFF01,
	TEMPLATERA_RIVERCLIFF02,
	TEMPLATERA_RIVERCLIFF03,
	TEMPLATERA_RIVERCLIFF04,
	TEMPLATERA_BRIDGE_1A,
	TEMPLATERA_BRIDGE_1B,
	TEMPLATERA_BRIDGE_1C,
	TEMPLATERA_BRIDGE_2A,
	TEMPLATERA_BRIDGE_2B,
	TEMPLATERA_BRIDGE_2C,
	TEMPLATERA_BRIDGE_3A,
	TEMPLATERA_BRIDGE_3B,
	TEMPLATERA_BRIDGE_3C,
	TEMPLATERA_BRIDGE_3D,
	TEMPLATERA_BRIDGE_3E,
	TEMPLATERA_BRIDGE_3F,
	TEMPLATERA_F01,
	TEMPLATERA_F02,
	TEMPLATERA_F03,
	TEMPLATERA_F04,
	TEMPLATERA_F05,
	TEMPLATERA_F06,

	// Custom interior pieces.
	TEMPLATERA_ARRO0001,
	TEMPLATERA_ARRO0002,
	TEMPLATERA_ARRO0003,
	TEMPLATERA_ARRO0004,
	TEMPLATERA_ARRO0005,
	TEMPLATERA_ARRO0006,
	TEMPLATERA_ARRO0007,
	TEMPLATERA_ARRO0008,
	TEMPLATERA_ARRO0009,
	TEMPLATERA_ARRO0010,
	TEMPLATERA_ARRO0011,
	TEMPLATERA_ARRO0012,
	TEMPLATERA_ARRO0013,
	TEMPLATERA_ARRO0014,
	TEMPLATERA_ARRO0015,
	TEMPLATERA_FLOR0001,
	TEMPLATERA_FLOR0002,
	TEMPLATERA_FLOR0003,
	TEMPLATERA_FLOR0004,
	TEMPLATERA_FLOR0005,
	TEMPLATERA_FLOR0006,
	TEMPLATERA_FLOR0007,
	TEMPLATERA_GFLR0001,
	TEMPLATERA_GFLR0002,
	TEMPLATERA_GFLR0003,
	TEMPLATERA_GFLR0004,
	TEMPLATERA_GFLR0005,
	TEMPLATERA_GSTR0001,
	TEMPLATERA_GSTR0002,
	TEMPLATERA_GSTR0003,
	TEMPLATERA_GSTR0004,
	TEMPLATERA_GSTR0005,
	TEMPLATERA_GSTR0006,
	TEMPLATERA_GSTR0007,
	TEMPLATERA_GSTR0008,
	TEMPLATERA_GSTR0009,
	TEMPLATERA_GSTR0010,
	TEMPLATERA_GSTR0011,
	TEMPLATERA_LWAL0001,
	TEMPLATERA_LWAL0002,
	TEMPLATERA_LWAL0003,
	TEMPLATERA_LWAL0004,
	TEMPLATERA_LWAL0005,
	TEMPLATERA_LWAL0006,
	TEMPLATERA_LWAL0007,
	TEMPLATERA_LWAL0008,
	TEMPLATERA_LWAL0009,
	TEMPLATERA_LWAL0010,
	TEMPLATERA_LWAL0011,
	TEMPLATERA_LWAL0012,
	TEMPLATERA_LWAL0013,
	TEMPLATERA_LWAL0014,
	TEMPLATERA_LWAL0015,
	TEMPLATERA_LWAL0016,
	TEMPLATERA_LWAL0017,
	TEMPLATERA_LWAL0018,
	TEMPLATERA_LWAL0019,
	TEMPLATERA_LWAL0020,
	TEMPLATERA_LWAL0021,
	TEMPLATERA_LWAL0022,
	TEMPLATERA_LWAL0023,
	TEMPLATERA_LWAL0024,
	TEMPLATERA_LWAL0025,
	TEMPLATERA_LWAL0026,
	TEMPLATERA_LWAL0027,
	TEMPLATERA_STRP0001,
	TEMPLATERA_STRP0002,
	TEMPLATERA_STRP0003,
	TEMPLATERA_STRP0004,
	TEMPLATERA_STRP0005,
	TEMPLATERA_STRP0006,
	TEMPLATERA_STRP0007,
	TEMPLATERA_STRP0008,
	TEMPLATERA_STRP0009,
	TEMPLATERA_STRP0010,
	TEMPLATERA_STRP0011,
	TEMPLATERA_WALL0001,
	TEMPLATERA_WALL0002,
	TEMPLATERA_WALL0003,
	TEMPLATERA_WALL0004,
	TEMPLATERA_WALL0005,
	TEMPLATERA_WALL0006,
	TEMPLATERA_WALL0007,
	TEMPLATERA_WALL0008,
	TEMPLATERA_WALL0009,
	TEMPLATERA_WALL0010,
	TEMPLATERA_WALL0011,
	TEMPLATERA_WALL0012,
	TEMPLATERA_WALL0013,
	TEMPLATERA_WALL0014,
	TEMPLATERA_WALL0015,
	TEMPLATERA_WALL0016,
	TEMPLATERA_WALL0017,
	TEMPLATERA_WALL0018,
	TEMPLATERA_WALL0019,
	TEMPLATERA_WALL0020,
	TEMPLATERA_WALL0021,
	TEMPLATERA_WALL0022,
	TEMPLATERA_WALL0023,
	TEMPLATERA_WALL0024,
	TEMPLATERA_WALL0025,
	TEMPLATERA_WALL0026,
	TEMPLATERA_WALL0027,
	TEMPLATERA_WALL0028,
	TEMPLATERA_WALL0029,
	TEMPLATERA_WALL0030,
	TEMPLATERA_WALL0031,
	TEMPLATERA_WALL0032,
	TEMPLATERA_WALL0033,
	TEMPLATERA_WALL0034,
	TEMPLATERA_WALL0035,
	TEMPLATERA_WALL0036,
	TEMPLATERA_WALL0037,
	TEMPLATERA_WALL0038,
	TEMPLATERA_WALL0039,
	TEMPLATERA_WALL0040,
	TEMPLATERA_WALL0041,
	TEMPLATERA_WALL0042,
	TEMPLATERA_WALL0043,
	TEMPLATERA_WALL0044,
	TEMPLATERA_WALL0045,
	TEMPLATERA_WALL0046,
	TEMPLATERA_WALL0047,
	TEMPLATERA_WALL0048,
	TEMPLATERA_WALL0049,
	TEMPLATERA_BRIDGE1H,
	TEMPLATERA_BRIDGE2H,
	TEMPLATERA_BRIDGE_1AX,
	TEMPLATERA_BRIDGE_2AX,
	TEMPLATERA_BRIDGE1X,
	TEMPLATERA_BRIDGE2X,

	TEMPLATERA_XTRA0001,
	TEMPLATERA_XTRA0002,
	TEMPLATERA_XTRA0003,
	TEMPLATERA_XTRA0004,
	TEMPLATERA_XTRA0005,
	TEMPLATERA_XTRA0006,
	TEMPLATERA_XTRA0007,
	TEMPLATERA_XTRA0008,
	TEMPLATERA_XTRA0009,
	TEMPLATERA_XTRA0010,
	TEMPLATERA_XTRA0011,
	TEMPLATERA_XTRA0012,
	TEMPLATERA_XTRA0013,
	TEMPLATERA_XTRA0014,
	TEMPLATERA_XTRA0015,
	TEMPLATERA_XTRA0016,
	TEMPLATERA_HILL01,
	TEMPLATERA_COUNT,
	TEMPLATERA_NONE = 65535,
	TEMPLATERA_FIRST = 0
};
class TemplateType
{
public:
	unsigned short ID;
	std::string Name;
	unsigned char IconWidth;
	unsigned char IconHeight;
	bool* IconMask;
	Gdiplus::Bitmap* Thumbnail;
	unsigned char Theater;
	TemplateTypeFlag Flag;
	TemplateType(unsigned short id, const char* name, unsigned char iconWidth, unsigned char iconHeight, unsigned char theater, TemplateTypeFlag flag) : ID(id), Name(name), IconWidth(iconWidth), IconHeight(iconHeight), Theater(theater), Flag(flag), IconMask(nullptr), Thumbnail(nullptr)
	{
	}
	void Free()
	{
		if (IconMask)
		{
			delete[] IconMask;
			IconMask = nullptr;
		}
		if (Thumbnail)
		{
			delete Thumbnail;
			Thumbnail = nullptr;
		}
	}
	static TemplateType * const PointersRA[TEMPLATERA_COUNT];
	static TemplateType * const PointersTD[TEMPLATETD_COUNT];
	void Init();
};
