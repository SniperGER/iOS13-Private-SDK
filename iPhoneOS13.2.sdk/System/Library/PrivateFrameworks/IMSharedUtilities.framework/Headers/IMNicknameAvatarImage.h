//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMSharedUtilities/IMNicknameAvatar.h>



@class NSString;

@interface IMNicknameAvatarImage : IMNicknameAvatar <NSSecureCoding>
{
    NSString *_imageName;
    NSString *_imageFilePath;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool imageExists;
- (id)imageData;
@property(readonly, nonatomic) _Bool hasImage;
- (id)loadAndReturnImageData;
- (id)publicDictionaryMetadataRepresentation;
- (id)publicDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithpublicDictionaryMetadataRepresentation:(id)arg1;
- (id)initWithImageName:(id)arg1 imageFilePath:(id)arg2;

@end
