//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLookThumbnailing/QLAsynchronousOperation.h>

@class QLThumbnailHostContext;
@protocol QLTExtensionThumbnailItem;

__attribute__((visibility("hidden")))
@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation
{
    QLThumbnailHostContext *_hostContext;
    id /* block */ _serviceErrorHandler;
    id /* block */ _completionHandler;
    id <QLTExtensionThumbnailItem> _item;
    double _minimumSize;
    double _scale;
    unsigned long long _badgeType;
    struct CGSize _size;
}

@property(nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) id <QLTExtensionThumbnailItem> item; // @synthesize item=_item;
@property(copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) id /* block */ serviceErrorHandler; // @synthesize serviceErrorHandler=_serviceErrorHandler;
@property(retain, nonatomic) QLThumbnailHostContext *hostContext; // @synthesize hostContext=_hostContext;
- (void)finish;
- (void)main;
- (id)initWithThumbnailHostContext:(id)arg1 item:(id)arg2 size:(struct CGSize)arg3 minimumSize:(double)arg4 scale:(double)arg5 badgeType:(unsigned long long)arg6 completionHandler:(id /* block */)arg7 serviceErrorHandler:(id /* block */)arg8;

@end
