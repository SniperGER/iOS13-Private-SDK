//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKComponentController.h>

#import <WorkflowUI/WFModuleSummaryEditorDelegate-Protocol.h>

@class WFModuleSummaryEditor;

@interface WFModuleSummaryBasedParameterComponentController : CKComponentController <WFModuleSummaryEditorDelegate>
{
    WFModuleSummaryEditor *_currentEditor;
}

@property(retain, nonatomic) WFModuleSummaryEditor *currentEditor; // @synthesize currentEditor=_currentEditor;
// - (void).cxx_destruct;
- (void)summaryEditorDidRequestTextEntry:(id)arg1;
- (void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(BOOL)arg2 withTextAttachmentToEdit:(id)arg3;
- (void)summaryEditor:(id)arg1 willUpdateVariable:(id)arg2;
- (void)summaryEditor:(id)arg1 didStageParameterState:(id)arg2;
- (void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2;
- (void)buttonTapped:(id)arg1;
- (void)parameterLayoutTapped:(id)arg1;

@end
