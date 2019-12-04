//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <NanoTimeKitCompanion/NTKCUpNextDataSourcesManagerIdentifiersDelegate-Protocol.h>

@class NSString, NTKCUpNextDataSourcesManager;

@interface NTKCUpNextDataSourcesViewController : PSListController <NTKCUpNextDataSourcesManagerIdentifiersDelegate>
{
    NTKCUpNextDataSourcesManager *_dataSourcesManager;
}

- (void)_setAndResizeIconImage:(id)arg1 forSpecifier:(id)arg2;
- (void)dataSourcesSectionDidFinishLoading:(id)arg1;
- (void)dataSourcesSection:(id)arg1 didChangeDataSources:(id)arg2 forMode:(long long)arg3;
- (id)_dataSourceEnabled:(id)arg1;
- (void)_setDataSourceEnabled:(id)arg1 withSpecifier:(id)arg2;
- (void)_disabledDataSourcesDidChange;
- (void)manager:(id)arg1 didUpdateDataSourceEntries:(id)arg2;
- (id)specifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
