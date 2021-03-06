//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"

@class NSLayoutConstraint, OCBorderedButton, OCFeedItem, OCStyledLabel, UIBarButtonItem, UIView, UIWebView;

@interface OCEpisodeInfoViewController : UIViewController <UIWebViewDelegate, UIScrollViewDelegate>
{
    CDUnknownBlockType _downloadButtonAction;
    OCFeedItem *_item;
    UIWebView *_notesWebView;
    OCBorderedButton *_downloadButton;
    OCBorderedButton *_playButton;
    OCStyledLabel *_downloadProgressLabel;
    UIView *_topControlsContainer;
    NSLayoutConstraint *_topControlTopConstraint;
    id <OCPlaylistItemProvider> _playlistItemProvider;
    UIBarButtonItem *_accessibilityActionButton;
}

@property(retain, nonatomic) UIBarButtonItem *accessibilityActionButton; // @synthesize accessibilityActionButton=_accessibilityActionButton;
@property(retain, nonatomic) id <OCPlaylistItemProvider> playlistItemProvider; // @synthesize playlistItemProvider=_playlistItemProvider;
@property(retain, nonatomic) NSLayoutConstraint *topControlTopConstraint; // @synthesize topControlTopConstraint=_topControlTopConstraint;
@property(retain, nonatomic) UIView *topControlsContainer; // @synthesize topControlsContainer=_topControlsContainer;
@property(retain, nonatomic) OCStyledLabel *downloadProgressLabel; // @synthesize downloadProgressLabel=_downloadProgressLabel;
@property(retain, nonatomic) OCBorderedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) OCBorderedButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UIWebView *notesWebView; // @synthesize notesWebView=_notesWebView;
@property(retain, nonatomic) OCFeedItem *item; // @synthesize item=_item;
@property(copy, nonatomic) CDUnknownBlockType downloadButtonAction; // @synthesize downloadButtonAction=_downloadButtonAction;
- (void).cxx_destruct;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)itemRecommendationChanged:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadNotes:(id)arg1;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playButtonTapped:(id)arg1;
- (void)downloadButtonTapped:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)dealloc;
- (id)initWithFeedItem:(id)arg1 playlistItemProvider:(id)arg2;

@end

