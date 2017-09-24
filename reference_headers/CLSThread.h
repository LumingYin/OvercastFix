//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface CLSThread : NSObject
{
    NSString *_pthreadName;
    NSString *_dispatchQueueName;
    NSArray *_frames;
    NSDictionary *_registers;
    unsigned int _importance;
}

@property(nonatomic) unsigned int importance; // @synthesize importance=_importance;
@property(retain, nonatomic) NSDictionary *registers; // @synthesize registers=_registers;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(copy, nonatomic) NSString *dispatchQueueName; // @synthesize dispatchQueueName=_dispatchQueueName;
@property(copy, nonatomic) NSString *pthreadName; // @synthesize pthreadName=_pthreadName;
@property(nonatomic) BOOL crashed;
- (void)dealloc;

@end

