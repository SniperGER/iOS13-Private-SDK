//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFActionDrawerResultsControlling-Protocol.h>

@class NSArray, NSString, UITableView, WFActionDrawerResults;

@interface WFActionDrawerCompositeResultsViewController : UIViewController <WFActionDrawerResultsControlling>
{
    WFActionDrawerResults *_results;
    NSArray *_suggestionSections;
    NSArray *_actionSections;
    NSArray *_appSections;
    NSArray *_userActivitySections;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) NSArray *userActivitySections; // @synthesize userActivitySections=_userActivitySections;
@property(readonly, nonatomic) NSArray *appSections; // @synthesize appSections=_appSections;
@property(readonly, nonatomic) NSArray *actionSections; // @synthesize actionSections=_actionSections;
@property(readonly, nonatomic) NSArray *suggestionSections; // @synthesize suggestionSections=_suggestionSections;
@property(readonly, nonatomic) WFActionDrawerResults *results; // @synthesize results=_results;
- (id)convertDonationsToActionsForSections:(id)arg1;
- (id)categorizeResults:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadViews;
- (void)setResults:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
