//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUControllableItemCollectionViewController.h>

#import <HomeUI/HFItemManagerDelegate-Protocol.h>

@class HFWallpaperSlice, HUGridActionSetItemManager, HUGridLayoutOptions, HUWallpaperView, NSString, UILabel;
@protocol HUGridActionSetListViewControllerItemUpdateDelegate;

@interface HUGridActionSetListViewController : HUControllableItemCollectionViewController <HFItemManagerDelegate>
{
    id <HUGridActionSetListViewControllerItemUpdateDelegate> _itemUpdateDelegate;
    UILabel *_titleLabel;
}

+ (double)requiredHeightWithLayoutOptions:(id)arg1 numberOfItems:(unsigned long long)arg2;
+ (unsigned long long)updateMode;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HUGridActionSetListViewControllerItemUpdateDelegate> itemUpdateDelegate; // @synthesize itemUpdateDelegate=_itemUpdateDelegate;
- (long long)_scrollDirectionForLayoutOptions:(id)arg1;
- (void)_updateLayoutScrollDirectionIfNeeded;
- (id)_detailsViewControllerForActionSetItem:(id)arg1;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2;
- (id)reorderableHomeKitItemListForSection:(long long)arg1;
- (_Bool)canReorderItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) HUGridActionSetItemManager *actionSetItemManager;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)_internalSetLayoutOptions:(id)arg1;
@property(copy, nonatomic) HUGridLayoutOptions *layoutOptions;
@property(retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property(retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property(retain, nonatomic) HUWallpaperView *wallpaperView;
- (void)viewDidLoad;
- (id)initWithRoom:(id)arg1 onlyShowFavorites:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
