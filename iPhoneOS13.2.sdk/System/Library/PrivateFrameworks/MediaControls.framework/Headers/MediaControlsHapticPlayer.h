//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVHapticPlayer;

__attribute__((visibility("hidden")))
@interface MediaControlsHapticPlayer : NSObject
{
    AVHapticPlayer *_player;
}

@property(retain, nonatomic) AVHapticPlayer *player; // @synthesize player=_player;
- (void)checkError:(id)arg1;
- (void)expandedButtonChanged;
- (void)dealloc;
- (void)tearDown;
- (void)prepare;

@end
