//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMDocumentMapper.h>

#import <OfficeImport/CMMapperRoot-Protocol.h>

@class EDWorkbook, NSMutableArray, NSString, OIXMLDocument, OIXMLElement;

__attribute__((visibility("hidden")))
@interface EMWorkbookMapper : CMDocumentMapper <CMMapperRoot>
{
    unsigned long long mRealSheetCount;
    int mWidth;
    int mHeight;
    NSMutableArray *mWorksheetUrls;
    NSMutableArray *mWorksheetNames;
    NSMutableArray *mWorksheetGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    NSString *mStyleSheetGuid;
    NSString *mFileName;
    unsigned int mSheetIndex;
    _Bool mIsFirstMappedSheet;
    _Bool mIsFrameset;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    OIXMLDocument *mTabBarDoc;
    NSString *mTabBarURL;
    NSMutableArray *mSheetURLs;
    double mTabPosition;
    unsigned long long mNumberOfMappedSheets;
    _Bool mHasPushedHeader;
    _Bool mHasPushedFirstSheet;
    _Bool mLoadingMessageVisible;
}

+ (id)borderWidthCache;
+ (id)borderStyleCache;
+ (id)cssStyleCache;
@property(retain) NSString *fileName; // @synthesize fileName=mFileName;
- (void)setElementCount:(unsigned long long)arg1;
- (void)finishMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(_Bool)arg4;
- (id)_copyStringForSheet:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 andMapper:(id)arg4;
- (void)startMappingWithState:(id)arg1;
- (void)_pushTabForSheet:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)tabTitleDrawingAttributes;
- (id)_mainPageBack;
- (id)_frontPageByCopyingMainPage;
- (id)headElementForFrontPage;
- (void)mapStylesheetNamed:(id)arg1 atElement:(id)arg2;
- (void)mapStylesheetData:(id)arg1 name:(id)arg2 atElement:(id)arg3;
- (struct CGSize)pageSizeForDevice;
- (_Bool)hasMultipleSheets;
- (id)styleMatrix;
- (id)documentTitle;
- (id)archiver;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)initWithDocument:(id)arg1 archiver:(id)arg2;
- (id)copySheetMapperWithEdSheet:(id)arg1;

// Remaining properties
@property(readonly) EDWorkbook *document; // @dynamic document;

@end
