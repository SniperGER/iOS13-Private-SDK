//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

#import <TemplateKit/TLKTextAreaViewTesting-Protocol.h>

@class NSMutableArray, NUIContainerStackView, TLKRichTextField, TLKTextButton, TLKTitleContainerView;
@protocol TLKTextAreaViewDelegate;

@interface TLKTextAreaView : TLKStackView <TLKTextAreaViewTesting>
{
    BOOL _disableAllObservers;
    id <TLKTextAreaViewDelegate> _buttonDelegate;
    TLKTitleContainerView *_titleContainer;
    NSMutableArray *_detailsFields;
    TLKRichTextField *_footnoteLabel;
    TLKTextButton *_footnoteButton;
    NUIContainerStackView *_footnoteContainer;
}

+ (id)footNoteLabelFont;
@property(nonatomic) BOOL disableAllObservers; // @synthesize disableAllObservers=_disableAllObservers;
@property(retain, nonatomic) NUIContainerStackView *footnoteContainer; // @synthesize footnoteContainer=_footnoteContainer;
@property(retain, nonatomic) TLKTextButton *footnoteButton; // @synthesize footnoteButton=_footnoteButton;
@property(retain, nonatomic) TLKRichTextField *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) NSMutableArray *detailsFields; // @synthesize detailsFields=_detailsFields;
@property(retain, nonatomic) TLKTitleContainerView *titleContainer; // @synthesize titleContainer=_titleContainer;
@property __weak id <TLKTextAreaViewDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
// - (void).cxx_destruct;
- (id)footnoteLabelString;
- (id)secondaryTitleLabelString;
- (id)titleLabelString;
- (id)textAreaLabelStrings;
- (id)detailsViews;
- (id)titleView;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (BOOL)noFootNote;
- (BOOL)noRichTextFields;
- (void)updateFootnote:(id)arg1 buttonText:(id)arg2;
- (void)internalTextFieldsInBatchUpdate:(BOOL)arg1;
- (void)performBatchUpdates:(id /* CDUnknownBlockType */)arg1;
- (void)updateDetails:(id)arg1;
- (void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(BOOL)arg4;
- (id)init;

@end
