//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIMediaCollection.h>

@class VUITVSeasonManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandSeasonMediaCollection : VUIMediaCollection
{
    VUITVSeasonManagedObject *_seasonManagedObject;
}

@property(retain, nonatomic) VUITVSeasonManagedObject *seasonManagedObject; // @synthesize seasonManagedObject=_seasonManagedObject;
- (id)title;
- (id)seasonNumber;
- (id)showIdentifier;
- (id)isLocal;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)canonicalID;
- (id)initWithMediaLibrary:(id)arg1 seasonManagedObject:(id)arg2 requestedProperties:(id)arg3;

@end
