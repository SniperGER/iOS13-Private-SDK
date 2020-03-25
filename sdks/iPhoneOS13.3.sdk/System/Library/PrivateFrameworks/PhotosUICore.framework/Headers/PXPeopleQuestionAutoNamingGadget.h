//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PHPerson, PXGadgetSpec, PXPeopleScalableAvatarView, UIButton, UILabel;
@protocol PXGadgetDelegate;

@interface PXPeopleQuestionAutoNamingGadget : UIViewController <PXGadget>
{
    id <PXGadgetDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    NSUInteger _gadgetType;
    PHPerson *_person;
    PXPeopleScalableAvatarView *_keyFaceView;
    UILabel *_titleLabel;
    UIButton *_yesButton;
    UIButton *_noButton;
    UIButton *_undoButton;
    NSString *_possibleName;
}

@property(copy, nonatomic) NSString *possibleName; // @synthesize possibleName=_possibleName;
@property(retain, nonatomic) UIButton *undoButton; // @synthesize undoButton=_undoButton;
@property(retain, nonatomic) UIButton *noButton; // @synthesize noButton=_noButton;
@property(retain, nonatomic) UIButton *yesButton; // @synthesize yesButton=_yesButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PXPeopleScalableAvatarView *keyFaceView; // @synthesize keyFaceView=_keyFaceView;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) NSUInteger gadgetType; // @synthesize gadgetType=_gadgetType;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (NSObject )contentViewController;
@property(readonly, nonatomic) BOOL hasContentToDisplay;
- (void)undoButtonTapped:(id)arg1;
- (void)noButtonTapped:(id)arg1;
- (void)yesButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (id)initWithPerson:(id)arg1 possibleName:(id)arg2;

@end
