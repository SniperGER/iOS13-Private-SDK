//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <JetEngine/_TtP9JetEngineP33_CFF127709A25BF7B633E1F54F1AA24B821JSNotifyObjectExports_-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9JetEngine14JSNotifyObject : NSObject <_TtP9JetEngineP33_CFF127709A25BF7B633E1F54F1AA24B821JSNotifyObjectExports_>
{
    MISSING_TYPE *observersByName;
}

// - (void).cxx_destruct;
- (void)post:(id)arg1;
- (void)unregister:(id)arg1:(id)arg2;
- (void)register:(id)arg1:(id)arg2;
- (id)init;

@end
