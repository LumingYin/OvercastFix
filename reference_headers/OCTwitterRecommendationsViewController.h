//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, NSURL, UIActivityIndicatorView, UITableView, UIView;

@interface OCTwitterRecommendationsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_overlay;
    UIActivityIndicatorView *_loadingSpinner;
    UITableView *_tableView;
    NSArray *_episodes;
    NSArray *_episodeFeeds;
    NSArray *_feeds;
    NSString *_twitterUsername;
    NSURL *_twitterAvatarURL;
}

@property(retain, nonatomic) NSURL *twitterAvatarURL; // @synthesize twitterAvatarURL=_twitterAvatarURL;
@property(copy, nonatomic) NSString *twitterUsername; // @synthesize twitterUsername=_twitterUsername;
@property(copy, nonatomic) NSArray *feeds; // @synthesize feeds=_feeds;
@property(copy, nonatomic) NSArray *episodeFeeds; // @synthesize episodeFeeds=_episodeFeeds;
@property(copy, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property(retain, nonatomic) UIView *overlay; // @synthesize overlay=_overlay;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)titleForHeaderInSection:(int)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)addFeedWithSpecificItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)parseRecommendations:(id)arg1;
- (void)showResultsInterface;
- (void)showLoadingInterface;
- (void)viewDidLoad;
- (void)logOutOfTwitter:(id)arg1;
- (void)twitterDataChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

