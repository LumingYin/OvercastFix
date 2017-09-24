//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSDictionary, NSMutableDictionary, NSURLSession;

@interface OCDownloader : NSOperationQueue <NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate>
{
    BOOL isLoggingOut;
    BOOL suspendAutoUpdates;
    BOOL isShowingDiskSpaceAlert;
    unsigned int _numberOfActiveDownloads;
    NSMutableDictionary *_resumeDataByURLString;
    NSDictionary *_episodesByURLString;
    NSURLSession *_backgroundWiFiSession;
    NSURLSession *_backgroundCellularSession;
    NSURLSession *_foregroundWiFiSession;
    NSURLSession *_foregroundCellularSession;
    CDUnknownBlockType _backgroundWiFiSessionCompletionHandler;
    CDUnknownBlockType _backgroundCellularSessionCompletionHandler;
    unsigned int _backgroundTaskToEndWhenQueueIsEmpty;
}

@property(nonatomic) unsigned int backgroundTaskToEndWhenQueueIsEmpty; // @synthesize backgroundTaskToEndWhenQueueIsEmpty=_backgroundTaskToEndWhenQueueIsEmpty;
@property(copy, nonatomic) CDUnknownBlockType backgroundCellularSessionCompletionHandler; // @synthesize backgroundCellularSessionCompletionHandler=_backgroundCellularSessionCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType backgroundWiFiSessionCompletionHandler; // @synthesize backgroundWiFiSessionCompletionHandler=_backgroundWiFiSessionCompletionHandler;
@property(retain, nonatomic) NSURLSession *foregroundCellularSession; // @synthesize foregroundCellularSession=_foregroundCellularSession;
@property(retain, nonatomic) NSURLSession *foregroundWiFiSession; // @synthesize foregroundWiFiSession=_foregroundWiFiSession;
@property(retain, nonatomic) NSURLSession *backgroundCellularSession; // @synthesize backgroundCellularSession=_backgroundCellularSession;
@property(retain, nonatomic) NSURLSession *backgroundWiFiSession; // @synthesize backgroundWiFiSession=_backgroundWiFiSession;
@property(retain, nonatomic) NSDictionary *episodesByURLString; // @synthesize episodesByURLString=_episodesByURLString;
@property(retain, nonatomic) NSMutableDictionary *resumeDataByURLString; // @synthesize resumeDataByURLString=_resumeDataByURLString;
@property(nonatomic) unsigned int numberOfActiveDownloads; // @synthesize numberOfActiveDownloads=_numberOfActiveDownloads;
- (void).cxx_destruct;
- (void)callCompletionHandlerIfFinished;
- (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)showDiskSpaceAlert;
- (void)pauseAllDownloads;
- (void)pauseDownloadsForURL:(id)arg1;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)URLStringsToDownload;
- (void)updateURLsToDownload:(id)arg1;
- (void)forceItemToDownload:(id)arg1 allowCellularEvenIfOtherwiseDisallowed:(BOOL)arg2;
- (void)endBackgroundTaskIfPresent;
- (void)beginBackgroundTask;
- (void)backgroundRefresh;
- (void)prepareForLogOut;
- (void)cellularPolicyDidChange;
- (void)kickAnyWaitingDownloads:(id)arg1;
- (void)getAllAnnotatedTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

