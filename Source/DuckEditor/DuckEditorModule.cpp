#include "DuckEditorModule.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "Duck"

//////////////////////////////////////////////////////////////////////////
// FDuck

class FDuckEditor : public IDuckEditorModule
{
public:
	FDuckEditor()
		: DuckAssetCategoryBit(EAssetTypeCategories::Misc)
	{
	}

	virtual uint32 GetDuckAssetCategory() const override { return DuckAssetCategoryBit; }
	// End of IDuckModule

private:
	
	/** All created asset type actions.  Cached here so that we can unregister them during shutdown. */
	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
	EAssetTypeCategories::Type DuckAssetCategoryBit;

public:
	
	virtual void StartupModule() override
	{
		// Register asset types
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		
		DuckAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Duck")),
			LOCTEXT("DuckAssetCategory", "Duck"));

		RegisterAssetTypeAction(AssetTools, MakeShareable(new FCharacterAssetTypeActions(DuckAssetCategoryBit)));
	}

	virtual void ShutdownModule() override
	{

		// Unregister the details customization
		//@TODO: Unregister them

		// Unregister all the asset types that we registered
		if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
		{
			IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
			for (int32 Index = 0; Index < CreatedAssetTypeActions.Num(); ++Index)
			{
				AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[Index].ToSharedRef());
			}
		}
		
		CreatedAssetTypeActions.Empty();
	}
private:
	
	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
	{
		AssetTools.RegisterAssetTypeActions(Action);
		CreatedAssetTypeActions.Add(Action);
	}
};

//////////////////////////////////////////////////////////////////////////

IMPLEMENT_MODULE(FDuckEditor, DuckEditor);

#undef LOCTEXT_NAMESPACE
