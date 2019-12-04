//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFParameterComponent.h>

@class CKComponent, NSNumber, WFParameter, WFVariableChooserParameterLayoutComponent;

@interface WFSwitchParameterComponent : WFParameterComponent
{
    WFParameter *_parameter;
    id /* block */ _updateBlock;
    WFVariableChooserParameterLayoutComponent *_layoutComponent;
    CKComponent *_switchComponent;
    NSNumber *_value;
}

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(id /* block */)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
@property(readonly, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(readonly, nonatomic) CKComponent *switchComponent; // @synthesize switchComponent=_switchComponent;
@property(readonly, nonatomic) WFVariableChooserParameterLayoutComponent *layoutComponent; // @synthesize layoutComponent=_layoutComponent;
- (id /* block */)updateBlock;
- (id)parameter;
- (void)presentTokenChooser:(id)arg1;
- (void)switchValueChanged:(id)arg1;

@end
