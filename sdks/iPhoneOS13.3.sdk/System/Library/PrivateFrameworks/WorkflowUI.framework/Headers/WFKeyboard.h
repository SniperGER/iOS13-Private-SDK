//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFKeyboard : NSObject
{
    BOOL _visible;
    long long _animationCurve;
    double _animationDuration;
    CGRect _keyboardFrame;
}

+ (void)beginObservingKeyboardNotifications;
+ (id)sharedKeyboard;
@property(readonly, nonatomic) CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) long long animationCurve; // @synthesize animationCurve=_animationCurve;
@property(readonly, nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
- (CGRect)keyboardFrameInView:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillChangeVisible:(id)arg1;
- (void)dealloc;
- (id)init;

@end
