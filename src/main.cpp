#include "common.hpp"
#include "core.hpp"
#include "friends.hpp"
#include "user_stats.hpp"

// Creates and returns a table with all functions
EXTERN int luaopen_luasteam(lua_State *L) {
    lua_createtable(L, 0, 5);
    luasteam::add_core(L);
    luasteam::add_user_stats(L);
    luasteam::add_friends(L);
    return 1;
}