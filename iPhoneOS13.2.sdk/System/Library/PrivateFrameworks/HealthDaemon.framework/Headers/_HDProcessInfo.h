//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HDProcessInfo : NSObject
{
    unsigned int _applicationState;
    int _pid;
    NSString *_bundleIdentifier;
}

+ (id)processInfoWithDictionary:(id)arg1;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;

@end
