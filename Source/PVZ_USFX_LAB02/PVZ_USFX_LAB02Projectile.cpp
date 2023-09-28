// Copyright Epic Games, Inc. All Rights Reserve
//despues de crear el contador y crear la funcion para contar el numero de proyectiles disparados, se crea la funcion tick para que se ejecute cada frame y se incremente el contador
#include "PVZ_USFX_LAB02Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "TimerManager.h""
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

APVZ_USFX_LAB02Projectile::APVZ_USFX_LAB02Projectile() 
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));
	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &APVZ_USFX_LAB02Projectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 250.0f;
	ProjectileMovement->MaxSpeed = 250.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	MaxDistance = 1000.0f;
	//InitialLifeSpan = 10.0f;
	InitialLifeSpan = MaxDistance / ProjectileMovement->InitialSpeed;
	DamageGenerates = 10.0f;
	OwnerActor = GetInstigator();//Identifica a de quien esta saliendo el proyectil


}

void APVZ_USFX_LAB02Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	//if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		//OtherComp->AddImpulseAtLocation(GetVelocity() * 200.0f, GetActorLocation());
		if (OtherActor->ActorHasTag("Enemy"))
		{
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			OtherActor->TakeDamage(DamageGenerates, FDamageEvent(), nullptr, this);
			//OtherComp->DestroyComponent();
			//OtherActor->Destroy();
		}
		else
		{
			// Realiza acciones normales para la colisión con otros actores
			//OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		}
		
	}

	this->Destroy();
}
int APVZ_USFX_LAB02Projectile::ContadorProyectilesDisparados()//Aqui configure el contador de proyectiles
//Esta funcion se encarga de contar el numero de proyectiles disparados

{
	//es para controlar y configurar un temporizador en el mundo del juego
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &APlayerCharacter::MostrarNumeroDeProyectiles, 5.0f, true, 5.0f);

	numeroProyectilesDisparados++;
	Super::BeginPlay();
}


void APVZ_USFX_LAB02Projectile::MostrarNumeroDeProyectilesDisparados()//Muestra el numero de proyectiles disparados en el mundo del juego
{
	int numeroProyectilesDisparados = AProyectil::GetActiveProyectileCount();

	// Aquí puedes mostrar el número de proyectiles en la pantalla o realizar cualquier otra acción que desees
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Proyectiles disparados: %d"), numeroProyectilesDisparados));
}


void APVZ_USFX_LAB02Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
