//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPArtworkDataSourceVisualIdenticality-Protocol.h>

@class MPExportableArtworkProperties, NSString;

@interface MPNowPlayingContentItemRemoteArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality>
{
    NSString *_identifier;
    NSString *_artworkIdentifier;
    MPExportableArtworkProperties *_artworkProperties;
}

@property(readonly, copy, nonatomic) MPExportableArtworkProperties *artworkProperties; // @synthesize artworkProperties=_artworkProperties;
@property(readonly, copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)stringRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 artworkProperties:(id)arg2 artworkIdentifier:(id)arg3;

@end
