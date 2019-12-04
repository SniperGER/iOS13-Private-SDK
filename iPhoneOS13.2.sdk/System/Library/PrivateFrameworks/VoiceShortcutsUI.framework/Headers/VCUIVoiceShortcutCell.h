//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView, VCVoiceShortcut;

@interface VCUIVoiceShortcutCell : UITableViewCell
{
    VCVoiceShortcut *_voiceShortcut;
    UIView *_cardView;
}

@property(nonatomic) __weak UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) VCVoiceShortcut *voiceShortcut; // @synthesize voiceShortcut=_voiceShortcut;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCardView;
- (void)configureWithVoiceShortcut:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
