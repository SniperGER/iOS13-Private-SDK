//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SOAuthorizationCore;
@protocol SOAuthorizationCoreDelegate;

__attribute__((visibility("hidden")))
@interface SOAuthorizationPoolItem : NSObject
{
    SOAuthorizationCore *_authorization;
    id <SOAuthorizationCoreDelegate> _delegate;
}

@property(readonly, nonatomic) id <SOAuthorizationCoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SOAuthorizationCore *authorization; // @synthesize authorization=_authorization;
- (id)initWithAuthorization:(id)arg1 delegate:(id)arg2;

@end
