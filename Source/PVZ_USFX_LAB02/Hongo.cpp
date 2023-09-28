// Fill out your copyright notice in the Description page of Project Settings.


#include "Hongo.h"

AHongo::AHongo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	PlantMeshComponent->SetStaticMesh(PlantMesh.Object);
	Tags.Add(TEXT("Hongo"));
}
