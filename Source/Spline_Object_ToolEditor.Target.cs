// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Spline_Object_ToolEditorTarget : TargetRules
{
	public Spline_Object_ToolEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Spline_Object_Tool" } );
	}
}
