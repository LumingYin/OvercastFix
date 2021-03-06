//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class OCStyledLabel, UIImageView;

@interface OCRecommendedEpisodeCell : UITableViewCell
{
    UIImageView *_artworkImage;
    UIImageView *_recommenderAvatarImage;
    OCStyledLabel *_feedTitleLabel;
    OCStyledLabel *_itemTitleLabel;
    OCStyledLabel *_recommenderLabel;
}

@property(retain, nonatomic) OCStyledLabel *recommenderLabel; // @synthesize recommenderLabel=_recommenderLabel;
@property(retain, nonatomic) OCStyledLabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(retain, nonatomic) OCStyledLabel *feedTitleLabel; // @synthesize feedTitleLabel=_feedTitleLabel;
@property(retain, nonatomic) UIImageView *recommenderAvatarImage; // @synthesize recommenderAvatarImage=_recommenderAvatarImage;
@property(retain, nonatomic) UIImageView *artworkImage; // @synthesize artworkImage=_artworkImage;
- (void).cxx_destruct;
- (void)configureWithFeedItem:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

