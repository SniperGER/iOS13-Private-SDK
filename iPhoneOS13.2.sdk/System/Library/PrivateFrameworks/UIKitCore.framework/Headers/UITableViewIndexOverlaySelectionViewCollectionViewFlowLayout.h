//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    struct CGRect _frameForDoneButton;
    double _rightMarginForDoneButton;
}

+ (Class)layoutAttributesClass;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
@property(nonatomic) double rightMarginForDoneButton;
@property(nonatomic) struct CGRect frameForDoneButton;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;

@end
