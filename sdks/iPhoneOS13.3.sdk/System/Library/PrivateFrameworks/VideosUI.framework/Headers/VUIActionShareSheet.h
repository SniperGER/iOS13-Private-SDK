//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAction.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface VUIActionShareSheet : VUIAction
{
    NSString *_urlString;
    NSString *_title;
    NSString *_subtitle;
    NSString *_imageURLStr;
    UIView *_sourceView;
}

@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) NSString *imageURLStr; // @synthesize imageURLStr=_imageURLStr;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
// - (void).cxx_destruct;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithContextData:(id)arg1 viewElement:(id)arg2 sourceView:(id)arg3;

@end
