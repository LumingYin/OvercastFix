//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCTableViewControllerWithDeselectionFix.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, UIBarButtonItem;

@interface OCPodcastsViewController : FCTableViewControllerWithDeselectionFix <UITableViewDataSource, UITableViewDelegate>
{
    unsigned int highestDownloadCountInThisBatch;
    unsigned int lastDownloadIconCountDisplayed;
    float lastDownloadIconProgressDisplayed;
    BOOL animatingDelete;
    NSArray *_playlists;
    NSArray *_podcastsWithUnplayedEpisodes;
    NSArray *_podcastsWithoutUnplayedEpisodes;
    UIBarButtonItem *_downloadsBarButtonItem;
    UIBarButtonItem *_editButton;
}

@property(retain, nonatomic) UIBarButtonItem *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIBarButtonItem *downloadsBarButtonItem; // @synthesize downloadsBarButtonItem=_downloadsBarButtonItem;
@property(copy, nonatomic) NSArray *podcastsWithoutUnplayedEpisodes; // @synthesize podcastsWithoutUnplayedEpisodes=_podcastsWithoutUnplayedEpisodes;
@property(copy, nonatomic) NSArray *podcastsWithUnplayedEpisodes; // @synthesize podcastsWithUnplayedEpisodes=_podcastsWithUnplayedEpisodes;
@property(copy, nonatomic) NSArray *playlists; // @synthesize playlists=_playlists;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)importPromoButtonTapped:(id)arg1;
- (void)addPodcastPromoButtonTapped:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)editButtonTapped:(id)arg1;
- (void)downloadsButtonTapped;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)reloadData;
- (void)viewDidLoad;
- (void)updateDownloadIcon:(id)arg1;
- (void)refreshCompleted:(id)arg1;
- (void)refreshControlRefreshed:(id)arg1;
- (void)settingsButtonTapped;
- (void)addButtonTapped:(id)arg1;
- (void)addPlaylistButtonTapped:(id)arg1;
- (void)dealloc;
- (id)init;

@end

