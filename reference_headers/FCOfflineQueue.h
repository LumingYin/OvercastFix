//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

@class FCReachability, FMDatabaseQueue;

@interface FCOfflineQueue : NSOperationQueue
{
    FCReachability *_reachability;
    FMDatabaseQueue *_databaseQueue;
}

+ (BOOL)operationAllowsMultipleEntries:(long long)arg1;
+ (BOOL)operationPersistsBetweenLaunches:(long long)arg1;
+ (id)expandQuery:(id)arg1;
@property(retain, nonatomic) FMDatabaseQueue *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(retain, nonatomic) FCReachability *reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
- (BOOL)shouldResume;
- (void)didPause;
- (void)didResume;
- (void)didLaunch;
- (BOOL)executeOperation:(long long)arg1 userInfo:(id)arg2;
- (void)setSuspended:(BOOL)arg1;
- (void)_enqueueOperationForID:(long long)arg1 opcode:(long long)arg2 userInfo:(id)arg3 highPriority:(BOOL)arg4;
- (void)enqueueOfflineOperation:(long long)arg1 userInfo:(id)arg2 highPriority:(BOOL)arg3;
- (void)enqueueOfflineOperation:(long long)arg1 userInfo:(id)arg2;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)initWithReachabilityHostname:(id)arg1 allowCellular:(BOOL)arg2 launchDelay:(double)arg3;
- (void)tryToResume:(id)arg1;

@end

