/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAppDelegateBase : TSABaseApplicationDelegate {
    BOOL  _cachedBidiIsSupported;
}

@property (nonatomic, readonly) NSArray *powerPointDocumentTypes;

- (BOOL)URLIsValidForImportedHyperlink:(id)arg1;
- (id)appChartPropertyOverrides;
- (void)applicationDidFinishLaunching;
- (id)applicationName;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale { }*)arg1;
- (id)cloudKitContainerIdentifier;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (Class)documentRootClass;
- (id)documentTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)importableDocumentTypes;
- (id)init;
- (id)invalidURLSchemes;
- (float)maximumAspectRatioForPreviewImage;
- (float)mimimumAspectRatioForPreviewImage;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (void)p_inputMethodsChanged:(id)arg1;
- (id)powerPointDocumentTypes;
- (id)previewImageNameForDocumentType:(id)arg1;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (void)registerAllowedElementKinds;
- (void)registerClassTypeMappings;
- (id)sharedAlertMessageWithUserName:(id)arg1;
- (id)sharedReadOnlyAlertMessageWithUserName:(id)arg1;
- (id)stringForCloseDocument;
- (id)stringForCollaboratorConflict;
- (id)stringForCollaboratorConflictDetails;
- (id)stringForCollaboratorConflictWithKeepDetails;
- (id)stringForCollaboratorsBlockedWhileOffline;
- (id)stringForDocumentUpdated;
- (id)stringForDocumentUpdatedByOwnerDetails;
- (id)stringForDocumentUpdatedByOwnerWithKeepDetails;
- (id)stringForDocumentUpdatedTitle;
- (id)stringForLearnMoreSharingURL;
- (id)stringForRemoteVersionRestorationAlertMessage;
- (id)stringForRemoteVersionRestorationWithUnsavedChangesAlertMessage;
- (id)stringForUpdatingDocument;
- (BOOL)supportsRTL;
- (BOOL)supportsShrinkTextToFit;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;

@end