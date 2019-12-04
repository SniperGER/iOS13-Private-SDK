//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class WFFileType, WFImage;

@interface WFImageContentItem : WFGenericFileContentItem <WFContentItemClass>
{
    _Bool _imageIsAnimated;
    WFFileType *_preferredFileType;
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (id)imageTypes;
+ (id)propertyBuilders;
+ (id)itemWithImage:(id)arg1 named:(id)arg2 preferredFileType:(id)arg3;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
@property(retain, nonatomic) WFFileType *preferredFileType; // @synthesize preferredFileType=_preferredFileType;
@property(nonatomic) _Bool imageIsAnimated; // @synthesize imageIsAnimated=_imageIsAnimated;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (_Bool)isContent;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentation:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateImageFileForType:(id)arg1 includingMetadata:(_Bool)arg2 compressionQuality:(id)arg3 error:(id *)arg4;
- (id)imageFile;
@property(readonly, nonatomic) WFImage *image;
- (_Bool)isObjectBacked;
- (_Bool)isScreenshot;
- (id)orientation;
- (id)location;
- (id)height;
- (id)width;
- (id)model;
- (id)make;
- (id)dateTaken;
@property(readonly, nonatomic) struct CGSize size;
- (id)metadata;
- (_Bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize)arg2;

@end
