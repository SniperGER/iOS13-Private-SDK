//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CTCellularPlan, CTUserLabel, NSNumber, NSString, NSUUID;

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_iccid;
    BOOL _shouldDisplayType;
    BOOL _shouldAutoSelectWhenInRange;
    BOOL _isSimStateValid;
    BOOL _shouldDisplay;
    BOOL _shouldAppearDisabled;
    BOOL _isActiveDataPlan;
    BOOL _isDefaultVoice;
    BOOL _isSelectable;
    NSString *_label;
    CTCellularPlan *_plan;
    long long _type;
    long long _lockState;
    NSString *_uuid;
    NSString *_phoneNumber;
    CTUserLabel *_userLabel;
    NSNumber *_isSelectedOverride;
    NSUUID *_companionSlotUuid;
    NSString *_companionSimLabelId;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *companionSimLabelId; // @synthesize companionSimLabelId=_companionSimLabelId;
@property(copy, nonatomic) NSUUID *companionSlotUuid; // @synthesize companionSlotUuid=_companionSlotUuid;
@property(nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property(retain, nonatomic) NSNumber *isSelectedOverride; // @synthesize isSelectedOverride=_isSelectedOverride;
@property(retain, nonatomic) CTUserLabel *userLabel; // @synthesize userLabel=_userLabel;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) BOOL isDefaultVoice; // @synthesize isDefaultVoice=_isDefaultVoice;
@property(nonatomic) BOOL isActiveDataPlan; // @synthesize isActiveDataPlan=_isActiveDataPlan;
@property(nonatomic) BOOL shouldAppearDisabled; // @synthesize shouldAppearDisabled=_shouldAppearDisabled;
@property(readonly, nonatomic) BOOL shouldDisplay; // @synthesize shouldDisplay=_shouldDisplay;
@property(nonatomic) BOOL isSimStateValid; // @synthesize isSimStateValid=_isSimStateValid;
@property(nonatomic) BOOL shouldAutoSelectWhenInRange; // @synthesize shouldAutoSelectWhenInRange=_shouldAutoSelectWhenInRange;
@property(nonatomic) BOOL shouldDisplayType; // @synthesize shouldDisplayType=_shouldDisplayType;
@property(nonatomic) long long lockState; // @synthesize lockState=_lockState;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) CTCellularPlan *plan; // @synthesize plan=_plan;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (id)description;
- (id)typeAsString:(long long)arg1;
@property(readonly, nonatomic) NSString *carrierName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *iccid;
@property(readonly, nonatomic) BOOL isInstalling;
@property(readonly, nonatomic) BOOL isSelected;
@property(readonly, nonatomic) BOOL isBackedByCellularPlan;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithIccid:(id)arg1 uuid:(id)arg2 name:(id)arg3 phoneNumber:(id)arg4 label:(id)arg5;
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 type:(long long)arg3 phoneNumber:(id)arg4 label:(id)arg5;
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2;
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 iccid:(id)arg3 name:(id)arg4 type:(long long)arg5 phoneNumber:(id)arg6 label:(id)arg7;

@end
