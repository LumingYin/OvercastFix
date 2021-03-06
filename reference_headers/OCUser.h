//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCModel.h"

@class NSString;

@interface OCUser : FCModel
{
    BOOL _seekAcceleration;
    BOOL _sortDirectionUnplayed;
    BOOL _sortDirectionAll;
    BOOL _continuousPlay;
    int _localID;
    int _id;
    NSString *_email;
    int _seekBackInterval;
    int _seekForwardInterval;
    int _globalEnhancementMode;
    int _globalPlaybackSpeedID;
    int _globalsUpdateTime;
    int _eTag;
    double _smartSpeedTotalSavings;
    double _smartSpeedSavingsSinceLastSync;
}

+ (BOOL)updateFromAPIDictionary:(id)arg1;
+ (id)syncArray;
+ (id)user;
+ (BOOL)isLoggedIntoTwitter;
@property(nonatomic) int eTag; // @synthesize eTag=_eTag;
@property(nonatomic) double smartSpeedSavingsSinceLastSync; // @synthesize smartSpeedSavingsSinceLastSync=_smartSpeedSavingsSinceLastSync;
@property(nonatomic) double smartSpeedTotalSavings; // @synthesize smartSpeedTotalSavings=_smartSpeedTotalSavings;
@property(nonatomic) int globalsUpdateTime; // @synthesize globalsUpdateTime=_globalsUpdateTime;
@property(nonatomic) int globalPlaybackSpeedID; // @synthesize globalPlaybackSpeedID=_globalPlaybackSpeedID;
@property(nonatomic) int globalEnhancementMode; // @synthesize globalEnhancementMode=_globalEnhancementMode;
@property(nonatomic) BOOL continuousPlay; // @synthesize continuousPlay=_continuousPlay;
@property(nonatomic) BOOL sortDirectionAll; // @synthesize sortDirectionAll=_sortDirectionAll;
@property(nonatomic) BOOL sortDirectionUnplayed; // @synthesize sortDirectionUnplayed=_sortDirectionUnplayed;
@property(nonatomic) BOOL seekAcceleration; // @synthesize seekAcceleration=_seekAcceleration;
@property(nonatomic) int seekForwardInterval; // @synthesize seekForwardInterval=_seekForwardInterval;
@property(nonatomic) int seekBackInterval; // @synthesize seekBackInterval=_seekBackInterval;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) int id; // @synthesize id=_id;
@property(nonatomic) int localID; // @synthesize localID=_localID;
- (void).cxx_destruct;
@property(readonly) BOOL isAnonymousSyncAccount;
- (id)valueOfFieldName:(id)arg1 byResolvingReloadConflictWithDatabaseValue:(id)arg2;

@end

