//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol HFIconDescriptor;

@interface HFServiceIconSet : NSObject
{
    NSSet *_allIcons;
    id <HFIconDescriptor> _defaultIcon;
}

+ (id)setWithDefaultIcon:(id)arg1 alternateIcons:(id)arg2;
+ (id)setWithImageIdentifier:(id)arg1;
+ (id)setWithDefaultIcon:(id)arg1;
+ (id)placeholderIconSet;
@property(readonly, nonatomic) id <HFIconDescriptor> defaultIcon; // @synthesize defaultIcon=_defaultIcon;
@property(readonly, nonatomic) NSSet *allIcons; // @synthesize allIcons=_allIcons;

@end
