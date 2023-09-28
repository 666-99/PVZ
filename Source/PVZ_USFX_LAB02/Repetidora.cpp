// Fill out your copyright notice in the Description page of Project Settings.


#include "Repetidora.h"

ARepetidora::ARepetidora()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	PlantMeshComponent->SetStaticMesh(PlantMesh.Object);
	Tags.Add(TEXT("Repetidora"));
}
