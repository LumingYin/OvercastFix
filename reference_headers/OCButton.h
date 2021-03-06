//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIActivityIndicatorView, UIColor;

@interface OCButton : UIButton
{
    NSString *_text;
    NSString *_fontTextStyle;
    id _userInfo;
    int _numberOfLines;
    float _fontSize;
    UIColor *_fontColor;
    UIColor *_highlightedFontColor;
    NSString *_textBeforeSpinner;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(copy, nonatomic) NSString *textBeforeSpinner; // @synthesize textBeforeSpinner=_textBeforeSpinner;
@property(retain, nonatomic) UIColor *highlightedFontColor; // @synthesize highlightedFontColor=_highlightedFontColor;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *fontTextStyle; // @synthesize fontTextStyle=_fontTextStyle;
- (void).cxx_destruct;
- (void)setDisabledWithActivityIndicator:(BOOL)arg1;
@property(copy, nonatomic) NSString *text;
- (void)initIfNecessaryFromNib:(BOOL)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

