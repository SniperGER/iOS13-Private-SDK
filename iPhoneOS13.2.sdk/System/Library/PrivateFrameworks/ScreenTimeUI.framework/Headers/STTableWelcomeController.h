//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSLayoutConstraint, UITableViewController;

__attribute__((visibility("hidden")))
@interface STTableWelcomeController : OBTableWelcomeController
{
    UITableViewController *_tableViewController;
    NSLayoutConstraint *_heightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void)_contentSizeDidChangeFrom:(struct CGSize)arg1 to:(struct CGSize)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setTableView:(id)arg1;
- (void)dealloc;

@end
