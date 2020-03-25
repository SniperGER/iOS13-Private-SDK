//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFPasscodeInputView.h>

#import <SetupAssistantUI/PSPasscodeFieldDelegate-Protocol.h>

@class PSPasscodeField;

@interface BFFSimplePasscodeInputView : BFFPasscodeInputView <PSPasscodeFieldDelegate>
{
    BOOL _limitCharactersToNumbers;
    PSPasscodeField *_passcodeField;
}

@property(retain, nonatomic) PSPasscodeField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property(nonatomic) BOOL limitCharactersToNumbers; // @synthesize limitCharactersToNumbers=_limitCharactersToNumbers;
// - (void).cxx_destruct;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (id)passcodeField:(id)arg1 shouldInsertText:(id)arg2;
- (id)passcode;
- (void)setPasscode:(id)arg1;
- (void)layoutSubviews;
- (id)passcodeDisplayView;
- (id)initWithFrame:(CGRect)arg1 numberOfEntryFields:(NSUInteger)arg2;

@end
