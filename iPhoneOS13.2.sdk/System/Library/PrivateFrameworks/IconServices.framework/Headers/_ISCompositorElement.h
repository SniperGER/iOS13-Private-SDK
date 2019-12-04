//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISCompositorElement-Protocol.h>
#import <IconServices/ISCompositorResourceProvider-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol ISCompositorRecipe, ISCompositorResourceProvider;

__attribute__((visibility("hidden")))
@interface _ISCompositorElement : NSObject <ISCompositorElement, ISCompositorResourceProvider>
{
    id <ISCompositorRecipe> _recipe;
    NSMutableDictionary *_resourceByName;
}

@property(readonly) NSMutableDictionary *resourceByName; // @synthesize resourceByName=_resourceByName;
@property(retain) id <ISCompositorRecipe> recipe; // @synthesize recipe=_recipe;
- (id)resourceNamed:(id)arg1;
- (void)clearResources;
- (void)addResourcesFromDictionary:(id)arg1;
- (void)setResource:(id)arg1 forName:(id)arg2;
@property(readonly) id <ISCompositorResourceProvider> resourceProvider;
- (id)initWithRecipe:(id)arg1 resources:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
