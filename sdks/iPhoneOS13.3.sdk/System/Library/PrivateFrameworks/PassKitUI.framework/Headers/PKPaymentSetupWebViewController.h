//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSURL, UIWebView;

@interface PKPaymentSetupWebViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSURL *_URL;
    long long _context;
}

@property(nonatomic) long long context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)_webViewDidLoad:(BOOL)arg1 withError:(id)arg2;
- (void)handleDone:(id)arg1;
- (id)webView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 context:(long long)arg2;

@end
