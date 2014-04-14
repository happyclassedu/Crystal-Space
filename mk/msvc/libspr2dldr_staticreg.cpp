// This file is automatically generated.
#include "cssysdef.h"
#include "csutil/scf.h"

// Put static linking stuff into own section.
// The idea is that this allows the section to be swapped out but not
// swapped in again b/c something else in it was needed.
#if !defined(CS_DEBUG) && defined(CS_COMPILER_MSVC)
#pragma const_seg(".CSmetai")
#pragma comment(linker, "/section:.CSmetai,r")
#pragma code_seg(".CSmeta")
#pragma comment(linker, "/section:.CSmeta,er")
#pragma comment(linker, "/merge:.CSmetai=.CSmeta")
#endif

namespace csStaticPluginInit
{
static char const metainfo_spr2dldr[] =
"<?xml version=\"1.0\"?>"
"<!-- spr2dldr.csplugin -->"
"<plugin>"
"  <scf>"
"    <classes>"
"      <class>"
"        <name>crystalspace.mesh.loader.factory.sprite.2d</name>"
"        <implementation>csSprite2DFactoryLoader</implementation>"
"        <description>Crystal Space Sprite2D Mesh Factory Loader</description>"
"      </class>"
"      <class>"
"        <name>crystalspace.mesh.loader.sprite.2d</name>"
"        <implementation>csSprite2DLoader</implementation>"
"        <description>Crystal Space Sprite2D Mesh Loader</description>"
"      </class>"
"      <class>"
"        <name>crystalspace.mesh.saver.factory.sprite.2d</name>"
"        <implementation>csSprite2DFactorySaver</implementation>"
"        <description>Crystal Space Sprite2D Mesh Factory Saver</description>"
"      </class>"
"      <class>"
"        <name>crystalspace.mesh.saver.sprite.2d</name>"
"        <implementation>csSprite2DSaver</implementation>"
"        <description>Crystal Space Sprite2D Mesh Saver</description>"
"      </class>"
"    </classes>"
"  </scf>"
"</plugin>"
;
  #ifndef csSprite2DFactoryLoader_FACTORY_REGISTER_DEFINED 
  #define csSprite2DFactoryLoader_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(csSprite2DFactoryLoader) 
  #endif
  #ifndef csSprite2DLoader_FACTORY_REGISTER_DEFINED 
  #define csSprite2DLoader_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(csSprite2DLoader) 
  #endif
  #ifndef csSprite2DFactorySaver_FACTORY_REGISTER_DEFINED 
  #define csSprite2DFactorySaver_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(csSprite2DFactorySaver) 
  #endif
  #ifndef csSprite2DSaver_FACTORY_REGISTER_DEFINED 
  #define csSprite2DSaver_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(csSprite2DSaver) 
  #endif

class spr2dldr
{
SCF_REGISTER_STATIC_LIBRARY(spr2dldr,metainfo_spr2dldr)
  #ifndef csSprite2DFactoryLoader_FACTORY_REGISTERED 
  #define csSprite2DFactoryLoader_FACTORY_REGISTERED 
    csSprite2DFactoryLoader_StaticInit csSprite2DFactoryLoader_static_init__; 
  #endif
  #ifndef csSprite2DLoader_FACTORY_REGISTERED 
  #define csSprite2DLoader_FACTORY_REGISTERED 
    csSprite2DLoader_StaticInit csSprite2DLoader_static_init__; 
  #endif
  #ifndef csSprite2DFactorySaver_FACTORY_REGISTERED 
  #define csSprite2DFactorySaver_FACTORY_REGISTERED 
    csSprite2DFactorySaver_StaticInit csSprite2DFactorySaver_static_init__; 
  #endif
  #ifndef csSprite2DSaver_FACTORY_REGISTERED 
  #define csSprite2DSaver_FACTORY_REGISTERED 
    csSprite2DSaver_StaticInit csSprite2DSaver_static_init__; 
  #endif
public:
 spr2dldr();
};
spr2dldr::spr2dldr() {}

}