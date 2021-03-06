//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIButton, UIToolbar;

@interface FCSheetView : UIView
{
    BOOL _presented;
    CDUnknownBlockType _dismissAction;
    UIButton *_dismissButton;
    UIView *_contentContainer;
    UIToolbar *_blurToolbar;
    CALayer *_blurLayer;
    UIView *_blurView;
    CDUnknownBlockType _dismissAnimations;
}

+ (void)dismissAllAnimated:(BOOL)arg1;
@property(nonatomic) BOOL presented; // @synthesize presented=_presented;
@property(copy, nonatomic) CDUnknownBlockType dismissAnimations; // @synthesize dismissAnimations=_dismissAnimations;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) CALayer *blurLayer; // @synthesize blurLayer=_blurLayer;
@property(retain, nonatomic) UIToolbar *blurToolbar; // @synthesize blurToolbar=_blurToolbar;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
- (void).cxx_destruct;
- (void)presentInView:(id)arg1 extraAnimations:(CDUnknownBlockType)arg2 extraDismissAnimations:(CDUnknownBlockType)arg3;
- (void)presentInView:(id)arg1;
- (BOOL)accessibilityPerformEscape;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissByNotification:(id)arg1;
- (void)dealloc;
- (id)initWithContentView:(id)arg1;

@end

