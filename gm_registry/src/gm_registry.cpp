#include <GarrysMod/Lua/Interface.h>

LUA_FUNCTION(getregistry)
{
	LUA->PushSpecial(GarrysMod::Lua::SPECIAL_REG);
	return 1;
}

GMOD_MODULE_OPEN()
{
	bool has_G_debug = false;

	LUA->PushSpecial(GarrysMod::Lua::SPECIAL_GLOB);
	{
		LUA->PushString("_R");
		LUA->PushSpecial(GarrysMod::Lua::SPECIAL_REG);
		LUA->RawSet(-3);

		LUA->PushString("debug");
		LUA->RawGet(-2);
		if (LUA->IsType(-1, GarrysMod::Lua::Type::Table))
		{
			has_G_debug = true;

			LUA->PushString("getregistry");
			LUA->PushCFunction(getregistry);
			LUA->RawSet(-3);
		}	
	}
	LUA->Pop();

	if (!has_G_debug)
		LUA->ThrowError("_G.debug not found");

	return 0;
}

GMOD_MODULE_CLOSE()
{
	LUA->PushSpecial(GarrysMod::Lua::SPECIAL_GLOB);
	{
		LUA->PushString("_R");
		LUA->PushNil();
		LUA->RawSet(-3);

		LUA->PushString("debug");
		LUA->RawGet(-2);
		if (LUA->IsType(-1, GarrysMod::Lua::Type::Table))
		{
			LUA->PushString("getregistry");
			LUA->PushNil();
			LUA->RawSet(-3);
		}
	}
	LUA->Pop();

	return 0;
}