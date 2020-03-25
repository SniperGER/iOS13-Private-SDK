//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDContainerInfo-Protocol.h>
#import <iWorkImport/TSDLockableInfo-Protocol.h>
#import <iWorkImport/TSDSelectionStatisticsContributor-Protocol.h>
#import <iWorkImport/TSWPFlowInfo-Protocol.h>
#import <iWorkImport/TSWPStorageParent-Protocol.h>

@class NSArray, NSObject, NSString, TSDInfoGeometry, TSUColor, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface TSWPFlowInfo : TSPObject <TSWPFlowInfo, TSDContainerInfo, TSDLockableInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>
{
    TSWPStorage *_textStorage;
    NSArray *_textboxes;
    NSUInteger _userInterfaceIdentifier;
}

+ (BOOL)needsObjectUUID;
+ (id)strokeColorForUserInterfaceIdentifier:(NSUInteger)arg1;
+ (id)fillColorForUserInterfaceIdentifier:(NSUInteger)arg1;
+ (id)p_darkColorForIndex:(NSUInteger)arg1;
+ (id)p_darkColorForColor:(id)arg1;
+ (id)p_colorForIndex:(NSUInteger)arg1;
@property(nonatomic) NSUInteger userInterfaceIdentifier; // @synthesize userInterfaceIdentifier=_userInterfaceIdentifier;
@property(retain, nonatomic) NSArray *textboxes; // @synthesize textboxes=_textboxes;
@property(retain, nonatomic) TSWPStorage *textStorage; // @synthesize textStorage=_textStorage;
// - (void).cxx_destruct;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
- (void)pSaveToFlowInfoArchive:(struct FlowInfoArchive )arg1 archiver:(id)arg2 textBoxes:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromFlowInfoArchive:(const struct FlowInfoArchive )arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
@property(readonly, nonatomic) BOOL supportsMultipleColumns;
@property(readonly, nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) BOOL preventsChangeTracking;
@property(readonly, nonatomic) BOOL preventsComments;
@property(readonly, nonatomic) BOOL textIsLinked;
- (BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL autoListTermination;
@property(readonly, nonatomic) BOOL autoListRecognition;
- (BOOL)containsRotatedOrFlippedTextBox;
- (BOOL)isThemeContent;
- (BOOL)isSelectable;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (Class)layoutClass;
- (Class)repClass;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
- (id)infoForSelectionPath:(id)arg1;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
- (id)copyWithContext:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *childInfos;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)displayNameOfMaxLength:(NSUInteger)arg1 usesEllipsis:(BOOL)arg2;
- (NSUInteger)indexOfTextBox:(id)arg1;
- (long long)nestedTextboxDepth;
@property(readonly, nonatomic) NSUInteger textOrientation;
@property(readonly, nonatomic, getter=isLocked) BOOL locked;
@property(readonly, nonatomic) TSUColor *userInterfaceStrokeColor;
@property(readonly, nonatomic) TSUColor *userInterfaceFillColor;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 context:(id)arg2;
- (id)extractTextStorage;
- (void)saveWithOnlyLinkedTextBoxes:(id)arg1 archiver:(id)arg2;
- (void)i_uncheckedSetTextboxes:(id)arg1;
- (id)objectUUIDPath;

@end
