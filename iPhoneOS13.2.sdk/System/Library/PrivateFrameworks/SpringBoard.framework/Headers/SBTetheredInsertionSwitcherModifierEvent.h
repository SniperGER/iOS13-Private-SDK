//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSUUID;

@interface SBTetheredInsertionSwitcherModifierEvent : SBSwitcherModifierEvent
{
    NSUUID *_tetheredInsertionID;
    unsigned long long _phase;
}

@property(readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) NSUUID *tetheredInsertionID; // @synthesize tetheredInsertionID=_tetheredInsertionID;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)type;
- (id)initWithTetheredInsertionID:(id)arg1 phase:(unsigned long long)arg2;

@end
