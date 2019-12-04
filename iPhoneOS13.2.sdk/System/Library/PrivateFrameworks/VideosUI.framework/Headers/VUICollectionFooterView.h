//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class IKViewElement, VUIButton;

__attribute__((visibility("hidden")))
@interface VUICollectionFooterView : UICollectionReusableView
{
    IKViewElement *_viewElement;
    IKViewElement *_buttonViewElement;
    VUIButton *_buttonView;
    struct UIEdgeInsets _padding;
}

+ (id)configureCollectionFooterViewWithElement:(id)arg1 existingView:(id)arg2;
@property(retain, nonatomic) VUIButton *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) IKViewElement *buttonViewElement; // @synthesize buttonViewElement=_buttonViewElement;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
