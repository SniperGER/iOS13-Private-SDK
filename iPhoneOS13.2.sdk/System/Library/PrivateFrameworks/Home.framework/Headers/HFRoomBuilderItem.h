//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HFRoomBuilder;

@interface HFRoomBuilderItem : HFItem
{
    HFRoomBuilder *_roomBuilder;
}

@property(readonly, nonatomic) HFRoomBuilder *roomBuilder; // @synthesize roomBuilder=_roomBuilder;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithRoomBuilder:(id)arg1;

@end
