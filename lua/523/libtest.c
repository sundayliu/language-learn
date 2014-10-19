/*
 * file name:libtest.c
 * sundayliu
 * 2014-10-17
 */

 /*
  * gcc -c libtest.c
  * gcc -O2 -bundle -undefined dynamic_lookup -o libtest.so libtest.o
  */
 #include "src/lua.h"
 #include "src/lauxlib.h"
 #include "src/lualib.h"

 static int hello_c(lua_State* L){
    const char* from_lua = lua_tostring(L, 1);
    printf("Lua:%s\n", from_lua);
    lua_pushstring(L, "Hi Lua, nice to meet you");
    return 1;
 }

 static const struct luaL_Reg mylualib[] = {
    {"hello_c", hello_c},
    {NULL, NULL}
 };

 int luaopen_libtest(lua_State* L){
    luaL_newlib(L, mylualib);
    lua_pushvalue(L,-1);
    lua_setglobal(L, "libtest");
    return 1;
 }