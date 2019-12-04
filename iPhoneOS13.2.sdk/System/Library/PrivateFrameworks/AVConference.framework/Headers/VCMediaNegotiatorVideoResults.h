//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCVideoRuleCollections;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorVideoResults : NSObject
{
    _Bool _isSupported;
    unsigned int _remoteSSRC;
    _Bool _isRTCPFBEnabled;
    VCVideoRuleCollections *_videoRuleCollections;
    NSMutableDictionary *_featureStrings;
    NSMutableDictionary *_parameterSets;
    unsigned int _customVideoWidth;
    unsigned int _customVideoHeight;
    unsigned int _tilesPerFrame;
}

@property(nonatomic) unsigned int tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) unsigned int customVideoWidth; // @synthesize customVideoWidth=_customVideoWidth;
@property(nonatomic) unsigned int customVideoHeight; // @synthesize customVideoHeight=_customVideoHeight;
@property(retain, nonatomic) NSDictionary *parameterSets; // @synthesize parameterSets=_parameterSets;
@property(nonatomic) _Bool isSupported; // @synthesize isSupported=_isSupported;
@property(retain, nonatomic) NSDictionary *featureStrings; // @synthesize featureStrings=_featureStrings;
@property(readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections; // @synthesize videoRuleCollections=_videoRuleCollections;
@property(nonatomic) _Bool isRTCPFBEnabled; // @synthesize isRTCPFBEnabled=_isRTCPFBEnabled;
@property(nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
- (void)addParameterSet:(id)arg1 key:(id)arg2;
- (void)addFeatureString:(id)arg1 key:(id)arg2;
- (void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (void)dealloc;
- (id)init;

@end
