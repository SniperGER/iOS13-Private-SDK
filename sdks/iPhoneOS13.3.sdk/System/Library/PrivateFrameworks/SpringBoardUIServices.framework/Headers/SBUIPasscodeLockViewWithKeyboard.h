//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>

#import <SpringBoardUIServices/SBUIPasscodeEntryFieldDelegate-Protocol.h>

@class SBPasscodeKeyboardAnimator, SBUIAlphanumericPasscodeEntryField, UIControl, UILabel, UIView;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate>
{
    SBPasscodeKeyboardAnimator *_keyboardAnimator;
    SBUIAlphanumericPasscodeEntryField *_alphaEntryField;
    UIView *_statusFieldBackground;
    UIControl *_emergencyCallButton;
    BOOL _usesLightStyle;
    BOOL _isResigningResponderStatus;
    BOOL _keyboardVisible;
    double _keyboardHeightOffset;
    BOOL _keyboardTracksLockView;
    UIView *_keyboardTrackingView;
    UILabel *_statusField;
    UILabel *_statusSubtitleView;
}

@property(retain, nonatomic) UILabel *statusSubtitleView; // @synthesize statusSubtitleView=_statusSubtitleView;
@property(retain, nonatomic) UILabel *statusField; // @synthesize statusField=_statusField;
// - (void).cxx_destruct;
- (void)_keyboardDidRequestDismissalNotification:(id)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_updateKeyboardHeightOffsetForKeyboardNotification:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateFont;
- (void)_layoutStatusView;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;
- (double)_largeTextEmergencyButtonMaxWidth;
- (double)_statusTitleWidth;
- (double)_statusFieldHeightWithWidth:(double)arg1;
- (double)_keyboardToEntryFieldOffset;
- (CGRect)_keyboardFrameForInterfaceOrientation:(long long)arg1;
- (void)_layoutForMinimizationState:(BOOL)arg1;
- (void)_toggleForStatusField;
- (void)_toggleForEmergencyCall;
- (void)_acceptOrCancelReturnKeyPress;
- (id)_newStatusSubtitleView;
- (id)_newStatusField;
- (id)_alphanumericPasscodeEntryField;
- (id)_statusSubtitleView;
- (id)_statusTitleView;
- (BOOL)passcodeEntryFieldShouldShowSystemKeyboard:(id)arg1;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (BOOL)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;
- (void)_notifyDelegatePasscodeEntered;
- (void)_hardwareReturnKeyPressed:(id)arg1;
- (void)resignActiveWithAnimationSettings:(id)arg1;
- (void)becomeActiveWithAnimationSettings:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (void)_setKeyboardTracksLockView:(BOOL)arg1;
- (id)_viewForKeyboardTracking;
- (void)updateForTransitionToPasscodeView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)didEndTransitionToState:(long long)arg1;
- (void)beginTransitionToState:(long long)arg1;
- (void)setShowsStatusField:(BOOL)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (id)passcode;
- (void)_luminanceBoostDidChange;
- (void)dealloc;
- (id)initWithLightStyle:(BOOL)arg1;

@end
