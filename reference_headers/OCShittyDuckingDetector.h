//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface OCShittyDuckingDetector : NSObject
{
    BOOL active;
    double duckedSinceTime;
    BOOL timeoutWasReached;
    BOOL _ducked;
    NSTimer *_duckingDetectionTimer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *duckingDetectionTimer; // @synthesize duckingDetectionTimer=_duckingDetectionTimer;
@property(nonatomic, getter=isDucked) BOOL ducked; // @synthesize ducked=_ducked;
- (void).cxx_destruct;
- (void)timerFired:(id)arg1;
@property(nonatomic, getter=isActive) BOOL active;
- (void)dealloc;
- (id)init;

@end

