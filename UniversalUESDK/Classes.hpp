#pragma once

namespace UnrealClasses {
	/* Inheritance Hierarchy */
	class UObjectBase {};
	class UObjectBaseUtility : UObjectBase {};
	class UObject : UObjectBaseUtility {};
	class AActor : UObject {};
	class AController : AActor {};
	class UActorComponent : UObject {};
	class USceneComponent : UActorComponent {};
	class UPrimitiveComponent : USceneComponent {};
	class UMeshComponent : UPrimitiveComponent {};
	class USkinnedMeshComponent : UMeshComponent {};

	template<class T>
	class TArray {
/*https://docs.unrealengine.com/5.0/en-US/API/Runtime/Core/Containers/TArray/*/
	public:
		TArray() {
			Data = NULL;
			Count = 0;
			Max = 0;
		};

		T operator[](uint64_t i) const {
			return Utilities::DummyFunctions::Read<uintptr_t>(((uintptr_t)Data) + i * sizeof(T));
		};

		T* Data;
		unsigned int Count;
		unsigned int Max;
	};
}