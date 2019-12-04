//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <NanoTimeKitCompanion/NTKAVListing-Protocol.h>

@class CLKDevice, CLKVideo, NSArray, NSString, UIColor, UIImage;

@interface NTKVideoPlayerListing : NSObject <NTKAVListing, NSCopying>
{
    CLKDevice *_device;
    CLKVideo *_video;
    NSString *_filename;
    UIImage *_image;
    UIColor *_color;
    NSArray *_attributes;
    unsigned long long _endBehavior;
}

+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2 andColor:(id)arg3;
+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2;
@property(nonatomic) unsigned long long endBehavior; // @synthesize endBehavior=_endBehavior;
@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)discardAssets;
- (_Bool)snapshotDiffers:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) CLKVideo *video;
@property(readonly, nonatomic) UIImage *image;
- (id)initForDevice:(id)arg1 withFilename:(id)arg2;

// Remaining properties
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
