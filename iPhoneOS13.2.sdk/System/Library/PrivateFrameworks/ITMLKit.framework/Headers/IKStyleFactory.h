//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class IKStylesGroup, NSMutableDictionary;

@interface IKStyleFactory : NSObject <NSCopying>
{
    IKStylesGroup *_stylesGroup;
    NSMutableDictionary *_styleListsByClassSelector;
}

+ (id)styleFactoryWithMarkup:(id)arg1 filterBlockedStyles:(_Bool)arg2;
@property(readonly, retain, nonatomic) NSMutableDictionary *styleListsByClassSelector; // @synthesize styleListsByClassSelector=_styleListsByClassSelector;
@property(readonly, retain, nonatomic) IKStylesGroup *stylesGroup; // @synthesize stylesGroup=_stylesGroup;
- (id)_collapsedStyleListForSelectors:(id)arg1 targetSelector:(id)arg2 stylesGroup:(id)arg3;
- (void)setViewElementStylesDirty;
- (id)styleListForClassSelector:(id)arg1;
- (id)initWithStylesGroup:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
