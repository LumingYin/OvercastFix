//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class OCPlaybackSpeed;

@interface OCSpeedLabel : UILabel
{
    OCPlaybackSpeed *_speed;
}

@property(retain, nonatomic) OCPlaybackSpeed *speed; // @synthesize speed=_speed;
- (void).cxx_destruct;
- (void)speedChanged:(id)arg1;
- (void)dealloc;
- (id)initWithSpeed:(id)arg1;

@end

