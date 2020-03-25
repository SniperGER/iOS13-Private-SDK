//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIFont;

@interface SUTableTextFooterView : UIView
{
    UIFont *_font;
    UIColor *_shadowColor;
    long long _textAlignment;
    UIColor *_textColor;
    NSArray *_textLines;
}

@property(retain, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)sizeToFit;
- (void)drawRect:(CGRect)arg1;
- (void)dealloc;

@end
