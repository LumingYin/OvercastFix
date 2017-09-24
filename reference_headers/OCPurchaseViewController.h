//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class OCBorderedButton, OCButton, UIActivityIndicatorView;

@interface OCPurchaseViewController : UIViewController
{
    BOOL wasPushedOntoExistingNavigationStack;
    OCBorderedButton *_buyButton;
    OCButton *_restoreButton;
    UIActivityIndicatorView *_restoreSpinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *restoreSpinner; // @synthesize restoreSpinner=_restoreSpinner;
@property(retain, nonatomic) OCButton *restoreButton; // @synthesize restoreButton=_restoreButton;
@property(retain, nonatomic) OCBorderedButton *buyButton; // @synthesize buyButton=_buyButton;
- (void).cxx_destruct;
- (void)restorePurchase:(id)arg1;
- (void)buy:(id)arg1;
- (void)viewDidLoad;
- (void)cancel:(id)arg1;
- (id)init;

@end

