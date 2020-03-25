//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKColoringView-Protocol.h>

@class UIColor, _NTKColorManager;

@interface NTKColoringView : UIView <NTKColoringView>
{
    _NTKColorManager *_colorManager;
    UIColor *_overrideColor;
}

@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
// - (void).cxx_destruct;
@property(nonatomic) BOOL usesLegibility; // @dynamic usesLegibility;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
