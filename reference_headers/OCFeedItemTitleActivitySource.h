//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActivityItemSource.h"

@class OCFeedItem;

@interface OCFeedItemTitleActivitySource : NSObject <UIActivityItemSource>
{
    OCFeedItem *_feedItem;
}

@property(retain, nonatomic) OCFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;

@end

