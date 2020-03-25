//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AvatarUI/AVTAvatarActionsViewControllerDelegate-Protocol.h>
#import <AvatarUI/AVTAvatarDisplayingControllerDelegate-Protocol.h>
#import <AvatarUI/AVTAvatarEditorViewControllerDelegate-Protocol.h>
#import <AvatarUI/AVTAvatarRecordDataSourceObserver-Protocol.h>
#import <AvatarUI/AVTDisplayingCarouselController-Protocol.h>
#import <AvatarUI/AVTRecordingCarouselController-Protocol.h>

@class AVTAvatarRecordDataSource, AVTMultiAvatarController, AVTRecordView, AVTSingleAvatarController, AVTUIEnvironment, AVTView, AVTViewCarouselLayout, AVTViewSession, AVTViewSessionProvider, UIView;
@protocol AVTAvatarDisplayingController, AVTAvatarRecord, AVTDisplayingCarouselControllerDelegate, AVTPresenterDelegate, AVTRecordingCarouselControllerDelegate, AVTUILogger;

@interface AVTCarouselController : UIViewController <AVTAvatarActionsViewControllerDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarDisplayingControllerDelegate, AVTAvatarRecordDataSourceObserver, AVTRecordingCarouselController, AVTDisplayingCarouselController>
{
    BOOL _singleAvatarMode;
    id <AVTPresenterDelegate> presenterDelegate;
    id <AVTDisplayingCarouselControllerDelegate> displayingDelegate;
    id <AVTRecordingCarouselControllerDelegate> recordingDelegate;
    double _decelerationRate;
    AVTAvatarRecordDataSource *_dataSource;
    id <AVTUILogger> _logger;
    AVTUIEnvironment *_environment;
    id <AVTAvatarRecord> _currentAvatarRecord;
    UIView *_avtViewContainer;
    AVTViewSessionProvider *_avtViewSessionProvider;
    AVTViewSession *_avtViewSession;
    AVTMultiAvatarController *_multiAvatarController;
    AVTSingleAvatarController *_singleAvatarController;
    id <AVTAvatarDisplayingController> _avatarDisplayingController;
    AVTViewCarouselLayout *_avtViewLayout;
    long long _mode;
}

+ (id)recordingCarouselForRecordDataSource:(id)arg1;
+ (id)displayingCarouselForRecordDataSource:(id)arg1;
+ (id)sessionProviderForMode:(long long)arg1 environment:(id)arg2;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) AVTViewCarouselLayout *avtViewLayout; // @synthesize avtViewLayout=_avtViewLayout;
@property(retain, nonatomic) id <AVTAvatarDisplayingController> avatarDisplayingController; // @synthesize avatarDisplayingController=_avatarDisplayingController;
@property(retain, nonatomic) AVTSingleAvatarController *singleAvatarController; // @synthesize singleAvatarController=_singleAvatarController;
@property(retain, nonatomic) AVTMultiAvatarController *multiAvatarController; // @synthesize multiAvatarController=_multiAvatarController;
@property(retain, nonatomic) AVTViewSession *avtViewSession; // @synthesize avtViewSession=_avtViewSession;
@property(readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // @synthesize avtViewSessionProvider=_avtViewSessionProvider;
@property(retain, nonatomic) UIView *avtViewContainer; // @synthesize avtViewContainer=_avtViewContainer;
@property(retain, nonatomic) id <AVTAvatarRecord> currentAvatarRecord; // @synthesize currentAvatarRecord=_currentAvatarRecord;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTAvatarRecordDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) BOOL singleAvatarMode; // @synthesize singleAvatarMode=_singleAvatarMode;
@property(nonatomic) __weak id <AVTRecordingCarouselControllerDelegate> recordingDelegate; // @synthesize recordingDelegate;
@property(nonatomic) __weak id <AVTDisplayingCarouselControllerDelegate> displayingDelegate; // @synthesize displayingDelegate;
@property(nonatomic) __weak id <AVTPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate;
// - (void).cxx_destruct;
- (id)snapshotProviderFocusedOnRecordWithIdentifier:(id)arg1 size:(CGSize)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarActionsViewControllerDidFinish:(id)arg1;
- (id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)significantRecordChangeInDataSource:(id)arg1;
- (void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(NSUInteger)arg3;
@property(readonly, nonatomic) AVTView *focusedDisplayView;
@property(readonly, nonatomic) AVTRecordView *focusedRecordingView;
@property(readonly, nonatomic) id <AVTAvatarRecord> focusedRecord;
- (void)notifyDelegateDidUpdateWithRecord:(id)arg1;
- (void)notifyDelegateNearnessFactorDidChange:(double)arg1 towardRecord:(id)arg2;
- (void)notifyDelegateWillEndFocusOnRecord:(id)arg1 avtView:(id)arg2;
- (void)notifyDelegateDidFocusRecord:(id)arg1 avtView:(id)arg2;
- (void)displayingController:(id)arg1 didMoveTowardRecord:(id)arg2 withFactor:(double)arg3;
- (void)displayingControllerWantsToPresentEditorForCreation:(id)arg1;
- (void)displayingController:(id)arg1 didChangeCurrentRecord:(id)arg2;
- (void)didEndFocus:(id)arg1;
- (void)willEndFocus:(id)arg1;
- (void)didBeginFocus:(id)arg1;
- (void)willBeginFocus:(id)arg1;
- (void)wrapAndPresentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)presentActionsForAvatar:(id)arg1;
- (void)presentEditorForCreatingAvatar:(id)arg1;
- (void)showSingleAvatarControllerAnimated:(BOOL)arg1;
- (void)showMultiAvatarControllerAnimated:(BOOL)arg1;
- (void)setAllowsCreate:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL allowsCreate;
- (void)displayAvatarRecord:(id)arg1 animated:(BOOL)arg2;
- (void)displayAvatarRecordWithIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)setSingleAvatarMode:(BOOL)arg1 fillContainer:(BOOL)arg2 animated:(BOOL)arg3;
- (void)reloadDataCenteringToAvatarRecord:(id)arg1;
- (void)reloadData;
- (void)setupAVTView:(id)arg1;
- (void)beginAVTViewSession;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
@property(nonatomic) double decelerationRate; // @synthesize decelerationRate=_decelerationRate;
- (id)initWithMode:(long long)arg1 sessionProvider:(id)arg2 dataSource:(id)arg3 environment:(id)arg4;
- (id)initWithMode:(long long)arg1 dataSource:(id)arg2;

@end
