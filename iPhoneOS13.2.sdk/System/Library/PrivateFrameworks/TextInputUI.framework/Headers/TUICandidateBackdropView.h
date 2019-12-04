//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIKBBackdropView;
@protocol TUICandidateViewStyle;

@interface TUICandidateBackdropView : UIView
{
    id <TUICandidateViewStyle> _style;
    UIKBBackdropView *_backdropView;
}

@property(retain, nonatomic) UIKBBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
- (long long)backdropViewStyle;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end
