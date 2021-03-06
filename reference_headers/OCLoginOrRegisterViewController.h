//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, OCBorderedButton, OCButton, OCStyledLabel, UIActivityIndicatorView;

@interface OCLoginOrRegisterViewController : UIViewController
{
    BOOL _loggingOut;
    BOOL _showingButtLoginAlert;
    OCBorderedButton *_createUserButton;
    OCBorderedButton *_existingUserButton;
    OCBorderedButton *_skipRegistrationButton;
    OCStyledLabel *_descLabel;
    OCButton *_privacyPolicyButton;
    OCButton *_faqButton;
    OCStyledLabel *_loggingOutLabel;
    UIActivityIndicatorView *_loggingOutSpinner;
    NSString *_lastPromptedButtToken;
}

@property(retain, nonatomic) NSString *lastPromptedButtToken; // @synthesize lastPromptedButtToken=_lastPromptedButtToken;
@property(retain, nonatomic) UIActivityIndicatorView *loggingOutSpinner; // @synthesize loggingOutSpinner=_loggingOutSpinner;
@property(retain, nonatomic) OCStyledLabel *loggingOutLabel; // @synthesize loggingOutLabel=_loggingOutLabel;
@property(retain, nonatomic) OCButton *faqButton; // @synthesize faqButton=_faqButton;
@property(retain, nonatomic) OCButton *privacyPolicyButton; // @synthesize privacyPolicyButton=_privacyPolicyButton;
@property(retain, nonatomic) OCStyledLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) OCBorderedButton *skipRegistrationButton; // @synthesize skipRegistrationButton=_skipRegistrationButton;
@property(retain, nonatomic) OCBorderedButton *existingUserButton; // @synthesize existingUserButton=_existingUserButton;
@property(retain, nonatomic) OCBorderedButton *createUserButton; // @synthesize createUserButton=_createUserButton;
@property(nonatomic) BOOL showingButtLoginAlert; // @synthesize showingButtLoginAlert=_showingButtLoginAlert;
@property(nonatomic) BOOL loggingOut; // @synthesize loggingOut=_loggingOut;
- (void).cxx_destruct;
- (void)buttDataChanged:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)receiveUpdatesFromMyButt;
- (void)faqButtonTapped:(id)arg1;
- (void)privacyPolicyButtonTapped:(id)arg1;
- (void)skipRegistrationButtonTapped:(id)arg1;
- (void)existingUserButtonTapped:(id)arg1;
- (void)createUserButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)logoutDidComplete;
- (id)initWithLoggingOutState:(BOOL)arg1;

@end

