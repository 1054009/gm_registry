PROJECT_GENERATOR_VERSION = 3

include("garrysmod_common")

CreateWorkspace({name = "gm_registry", abi_compatible = false, path = "project/"})
	CreateProject({serverside = false, source_path = "source", manual_files = false})
		IncludeLuaShared()
		IncludeHelpersExtended()
		IncludeSDKCommon()
		IncludeSDKTier0()
		IncludeSDKTier1()
		IncludeSDKLZMA()
		IncludeScanning()
		IncludeDetouring()
		IncludeSDKMathlib()
		files({
			"src/**.*"
		})