#pragma once

enum Offsets
{
	UworldOffset = 0x0, /* ViewPort->World, GameImageBase + Uworld */
	PersistentLevelOffset = 0x0, /* UWorld->PersistentLevel *ULevel */
	OwningGameInstanceOffset = 0x0, /* UWorld->OwningGameInstance *UGameInstance */
	GameStateOffset = 0x0, /* UWorld->GameState *AGameStateBase */
	LevelsOffset = 0x0, /* UWorld->Levels *TArray<ULevel> */
	AllActorsArrayOffset = 0x0,
	LocalPlayersOffset = 0x0, /* UGameInstance->LocalPlayers *TArray<ULocalPlayer> */
	MeshOffset = 0x0, /* ACharacter/APawn->Mesh *USkeletalMeshComponent */
	BoneArrayOffset = 0x0, /* USkeletalMeshComponent->BoneArray */
	BoneArrayCollectionOffset = BoneArrayOffset + 0x10, /* USkeletalMeshComponent->BoneArrayCached */
	PlayerControllerOffset = 0x0, /* UPlayer/UObject->PlayerController *APlayerController */
	AcknowledgedPawnOffset = 0x0, /* APlayerController->AcknowledgedPawn *APawn */
	PlayerCameraManagerOffset = 0x0, /* APlayerController->PlayerCameraManager *APawn */
	MyHUDOffset = 0x0,  /* APlayerController->MyHUD *AHUD */
	PlayerStateOffset = 0x0, /* APawn/AActor->PlayerState *APlayerState */
	TeamIndexOffset = 0x0,
	RootComponentOffset = 0x0, /* AActor->RootComponent *USceneComponent */
	RelativeLocationOffset = 0x0, /* USceneComponent->RelativeLocation FVector */
	RelativeRotationOffset = 0x0, /* USceneComponent->RelativeRotation FRotator */
	PawnFNameIndexOffset = 0x0, /* Usually AActor->0x18 */
	PawnUniqueIndexOffset = 0x0, /* Usually AActor->0x38 */
};