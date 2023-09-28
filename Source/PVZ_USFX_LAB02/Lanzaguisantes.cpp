// Fill out your copyright notice in the Description page of Project Settings.


#include "Lanzaguisantes.h"

ALanzaguisantes::ALanzaguisantes()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_Out.Shape_Trim_90_Out'"));
	PlantMeshComponent->SetStaticMesh(PlantMesh.Object);

	Tags.Add(TEXT("Lanzaguisantes"));
}
