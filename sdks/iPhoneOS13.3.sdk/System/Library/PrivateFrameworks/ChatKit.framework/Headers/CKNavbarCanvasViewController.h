//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKDetailsContactsManagerDelegate-Protocol.h>
#import <ChatKit/CKNavigationBarCanvasViewDelegate-Protocol.h>

@class CKAvatarPickerViewController, CKCanvasBackButtonView, CKConversation, CKDetailsContactsManager, CKLabel, CKNavigationBarCanvasView, CNContactStore, NSString, UIButton, UINavigationController;
@protocol CKNavbarCanvasViewControllerDelegate;

@interface CKNavbarCanvasViewController : UIViewController <UIGestureRecognizerDelegate, CKDetailsContactsManagerDelegate, CKNavigationBarCanvasViewDelegate>
{
    BOOL _canShowBackButtonView;
    BOOL _shouldShowDoneButton;
    BOOL _isInEditingMode;
    BOOL _editing;
    id <CKNavbarCanvasViewControllerDelegate> _delegate;
    UIButton *_callButton;
    CKNavigationBarCanvasView *_canvasView;
    NSString *_navbarTitle;
    CKConversation *_conversation;
    CKAvatarPickerViewController *_avatarPickerViewController;
    CKLabel *_defaultLabel;
    CKCanvasBackButtonView *_backButtonView;
    UIButton *_detailsButton;
    UIButton *_clearAllButtonView;
    UIButton *_editCancelButtonView;
    UIButton *_doneButton;
    UINavigationController *_proxyNavigationController;
    long long _indicatorType;
    CNContactStore *_suggestionsEnabledContactStore;
    CKDetailsContactsManager *_contactsManager;
}

@property(retain, nonatomic) CKDetailsContactsManager *contactsManager; // @synthesize contactsManager=_contactsManager;
@property(retain, nonatomic) CNContactStore *suggestionsEnabledContactStore; // @synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore;
@property(nonatomic) long long indicatorType; // @synthesize indicatorType=_indicatorType;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) __weak UINavigationController *proxyNavigationController; // @synthesize proxyNavigationController=_proxyNavigationController;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *editCancelButtonView; // @synthesize editCancelButtonView=_editCancelButtonView;
@property(retain, nonatomic) UIButton *clearAllButtonView; // @synthesize clearAllButtonView=_clearAllButtonView;
@property(retain, nonatomic) UIButton *detailsButton; // @synthesize detailsButton=_detailsButton;
@property(retain, nonatomic) CKCanvasBackButtonView *backButtonView; // @synthesize backButtonView=_backButtonView;
@property(retain, nonatomic) CKLabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(retain, nonatomic) CKAvatarPickerViewController *avatarPickerViewController; // @synthesize avatarPickerViewController=_avatarPickerViewController;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) NSString *navbarTitle; // @synthesize navbarTitle=_navbarTitle;
@property(nonatomic) BOOL isInEditingMode; // @synthesize isInEditingMode=_isInEditingMode;
@property(nonatomic) BOOL shouldShowDoneButton; // @synthesize shouldShowDoneButton=_shouldShowDoneButton;
@property(nonatomic) BOOL canShowBackButtonView; // @synthesize canShowBackButtonView=_canShowBackButtonView;
@property(retain, nonatomic) CKNavigationBarCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) UIButton *callButton; // @synthesize callButton=_callButton;
@property(nonatomic) __weak id <CKNavbarCanvasViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1;
- (void)contactsManager:(id)arg1 didRequestCallTypeForEntity:(id)arg2 addresses:(id)arg3 abLabels:(id)arg4 faceTimeAudioEnabled:(BOOL)arg5;
- (void)contactsManagerViewModelsDidChange:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)_contactPhotosEnabledChangedNotification:(id)arg1;
- (void)setUnreadCountTitleColor;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_updateUnreadCountForBackbuttonView:(long long)arg1;
- (long long)_unreadCount;
- (void)_showContactCardForEntity:(id)arg1;
- (void)_handleTranscriptScroll:(id)arg1;
- (void)dismissModal;
- (void)showMapkitBusinessData;
- (void)_configureForDefaultMode;
- (void)_configureForEditMode;
- (id)_titleItemViewForTraitCollection:(id)arg1;
- (id)_secondaryRightItemViewForTraitCollection:(id)arg1;
- (id)_rightItemViewForTraitCollection:(id)arg1;
- (id)_leftItemViewForTraitCollection:(id)arg1;
- (void)updateContentsForConversation:(id)arg1;
- (void)_initializeForTraitCollection:(id)arg1;
- (void)updateTitle:(id)arg1 animated:(BOOL)arg2;
- (void)configureForEditing:(BOOL)arg1;
- (BOOL)isFaceTimeVideoSupported;
- (BOOL)isMultiwayFaceTimeAudioSupported;
- (void)_notifyDelegateThatViewControllerWantsResize;
- (void)_handleAddressBookChange:(id)arg1;
- (void)_updateMultiwayButtonStateWithConversation:(id)arg1;
- (void)multiwayStateChanged:(id)arg1;
- (void)accessibilitySizeCategoryDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)handleCloseNavBarAnimationCompleteNotification:(id)arg1;
- (BOOL)_isFaceTimeSupportedForIndividualCalls;
- (void)_userDidTapNavigationBar:(id)arg1;
- (BOOL)_isMuliwayAvaialble;
- (void)toggleExpansionState;
- (void)collapse;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)loadView;
- (id)navigationItem;
- (BOOL)_canShowAvatarView;
- (double)_preferredHeightForTraitCollection:(id)arg1;
- (id)_windowTraitCollection;
- (void)startAudioCommunicationUsingPreferredRouteIfAvailable:(BOOL)arg1;
- (id)navBarTitleFromConversation:(id)arg1;
- (void)dealloc;
- (id)initWithConversation:(id)arg1 navigationController:(id)arg2;
- (id)initWithConversation:(id)arg1;

@end
