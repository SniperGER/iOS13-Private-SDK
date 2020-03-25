//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class NSString, SKUIRedeemCameraLandingView, SKUIRedeemTextField, UIButton, UIImage, UIScrollView;
@protocol SKUIRedeemCameraViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIPadRedeemCameraView : UIView <UITextFieldDelegate>
{
    id <SKUIRedeemCameraViewDelegate> _delegate;
    SKUIRedeemTextField *_inputAccessoryTextField;
    SKUIRedeemCameraLandingView *_landingView;
    UIView *_redeemerView;
    UIScrollView *_scrollView;
    UIButton *_termsButton;
    SKUIRedeemTextField *_textField;
}

@property(nonatomic) __weak id <SKUIRedeemCameraViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2;
- (void)_hideKeyboard;
- (double)_adjustVerticalSpacingForHeight:(double)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)_landingButtonAction:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)keyboardDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)start;
@property(nonatomic) BOOL enabled;
- (void)showKeyboard;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *text;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;

@end
