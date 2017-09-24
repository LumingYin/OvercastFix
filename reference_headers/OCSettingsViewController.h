//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCTableViewControllerWithDeselectionFix.h"

#import "SKStoreProductViewControllerDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"

@class NSArray, NSString, UIDocumentInteractionController;

@interface OCSettingsViewController : FCTableViewControllerWithDeselectionFix <SKStoreProductViewControllerDelegate, UIDocumentInteractionControllerDelegate>
{
    int kNumSections;
    int kSectionAccount;
    int kSectionSeekControls;
    int kSectionFeedback;
    int kSectionOtherApps;
    int kSectionLegal;
    int kSectionDeleteAccount;
    int kNumAccountRows;
    int kAccountRowLogOut;
    int kAccountRowUnlockEverything;
    int kAccountRowTwitter;
    int kNumFeedbackRows;
    int kFeedbackRowFeedback;
    int kFeedbackRowRate;
    BOOL _loadingStoreView;
    BOOL _loadingExportOPML;
    NSArray *_otherApps;
    int _myRatingsCount;
    unsigned int _myAppID;
    NSString *_twitterUsername;
    UIDocumentInteractionController *_opmlShareController;
    NSArray *_seekIntervals;
    NSArray *_seekIntervalDescriptions;
}

@property(retain, nonatomic) NSArray *seekIntervalDescriptions; // @synthesize seekIntervalDescriptions=_seekIntervalDescriptions;
@property(retain, nonatomic) NSArray *seekIntervals; // @synthesize seekIntervals=_seekIntervals;
@property(retain, nonatomic) UIDocumentInteractionController *opmlShareController; // @synthesize opmlShareController=_opmlShareController;
@property(retain, nonatomic) NSString *twitterUsername; // @synthesize twitterUsername=_twitterUsername;
@property(nonatomic) BOOL loadingExportOPML; // @synthesize loadingExportOPML=_loadingExportOPML;
@property(nonatomic) BOOL loadingStoreView; // @synthesize loadingStoreView=_loadingStoreView;
@property(nonatomic) unsigned int myAppID; // @synthesize myAppID=_myAppID;
@property(nonatomic) int myRatingsCount; // @synthesize myRatingsCount=_myRatingsCount;
@property(retain, nonatomic) NSArray *otherApps; // @synthesize otherApps=_otherApps;
- (void).cxx_destruct;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)exportOPMLFromIndexPath:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)tappedAlternateAppIndexPath:(id)arg1;
- (void)rateApp;
- (void)seekAccelerationSwitchToggled:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)titleForFooterInSection:(int)arg1;
- (id)titleForSubheadInSection:(int)arg1;
- (id)titleForHeaderInSection:(int)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)logOutOfTwitterWithCompletion:(CDUnknownBlockType)arg1;
- (void)randomizeApps;
- (void)viewDidLoad;
- (int)indexOfSeekInterval:(int)arg1;
- (BOOL)accessibilityPerformEscape;
- (void)dismiss:(id)arg1;
- (void)reload:(id)arg1;
- (void)loadTwitterStatus;
- (void)loadPurchaseStatus;
- (void)dealloc;
- (id)init;

@end

