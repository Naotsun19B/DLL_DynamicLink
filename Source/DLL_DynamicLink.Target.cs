// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class DLL_DynamicLinkTarget : TargetRules
{
	public DLL_DynamicLinkTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "DLL_DynamicLink" } );
	}
}
