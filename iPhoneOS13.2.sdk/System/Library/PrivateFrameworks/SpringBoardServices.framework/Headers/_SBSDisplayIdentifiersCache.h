//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface _SBSDisplayIdentifiersCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_displayIdentifiers;
    int _changedToken;
    id /* block */ _changedBlock;
}

+ (id)sharedInstance;
- (void)_queue_noteChanged;
- (void)registerChangedBlock:(id /* block */)arg1;
- (id)displayIdentifiers;
- (void)dealloc;
- (id)init;

@end
