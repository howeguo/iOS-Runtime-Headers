/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationPickerViewController : UITableViewController <TKVibrationPickerTableViewCellDelegate, TKVibrationRecorderViewControllerDelegate, UINavigationControllerDelegate> {
    NSString *_accountIdentifier;
    <TKVibrationPickerViewControllerDelegate> *_additionalDelegate;
    int _alertType;
    BOOL _allowsDeletingDefaultVibration;
    BOOL _canEnterEditingMode;
    TKLabelContainerView *_defaultSectionHeaderView;
    NSString *_defaultVibrationIdentifier;
    BOOL _defaultVibrationIdentifierWasExplicitlySet;
    <TKVibrationPickerViewControllerDelegate> *_delegate;
    <TKVibrationPickerViewControllerDismissalDelegate> *_dismissalDelegate;
    NSIndexPath *_indexPathOfCellBeingDeleted;
    BOOL _isCallingParentViewController;
    NSString *_noneString;
    NSIndexPath *_selectedVibrationIndexPath;
    BOOL _shouldForceShowingAllAvailableSections;
    BOOL _showsDefault;
    BOOL _showsEditButtonAtRightSideOfCurrentNavigationController;
    BOOL _showsEditButtonInNavigationBar;
    BOOL _showsNone;
    BOOL _showsNothingSelected;
    BOOL _showsUserGenerated;
    BOOL _skipNextUserGeneratedVibrationsDidChangeNotification;
    NSArray *_sortedUserGeneratedVibrationIdentifiers;
    NSArray *_sortedVibrationIdentifiers;
    <TKVibrationPickerStyleProvider> *_styleProvider;
    BOOL _swipeToDeleteMode;
    TKLabelContainerView *_systemSectionHeaderView;
    TKLabelContainerView *_userGeneratedSectionHeaderView;
    BOOL _vibrating;
    TLVibrationManager *_vibrationManager;
    NSTimer *_vibrationShouldStopTimer;
    TKVibratorController *_vibratorController;
    BOOL _viewHasAppearedAtLeastOnce;
}

@property (setter=_setAdditionalDelegate:, nonatomic) <TKVibrationPickerViewControllerDelegate> *_additionalDelegate;
@property (setter=_setDefaultSectionHeaderView:, nonatomic, retain) TKLabelContainerView *_defaultSectionHeaderView;
@property (setter=_setDefaultVibrationIdentifier:, nonatomic, copy) NSString *_defaultVibrationIdentifier;
@property (setter=_setDefaultVibrationIdentifierWasExplicitlySet:, nonatomic) BOOL _defaultVibrationIdentifierWasExplicitlySet;
@property (setter=_setDismissalDelegate:, nonatomic) <TKVibrationPickerViewControllerDismissalDelegate> *_dismissalDelegate;
@property (setter=_setIndexPathOfCellBeingDeleted:, nonatomic, retain) NSIndexPath *_indexPathOfCellBeingDeleted;
@property (nonatomic, readonly) int _sectionForDefaultGroup;
@property (nonatomic, readonly) int _sectionForNoneGroup;
@property (nonatomic, readonly) int _sectionForSystemGroup;
@property (nonatomic, readonly) int _sectionForUserGeneratedGroup;
@property (setter=_setSelectedVibrationIndexPathAdjustedForCurrentEditingMode:, nonatomic, retain) NSIndexPath *_selectedVibrationIndexPathAdjustedForCurrentEditingMode;
@property (setter=_setShouldForceShowingAllAvailableSections:, nonatomic) BOOL _shouldForceShowingAllAvailableSections;
@property (nonatomic, readonly) BOOL _showsOnlyEditableSections;
@property (nonatomic, readonly) NSArray *_sortedUserGeneratedVibrationIdentifiers;
@property (nonatomic, readonly) NSArray *_sortedVibrationIdentifiers;
@property (setter=_setStyleProvider:, nonatomic, retain) <TKVibrationPickerStyleProvider> *_styleProvider;
@property (setter=_setSystemSectionHeaderView:, nonatomic, retain) TKLabelContainerView *_systemSectionHeaderView;
@property (setter=_setUserGeneratedSectionHeaderView:, nonatomic, retain) TKLabelContainerView *_userGeneratedSectionHeaderView;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, readonly) int alertType;
@property (nonatomic) BOOL allowsDeletingDefaultVibration;
@property (nonatomic, readonly) BOOL canEnterEditingMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultVibrationIdentifier;
@property (nonatomic) <TKVibrationPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *noneString;
@property (nonatomic, retain) NSString *selectedVibrationIdentifier;
@property (nonatomic) BOOL showsDefault;
@property (nonatomic) BOOL showsEditButtonInNavigationBar;
@property (nonatomic) BOOL showsNone;
@property (nonatomic) BOOL showsNothingSelected;
@property (nonatomic) BOOL showsUserGenerated;
@property (nonatomic, retain) <TKVibrationPickerStyleProvider> *styleProvider;
@property (readonly) Class superclass;

- (id)_actualIndexPathFromNonEditingIndexPath:(id)arg1;
- (id)_additionalDelegate;
- (id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2;
- (id)_defaultSectionHeaderView;
- (id)_defaultVibrationIdentifier;
- (BOOL)_defaultVibrationIdentifierWasExplicitlySet;
- (id)_dismissalDelegate;
- (void)_getTitle:(id*)arg1 customHeaderView:(id*)arg2 forHeaderInSection:(int)arg3;
- (void)_handleError:(id)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_identifierOfVibrationAtIndexPath:(id)arg1;
- (id)_indexPathForVibrationWithIdentifier:(id)arg1;
- (id)_indexPathOfCellBeingDeleted;
- (id)_navigationItem;
- (id)_nonEditingIndexPathFromActualIndexPath:(id)arg1;
- (void)_performBlockForcingShowingAllAvailableSections:(id /* block */)arg1;
- (void)_presentVibrationRecorderViewController;
- (void)_processSelectionOfVibrationWithIdentifier:(id)arg1;
- (int)_sectionForDefaultGroup;
- (int)_sectionForNoneGroup;
- (int)_sectionForSystemGroup;
- (int)_sectionForUserGeneratedGroup;
- (id)_selectedVibrationIndexPathAdjustedForCurrentEditingMode;
- (void)_setAdditionalDelegate:(id)arg1;
- (void)_setDefaultSectionHeaderView:(id)arg1;
- (void)_setDefaultVibrationIdentifier:(id)arg1;
- (void)_setDefaultVibrationIdentifierWasExplicitlySet:(BOOL)arg1;
- (void)_setDismissalDelegate:(id)arg1;
- (void)_setIndexPathOfCellBeingDeleted:(id)arg1;
- (void)_setSelectedVibrationIdentifier:(id)arg1 processSelectionOfVibrationIdentifier:(BOOL)arg2;
- (void)_setSelectedVibrationIndexPathAdjustedForCurrentEditingMode:(id)arg1;
- (void)_setShouldForceShowingAllAvailableSections:(BOOL)arg1;
- (void)_setStyleProvider:(id)arg1;
- (void)_setSystemSectionHeaderView:(id)arg1;
- (void)_setUserGeneratedSectionHeaderView:(id)arg1;
- (BOOL)_shouldForceShowingAllAvailableSections;
- (BOOL)_showsOnlyEditableSections;
- (id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(BOOL)arg2;
- (id)_sortedUserGeneratedVibrationIdentifiers;
- (id)_sortedVibrationIdentifiers;
- (void)_startVibratingWithVibrationIdentifier:(id)arg1;
- (void)_stopVibrating;
- (id)_styleProvider;
- (id)_systemSectionHeaderView;
- (void)_updateEditButtonItem;
- (void)_updateEditButtonItemWithAnimation:(BOOL)arg1;
- (void)_updateSectionVisibilityFlagAtLocation:(BOOL*)arg1 toValue:(BOOL)arg2 sectionIndexGetter:(id /* block */)arg3;
- (void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2;
- (void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2;
- (id)_userGeneratedSectionHeaderView;
- (id)accountIdentifier;
- (int)alertType;
- (BOOL)allowsDeletingDefaultVibration;
- (void)applicationWillSuspend;
- (BOOL)canEnterEditingMode;
- (void)dealloc;
- (id)defaultVibrationIdentifier;
- (id)delegate;
- (id)initWithAlertType:(int)arg1;
- (id)initWithStyle:(int)arg1;
- (unsigned int)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)noneString;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)selectedVibrationIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAllowsDeletingDefaultVibration:(BOOL)arg1;
- (void)setDefaultVibrationIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNoneString:(id)arg1;
- (void)setSelectedVibrationIdentifier:(id)arg1;
- (void)setShowsDefault:(BOOL)arg1;
- (void)setShowsEditButtonInNavigationBar:(BOOL)arg1;
- (void)setShowsNone:(BOOL)arg1;
- (void)setShowsNothingSelected:(BOOL)arg1;
- (void)setShowsUserGenerated:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)showsDefault;
- (BOOL)showsEditButtonInNavigationBar;
- (BOOL)showsNone;
- (BOOL)showsNothingSelected;
- (BOOL)showsUserGenerated;
- (id)styleProvider;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2;
- (void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3;
- (void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
