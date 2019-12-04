//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSAttributedString, UITextView;

__attribute__((visibility("hidden")))
@interface SKUIPinnedFooterView : UITableViewHeaderFooterView
{
    NSAttributedString *_attributedText;
    double _horizontalPadding;
    UITextView *_textView;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)_initializeTextView;
- (void)_configureTextViewTextStyling;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
