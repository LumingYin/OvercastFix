//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface OCArtGrid : UIView
{
    float artHeight;
    NSArray *_feedSequence;
}

@property(copy, nonatomic) NSArray *feedSequence; // @synthesize feedSequence=_feedSequence;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithArtHeight:(float)arg1;

@end

