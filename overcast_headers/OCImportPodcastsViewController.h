//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCTableViewControllerWithDeselectionFix.h"

@class NSArray;

@interface OCImportPodcastsViewController : FCTableViewControllerWithDeselectionFix
{
    int appRowApplePodcasts;
    int appRowDowncast;
    int appRowCastro;
    int appRowICatcher;
    int appRowInstacast;
    int appRowPocketCasts;
    int appRowPodWrangler;
    int numAppRows;
    NSArray *_applePodcasts;
}

+ (BOOL)canImportPodcastsFromElsewhere;
@property(copy, nonatomic) NSArray *applePodcasts; // @synthesize applePodcasts=_applePodcasts;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end
