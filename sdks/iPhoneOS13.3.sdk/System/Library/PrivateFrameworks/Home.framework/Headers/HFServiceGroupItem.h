//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFActionBuilderFactory-Protocol.h>
#import <Home/HFGroupableItemProtocol-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMHome, HMServiceGroup, NSSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFServiceGroupItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol>
{
    id <HFCharacteristicValueSource> _valueSource;
    HMServiceGroup *_serviceGroup;
}

+ (id)_combinedWriteErrorForError:(id)arg1 serviceGroupTitle:(id)arg2;
+ (BOOL)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2;
+ (BOOL)_isControlItem:(id)arg1 similarToControlItem:(id)arg2;
@property(readonly, nonatomic) HMServiceGroup *serviceGroup; // @synthesize serviceGroup=_serviceGroup;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
// - (void).cxx_destruct;
- (id)namingComponentForHomeKitObject;
- (id)_sortDescriptorsForServiceItems;
- (id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(id /* CDUnknownBlockType */)arg2;
- (id)_mergedIconDescriptorForServiceItems:(id)arg1;
- (long long)_highestIntegerValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (double)_averageNumericalValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)accessories;
@property(readonly, nonatomic) NSSet *services;
@property(readonly, nonatomic) HMHome *home;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (BOOL)actionsMayRequireDeviceUnlock;
- (BOOL)containsActions;
- (id)controlPanelItems;
- (id)allControlItems;
- (id)incrementalStateControlItem;
- (id)primaryStateControlItem;
- (id)_aggregatedValueSource;
- (id)_buildControlItemsForServiceItems:(id)arg1;
- (id)_buildServiceItems;
@property(readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property(readonly, nonatomic) NSUInteger numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) BOOL isItemGroup;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *description;
- (id)copyWithValueSource:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithValueSource:(id)arg1 serviceGroup:(id)arg2;

@end
