//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseOperationMiddleware-Protocol.h>

@interface FCCKDatabaseLoggingMiddleware : NSObject <FCCKDatabaseOperationMiddleware>
{
    BOOL _allowNilDesiredKeys;
}

@property(nonatomic) BOOL allowNilDesiredKeys; // @synthesize allowNilDesiredKeys=_allowNilDesiredKeys;
- (void)_addLoggersToOperation:(id)arg1 database:(id)arg2;
- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (id)initAllowingNilDesiredKeys:(BOOL)arg1;
- (id)init;

@end
