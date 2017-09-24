//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OCAudioFilePlayerDelegate.h"

@class MPMediaItemArtwork, NSDate, NSString, NSTimer, OCAudioGraph, OCFeedItem, OCPlaybackSpeed, UIImage;

@interface OCAudioManager : NSObject <OCAudioFilePlayerDelegate>
{
    unsigned long lastSyncedTimestamp;
    long long lastItemIDSentToMPNowPlayingInfoCenter;
    long lastMPNowPlayingInfoCenterUpdateTime;
    BOOL lastGraphStartDidSucceed;
    BOOL withholdLoadFailureNotification;
    double seekLastHitEOFAtTime;
    int seekAccelerationLastDirection;
    double seekAccelerationLastTime;
    int seekAccelerationCurrentBurstSeekCount;
    BOOL _isProposingElapsedTimeBySliderDrag;
    BOOL _isPlaying;
    BOOL _isPausedForInterruption;
    NSDate *_effectsTrialEndDate;
    OCFeedItem *_currentItem;
    id <OCPlaylistItemProvider> _currentPlaylistItemProvider;
    unsigned int _nowPlayingTrackNumber;
    unsigned int _nowPlayingTrackCount;
    NSString *_nowPlayingTitle;
    NSString *_nowPlayingArtist;
    NSString *_nowPlayingAlbum;
    UIImage *_nowPlayingArtwork;
    OCAudioGraph *_graph;
    MPMediaItemArtwork *_currentItemMPArtwork;
    NSTimer *_sleepTimer;
    NSTimer *_effectsTrialTimer;
    unsigned long long _nowPlayingPersistentID;
    double _nowPlayingElapsedTime;
    double _nowPlayingProposedElapsedTime;
    double _nowPlayingRemainingTime;
    double _nowPlayingDuration;
    double _nowPlayingPlaybackRate;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *effectsTrialTimer; // @synthesize effectsTrialTimer=_effectsTrialTimer;
@property(retain, nonatomic) NSTimer *sleepTimer; // @synthesize sleepTimer=_sleepTimer;
@property(retain, nonatomic) MPMediaItemArtwork *currentItemMPArtwork; // @synthesize currentItemMPArtwork=_currentItemMPArtwork;
@property(retain, nonatomic) OCAudioGraph *graph; // @synthesize graph=_graph;
@property(copy, nonatomic) UIImage *nowPlayingArtwork; // @synthesize nowPlayingArtwork=_nowPlayingArtwork;
@property(copy, nonatomic) NSString *nowPlayingAlbum; // @synthesize nowPlayingAlbum=_nowPlayingAlbum;
@property(copy, nonatomic) NSString *nowPlayingArtist; // @synthesize nowPlayingArtist=_nowPlayingArtist;
@property(copy, nonatomic) NSString *nowPlayingTitle; // @synthesize nowPlayingTitle=_nowPlayingTitle;
@property(nonatomic) double nowPlayingPlaybackRate; // @synthesize nowPlayingPlaybackRate=_nowPlayingPlaybackRate;
@property(nonatomic) double nowPlayingDuration; // @synthesize nowPlayingDuration=_nowPlayingDuration;
@property(nonatomic) double nowPlayingRemainingTime; // @synthesize nowPlayingRemainingTime=_nowPlayingRemainingTime;
@property(nonatomic) double nowPlayingProposedElapsedTime; // @synthesize nowPlayingProposedElapsedTime=_nowPlayingProposedElapsedTime;
@property(nonatomic) double nowPlayingElapsedTime; // @synthesize nowPlayingElapsedTime=_nowPlayingElapsedTime;
@property(nonatomic) unsigned int nowPlayingTrackCount; // @synthesize nowPlayingTrackCount=_nowPlayingTrackCount;
@property(nonatomic) unsigned int nowPlayingTrackNumber; // @synthesize nowPlayingTrackNumber=_nowPlayingTrackNumber;
@property(nonatomic) unsigned long long nowPlayingPersistentID; // @synthesize nowPlayingPersistentID=_nowPlayingPersistentID;
@property(retain, nonatomic) id <OCPlaylistItemProvider> currentPlaylistItemProvider; // @synthesize currentPlaylistItemProvider=_currentPlaylistItemProvider;
@property(retain, nonatomic) OCFeedItem *currentItem; // @synthesize currentItem=_currentItem;
@property(readonly, nonatomic) BOOL isPausedForInterruption; // @synthesize isPausedForInterruption=_isPausedForInterruption;
@property(readonly, nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) NSDate *effectsTrialEndDate; // @synthesize effectsTrialEndDate=_effectsTrialEndDate;
@property(nonatomic) BOOL isProposingElapsedTimeBySliderDrag; // @synthesize isProposingElapsedTimeBySliderDrag=_isProposingElapsedTimeBySliderDrag;
- (void).cxx_destruct;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)headphoneJackStatusChanged:(id)arg1;
- (void)duckingEnded:(id)arg1;
- (void)duckingBegan:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)audioServicesWereReset:(id)arg1;
- (void)audioSessionRouteChanged:(id)arg1;
- (void)audioFilePlayerDidReachEndOfFile:(id)arg1;
- (void)audioFilePlayerDidReachNewTimestamp:(id)arg1;
- (void)audioFilePlayerDidSeek:(id)arg1;
@property(nonatomic) int enhancementMode;
@property(retain, nonatomic) OCPlaybackSpeed *playbackSpeed;
- (void)seekForwardByDefaultInterval;
- (void)seekBackByDefaultInterval;
- (void)seekByRelativeSeconds:(double)arg1 accelerateBursts:(BOOL)arg2;
- (void)seekToTime:(double)arg1;
- (void)play;
- (void)resumeFromInterruption;
- (void)pauseForInterruption;
- (void)pause;
- (void)togglePlayPause;
@property(readonly, nonatomic) BOOL hasCurrentItem;
- (void)writeStatus;
- (BOOL)loadItem:(id)arg1 fromPlaylistItemProvider:(id)arg2 beginPlayback:(BOOL)arg3;
- (void)loadLastNowPlayingItem;
- (void)updateMPNowPlayingInfoCenter;
- (void)dealloc;
- (void)audioGraphStartError:(id)arg1;
- (void)audioGraphStartSucceeded:(id)arg1;
- (void)initAudioSession;
- (void)playPauseToolbarButtonTapped:(id)arg1;
- (void)skipForwardToolbarButtonTapped:(id)arg1;
- (void)skipBackToolbarButtonTapped:(id)arg1;
- (id)init;
@property(readonly, nonatomic) float averageRealSpeed;
- (void)effectsTrialTimerFired:(id)arg1;
- (void)cancelEffectsTrialTimer;
- (void)startEffectsTrialTimer;
- (void)sleepTimerFired:(id)arg1;
@property(retain, nonatomic) NSDate *sleepDate;

@end

