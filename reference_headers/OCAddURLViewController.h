//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, NSURL, UIActivityIndicatorView, UITextField;

@interface OCAddURLViewController : UIViewController <UITextFieldDelegate>
{
    UITextField *_inputField;
    UIActivityIndicatorView *_spinner;
    NSString *_immediateQueryToAdd;
    NSURL *_xCallbackSuccessURL;
    NSURL *_xCallbackCancelURL;
}

+ (id)iTunesIDFromString:(id)arg1;
@property(copy, nonatomic) NSURL *xCallbackCancelURL; // @synthesize xCallbackCancelURL=_xCallbackCancelURL;
@property(copy, nonatomic) NSURL *xCallbackSuccessURL; // @synthesize xCallbackSuccessURL=_xCallbackSuccessURL;
@property(copy, nonatomic) NSString *immediateQueryToAdd; // @synthesize immediateQueryToAdd=_immediateQueryToAdd;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UITextField *inputField; // @synthesize inputField=_inputField;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dismissWithSuccess:(id)arg1;
- (void)cancelAndDismiss:(id)arg1;
- (void)viewDidLoad;
- (id)initWithImmediateQueryToAdd:(id)arg1 xCallbackSuccessURL:(id)arg2 xCallbackCancelURL:(id)arg3;

@end

