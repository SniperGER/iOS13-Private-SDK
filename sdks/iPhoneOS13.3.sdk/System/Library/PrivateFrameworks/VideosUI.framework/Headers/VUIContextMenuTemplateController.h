//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <VideosUI/VUIContextMenuTemplateControllerInterface-Protocol.h>

@class IKViewElement, VUIContextMenuCardView;

__attribute__((visibility("hidden")))
@interface VUIContextMenuTemplateController : _TVBgImageLoadingViewController <VUIContextMenuTemplateControllerInterface>
{
    VUIContextMenuCardView *_cardView;
    IKViewElement *_viewElement;
}

@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) VUIContextMenuCardView *cardView; // @synthesize cardView=_cardView;
// - (void).cxx_destruct;
- (void)didSelectPreviewTemplateController;
- (void)_updateInteractionMenuItems:(id)arg1;
- (id)_shareActionSheetFromViewElement:(id)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)updateWithViewElement:(id)arg1;

@end
