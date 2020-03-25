//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/ISChangeObserver-Protocol.h>
#import <PhotosUICore/PXTrimToolPlayerWrapper-Protocol.h>

@class ISVideoPlayerUIView, ISWrappedAVPlayer, UIView;
@protocol PXLivePhotoView, PXTrimToolPlayerObserver;

@interface PXTrimToolPlayerWrapperLivePhotoView : NSObject <ISChangeObserver, PXTrimToolPlayerWrapper>
{
    CDStruct_42e984b2 _delegateFlags;
    BOOL _needsPlayerUpdate;
    id <PXTrimToolPlayerObserver> _playerObserver;
    UIView *_loupePlayerView;
    ISVideoPlayerUIView *_videoPlayerView;
    ISWrappedAVPlayer *_wrappedAVPlayer;
    id <PXLivePhotoView> _livePhotoView;
    id _periodicTimeObserver;
    CDStruct_1b6d18a9 _periodicTimeObservationInterval;
}

@property(retain, nonatomic) id periodicTimeObserver; // @synthesize periodicTimeObserver=_periodicTimeObserver;
@property(nonatomic) CDStruct_1b6d18a9 periodicTimeObservationInterval; // @synthesize periodicTimeObservationInterval=_periodicTimeObservationInterval;
@property(nonatomic) BOOL needsPlayerUpdate; // @synthesize needsPlayerUpdate=_needsPlayerUpdate;
@property(readonly, nonatomic) id <PXLivePhotoView> livePhotoView; // @synthesize livePhotoView=_livePhotoView;
@property(retain, nonatomic) ISWrappedAVPlayer *wrappedAVPlayer; // @synthesize wrappedAVPlayer=_wrappedAVPlayer;
@property(retain, nonatomic) ISVideoPlayerUIView *_videoPlayerView; // @synthesize _videoPlayerView;
@property(nonatomic) __weak id <PXTrimToolPlayerObserver> playerObserver; // @synthesize playerObserver=_playerObserver;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)stopPeriodicTimeObserver;
- (void)startPeriodicTimeObserver;
- (void)pause;
- (void)play;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
@property(readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
- (void)invalidateComposition;
- (void)applyTrimTimeRange:(CDStruct_e83c9415)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 untrimmed:(BOOL)arg2 exact:(BOOL)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)requestPlayerItemWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) UIView *loupePlayerView; // @synthesize loupePlayerView=_loupePlayerView;
- (void)_timeObserverTimeChanged:(CDStruct_1b6d18a9)arg1;
- (void)_addPeriodicTimeObserver;
- (void)_createLoupePlayerView;
- (id)videoPlayerView;
- (id)_videoPlayerViewIfLoaded;
- (void)_loadWrappedAVPlayerIfNecessary;
- (id)initWithLivePhotoView:(id)arg1;

@end
