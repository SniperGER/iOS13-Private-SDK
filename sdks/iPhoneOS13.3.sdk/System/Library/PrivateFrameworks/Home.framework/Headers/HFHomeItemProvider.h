//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHomeManager, NSMutableSet;

@interface HFHomeItemProvider : HFItemProvider
{
    id /* CDUnknownBlockType */ _filter;
    HMHomeManager *_homeManager;
    NSMutableSet *_homeItems;
}

@property(retain, nonatomic) NSMutableSet *homeItems; // @synthesize homeItems=_homeItems;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(copy, nonatomic) id /* CDUnknownBlockType */ filter; // @synthesize filter=_filter;
// - (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)initWithHomeManager:(id)arg1;

@end
