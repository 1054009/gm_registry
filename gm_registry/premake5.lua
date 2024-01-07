PROJECT_GENERATOR_VERSION = 3

include("./garrysmod_common/x86")
CreateWorkspace({name = "registry_x86", abi_compatible = false, path = "projects/"})
	CreateProject({serverside = false, source_path = "src", manual_files = false})
		IncludeLuaShared()
		files({
			"src/**.*"
		})

include("./garrysmod_common/x86_64")
CreateWorkspace({name = "registry_x86_64", abi_compatible = false, path = "projects/"})
	CreateProject({serverside = false, source_path = "src", manual_files = false})
		IncludeLuaShared()
		files({
			"src/**.*"
		})