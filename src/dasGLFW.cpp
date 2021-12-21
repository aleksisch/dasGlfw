// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "dasGLFW.h"
#include "need_dasGLFW.h"
#include "dasGLFW.struct.impl.inc"
namespace das {
#include "dasGLFW.enum.class.inc"
#include "dasGLFW.struct.class.inc"
Module_dasGLFW::Module_dasGLFW() : Module("glfw") {
	lib.addModule(this);
	lib.addBuiltInModule();
}
bool Module_dasGLFW::initDependencies() {
	if ( initialized ) return true;
	initialized = true;
	#include "dasGLFW.const.inc"
	#include "dasGLFW.enum.add.inc"
	#include "dasGLFW.dummy.add.inc"
	#include "dasGLFW.struct.add.inc"
	#include "dasGLFW.struct.postadd.inc"
	#include "dasGLFW.alias.add.inc"
	#include "dasGLFW.func.reg.inc"
	initMain();
	return true;
}
}
REGISTER_MODULE_IN_NAMESPACE(Module_dasGLFW,das);

