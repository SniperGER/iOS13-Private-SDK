//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIActivityItemImageRep : NSObject
{
    id _asset;
    id /* block */ _thumbnailProvider;
    id /* block */ _dataProvider;
}

+ (id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(id /* block */)arg2 dataProvider:(id /* block */)arg3;
@property(copy, nonatomic) id /* block */ dataProvider; // @synthesize dataProvider=_dataProvider;
@property(copy, nonatomic) id /* block */ thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
@property(retain, nonatomic) id asset; // @synthesize asset=_asset;
- (id)data;
- (id)thumbnail;

@end
