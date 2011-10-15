/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUTableViewController.h>

#import "IUCoverFlowOwner-Protocol.h"

@class IUCoverFlowTransitionController, IUCoverFlowViewController, IUMediaListAggregateView;

@interface IUMediaListViewController : IUTableViewController <IUCoverFlowOwner>
{
    IUCoverFlowTransitionController *_coverFlowTransition;
    IUCoverFlowViewController *_coverFlowViewController;
    IUMediaListAggregateView *_aggregateHeaderView;
    unsigned int _searchEnabled:1;
    unsigned int _didAppear:1;
    unsigned int _hasPendingDynamicChanges:1;
    unsigned int _hasPendingNowPlayingItemChanges:1;
}

+ (Class)tableViewClass;
- (void)_transitionToCoverFlowWithInterfaceOrientation:(int)arg1;
- (void)_transitionFromCoverFlow;
- (BOOL)_handleControllerContext:(id)arg1;
- (BOOL)_canShowCoverFlow;
- (id)_baseViewController;
- (void)_dataSourceCountStringFormatDidChange:(id)arg1;
- (void)_accessorySplashViewWillAppearNotification:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_trackDynamicPropertiesChangedNotification:(id)arg1;
- (void)_handleTrackDynamicPropertiesChanged;
- (void)_nowPlayingItemChanged:(id)arg1;
- (void)_handleNowPlayingItemChanged;
- (void)_coverFlowDidTransitionOut:(id)arg1;
- (void)_coverFlowTransitionInDidStop:(id)arg1 finished:(id)arg2;
- (void)_delayedPushContext:(id)arg1;
- (void)remoteEventSelectItem;
- (void)remoteEventMoveDown;
- (void)remoteEventMoveUp;
- (void)viewWillAppearForRemoteEvent;
- (id)query;
@property(readonly, nonatomic) BOOL isShowingCoverFlow; // @dynamic isShowingCoverFlow;
@property(retain, nonatomic) IUCoverFlowViewController *coverFlowViewController;
- (void)performDefaultActionForRow:(int)arg1;
- (void)performActionForActionRow:(id)arg1 animated:(BOOL)arg2;
- (void)modalContextDidDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (BOOL)hasSearchBar;
- (void)deviceOrientationChanged:(int)arg1;
- (void)loadView;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)handlePlaybackDataSource:(id)arg1;
- (void)reloadPrefixActionRowsAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end
