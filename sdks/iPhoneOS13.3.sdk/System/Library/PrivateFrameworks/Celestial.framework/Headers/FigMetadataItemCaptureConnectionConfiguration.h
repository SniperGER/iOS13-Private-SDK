//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    struct opaqueCMFormatDescription _formatDescription;
    struct OpaqueCMClock _clock;
    int _sourceSubType;
}

@property(nonatomic) int sourceSubType; // @synthesize sourceSubType=_sourceSubType;
@property(retain, nonatomic) struct OpaqueCMClock clock; // @synthesize clock=_clock;
@property(retain, nonatomic) struct opaqueCMFormatDescription formatDescription; // @synthesize formatDescription=_formatDescription;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end
