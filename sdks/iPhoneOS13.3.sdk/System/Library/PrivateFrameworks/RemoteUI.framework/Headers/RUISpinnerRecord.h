//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UINavigationItem;

@interface RUISpinnerRecord : NSObject
{
    BOOL _hidesBackButton;
    NSArray *_rightItems;
    NSArray *_leftItems;
    UINavigationItem *_navigationItem;
    NSString *_title;
    NSString *_spinningTitle;
}

@property(copy, nonatomic) NSString *spinningTitle; // @synthesize spinningTitle=_spinningTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
@property(retain, nonatomic) UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(copy, nonatomic) NSArray *leftItems; // @synthesize leftItems=_leftItems;
@property(copy, nonatomic) NSArray *rightItems; // @synthesize rightItems=_rightItems;
// - (void).cxx_destruct;

@end
