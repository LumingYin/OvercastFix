//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

@class NSString, NSURL;

@interface FCOpenInChromeActivity : UIActivity
{
    NSString *_callbackSource;
    NSURL *_URL;
    NSURL *_successCallbackURL;
}

+ (id)chromeLogoWithHeight:(float)arg1;
+ (id)conservativelyPercentEscapeString:(id)arg1;
@property(retain, nonatomic) NSURL *successCallbackURL; // @synthesize successCallbackURL=_successCallbackURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *callbackSource; // @synthesize callbackSource=_callbackSource;
- (void).cxx_destruct;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithSourceName:(id)arg1 successCallbackURL:(id)arg2;

@end
