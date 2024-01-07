#include <GarrysMod/Lua/Interface.h>

GMOD_MODULE_OPEN()
{
	LUA->PushSpecial(GarrysMod::Lua::SPECIAL_GLOB);
	{
		LUA->PushString("_R");
		LUA->PushSpecial(GarrysMod::Lua::SPECIAL_REG);
		LUA->RawSet(-3);
	}
	LUA->Pop();

	return 0;
}

GMOD_MODULE_CLOSE()
{
	LUA->PushSpecial(GarrysMod::Lua::SPECIAL_GLOB);
	{
		LUA->PushString("_R");
		LUA->PushNil();
		LUA->RawSet(-3);
	}
	LUA->Pop();

	return 0;
}