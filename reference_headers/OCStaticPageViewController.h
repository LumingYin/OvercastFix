//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "UIWebViewDelegate.h"

@class UIActivityIndicatorView, UIWebView;

@interface OCStaticPageViewController : UIViewController <UIWebViewDelegate, MFMailComposeViewControllerDelegate>
{
    UIWebView *_webview;
    UIActivityIndicatorView *_spinner;
    int _currentPage;
}

@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIWebView *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)sendFeedback;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)viewDidLoad;
- (void)shareButtonTapped:(id)arg1;
- (id)urlPathSegmentForPage:(int)arg1;
- (id)titleForPage:(int)arg1;
- (id)initWithPage:(int)arg1;

@end

