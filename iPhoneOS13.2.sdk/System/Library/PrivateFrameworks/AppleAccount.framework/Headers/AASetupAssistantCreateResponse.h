//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString;

@interface AASetupAssistantCreateResponse : AAResponse
{
    NSString *_HSAAction;
    NSString *_HSAData;
}

@property(readonly, nonatomic) NSString *HSAData; // @synthesize HSAData=_HSAData;
@property(readonly, nonatomic) NSString *HSAAction; // @synthesize HSAAction=_HSAAction;
@property(readonly, nonatomic) NSString *appleID;
@property(readonly, nonatomic) NSString *personID;
@property(readonly, nonatomic) NSString *statusMessage;
@property(readonly, nonatomic) NSNumber *status;

@end
