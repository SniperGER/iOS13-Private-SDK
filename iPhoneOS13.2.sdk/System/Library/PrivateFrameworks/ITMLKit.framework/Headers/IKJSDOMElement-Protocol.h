//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMNamedNodeMap, IKDOMNodeList, NSString;

@protocol IKJSDOMElement <JSExport>
@property(readonly, copy, nonatomic) IKDOMNamedNodeMap *attributes;
@property(readonly, retain, nonatomic) NSString *tagName;
- (_Bool)hasAttributes;
- (_Bool)hasAttribute:(NSString *)arg1;
- (IKDOMNodeList *)getElementsByTagName:(NSString *)arg1;
- (void)removeAttribute:(NSString *)arg1;
- (void)setAttribute:(NSString *)arg1:(NSString *)arg2;
- (NSString *)getAttribute:(NSString *)arg1;
@end
