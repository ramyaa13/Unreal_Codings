// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"


void AShooterAIController::BeginPlay()
{
    Super::BeginPlay();

    if(AIBehaviorTree != nullptr)
    {
        RunBehaviorTree(AIBehaviorTree);
        APawn *PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
        GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
    }
}

void AShooterAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    // APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
        
    // if(LineOfSightTo(PlayerPawn))
    // {
    //     //MoveToActor(Playerpawn, AcceptanceRadius);
    //     // SetFocus(Playerpawn);
    //     GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
    //     GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLocation"), PlayerPawn->GetActorLocation());


    // }
    // else
    // {
    //     // ClearFocus(EAIFocusPriority::Default);
    //     // StopMovement();
    //     GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));
    // }

}
