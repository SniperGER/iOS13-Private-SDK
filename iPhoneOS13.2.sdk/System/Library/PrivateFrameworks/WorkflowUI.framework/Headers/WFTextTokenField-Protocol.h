//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFTextField-Protocol.h>

@class WFVariableEditingContext, WFVariableString;

@protocol WFTextTokenField <WFTextField>
@property(nonatomic) struct _NSRange selectedRange;
@property(copy, nonatomic) WFVariableString *variableString;
- (void)beginEditingWithContext:(WFVariableEditingContext *)arg1;
- (void)defaultPaste:(id)arg1;
- (void)defaultCopy:(id)arg1;
- (void)defaultCut:(id)arg1;
@end
