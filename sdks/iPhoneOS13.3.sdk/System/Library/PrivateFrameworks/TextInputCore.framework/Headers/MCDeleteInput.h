//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/MCKeyboardInput.h>

@class NSString;

@interface MCDeleteInput : MCKeyboardInput
{
    BOOL _deleteBySyllable;
    BOOL _shouldDeleteAcceptCandidateInput;
    NSString *_deletedText;
}

@property(readonly, nonatomic) BOOL shouldDeleteAcceptCandidateInput; // @synthesize shouldDeleteAcceptCandidateInput=_shouldDeleteAcceptCandidateInput;
@property(readonly, nonatomic) BOOL deleteBySyllable; // @synthesize deleteBySyllable=_deleteBySyllable;
@property(readonly, nonatomic) NSString *deletedText; // @synthesize deletedText=_deletedText;
// - (void).cxx_destruct;
- (BOOL)canComposeNew:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDeletedText:(id)arg1 deleteBySyllable:(BOOL)arg2 shouldDeleteAcceptCandidateInput:(BOOL)arg3;
- (id)init;

@end
