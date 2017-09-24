//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCTableViewControllerWithDeselectionFix.h"

#import "OCEpisodeCellDownloadDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, OCViewStack, UISwitch;

@interface OCDownloadsViewController : FCTableViewControllerWithDeselectionFix <OCEpisodeCellDownloadDelegate, UITableViewDataSource, UITableViewDelegate>
{
    BOOL animatingDelete;
    NSArray *_items;
    NSArray *_failedItems;
    OCViewStack *_cellularDownloadsLabelStack;
    UISwitch *_cellularDownloadsSwitch;
}

+ (BOOL)deviceMightHaveCellularRadio;
@property(retain, nonatomic) UISwitch *cellularDownloadsSwitch; // @synthesize cellularDownloadsSwitch=_cellularDownloadsSwitch;
@property(retain, nonatomic) OCViewStack *cellularDownloadsLabelStack; // @synthesize cellularDownloadsLabelStack=_cellularDownloadsLabelStack;
@property(copy, nonatomic) NSArray *failedItems; // @synthesize failedItems=_failedItems;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)pauseDownloadButtonTappedInEpisodeCell:(id)arg1;
- (void)downloadButtonTappedInEpisodeCell:(id)arg1;
- (void)forceDownloadForItem:(id)arg1;
- (void)viewDidLoad;
- (void)episodeDataChanged:(id)arg1;
- (void)cellularSwitchToggled:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)updatePurchaseStatus:(id)arg1;
- (void)dealloc;
- (id)init;

@end

