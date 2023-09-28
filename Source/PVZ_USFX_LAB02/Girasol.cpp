// Fill out your copyright notice in the Description page of Project Settings.


#include "Girasol.h"

AGirasol::AGirasol()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	PlantMeshComponent->SetStaticMesh(PlantMesh.Object);
	Tags.Add(TEXT("Girasol"));
}
