// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimateBall.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"


void FAnimateBall::StartupModule()
{
#if (ENGINE_MINOR_VERSION >= 21)
	FString ShaderDir = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/Project", ShaderDir);
#endif
}

void FAnimateBall::ShutdownModule()
{

}

IMPLEMENT_PRIMARY_GAME_MODULE(FAnimateBall, AnimateBall, "AnimateBall" );
