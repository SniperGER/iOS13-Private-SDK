//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXComponentStyle-Protocol.h>

@class NSString, SXBorder, SXComponentMask, SXComponentShadow, SXDataTableStyle, SXFill, SXJSONArray, UIColor;

@interface SXComponentStyle : SXJSONObject <SXComponentStyle>
{
}

+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;
@property(readonly, nonatomic) unsigned long long traits;
- (id)maskWithValue:(id)arg1 withType:(int)arg2;
- (id)fillWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property(readonly, nonatomic) SXBorder *border; // @dynamic border;
@property(readonly, nonatomic) SXJSONArray *conditional; // @dynamic conditional;
@property(readonly, nonatomic) double cornerRadius; // @dynamic cornerRadius;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SXFill *fill; // @dynamic fill;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) SXComponentMask *mask; // @dynamic mask;
@property(readonly, nonatomic) double opacity; // @dynamic opacity;
@property(readonly, nonatomic) SXComponentShadow *shadow; // @dynamic shadow;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SXDataTableStyle *tableStyle; // @dynamic tableStyle;

@end
