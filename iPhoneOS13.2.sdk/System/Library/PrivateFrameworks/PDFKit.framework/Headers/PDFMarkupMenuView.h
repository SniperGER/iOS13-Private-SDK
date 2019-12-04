//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PDFMarkupMenuViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFMarkupMenuView : UIView
{
    PDFMarkupMenuViewPrivate *_private;
}

- (int)_noteMenuIconForMarkupStyle:(unsigned long long)arg1;
- (int)_colorPaletteMenuIconForMarkupStyle:(unsigned long long)arg1;
- (int)_colorMenuIconForMarkupStyle:(unsigned long long)arg1;
- (id)_menuControls;
- (void)_updateAppearance;
- (_Bool)_shouldShowCompactMenu;
- (struct CGSize)_sizeThatFitsControls:(id)arg1;
- (void)_setBlurDisabled:(_Bool)arg1;
- (struct CGRect)_dividerLineRectForControl:(long long)arg1;
- (id)_newMaskView:(long long)arg1;
- (void)_setControls:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)handleRightArrowButton:(id)arg1;
- (void)_handleDeleteButtonTap;
- (void)handleDeleteButtonTap:(id)arg1;
- (void)handleAddNoteButton:(id)arg1;
- (void)showColorControlsMenu:(id)arg1;
- (void)useColorOf:(id)arg1;
- (void)hide;
- (void)presentFromRect:(struct CGRect)arg1 view:(id)arg2 visibleRect:(struct CGRect)arg3;
- (void)setMarkupNoteStyle:(unsigned long long)arg1;
- (void)setMarkupStyle:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)_setupViews;
- (id)initWithDelegate:(id)arg1;

@end
