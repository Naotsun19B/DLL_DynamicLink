// Some copyright should be here...

using UnrealBuildTool;
using System.IO;

public class TestPlugin : ModuleRules
{
	public TestPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);

        string ThirdPartyPath = Path.Combine(ModuleDirectory, "..", "..", "ThirdParty");

        switch(Target.Platform)
        {
            case UnrealTargetPlatform.Win64:
                ThirdPartyPath = Path.Combine(ThirdPartyPath, "Win64");
                break;

            case UnrealTargetPlatform.Win32:
                ThirdPartyPath = Path.Combine(ThirdPartyPath, "Win32");
                break;

            default:
                throw new System.Exception(string.Format("Unsupported platform {0}", Target.Platform.ToString()));
        }

        ThirdPartyPath = Path.Combine(ThirdPartyPath, "DllTest.dll");

        if (!File.Exists(ThirdPartyPath))
        {
            throw new System.Exception(string.Format("File not found {0}", ThirdPartyPath));
        }

        RuntimeDependencies.Add(ThirdPartyPath);
    }
}
