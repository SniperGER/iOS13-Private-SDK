//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class _UISearchBarScopeContainerLayout;

__attribute__((visibility("hidden")))
@interface _UISearchBarScopeContainerView : UIView
{
    _UISearchBarScopeContainerLayout *_layout;
}

@property(retain, nonatomic) _UISearchBarScopeContainerLayout *layout; // @synthesize layout=_layout;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_isKnownUISearchBarComponentContainer;

@end
