//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISegmentedControl.h"

@interface OCSegmentedControlBar : UISegmentedControl
{
    int _selectedSegmentBeforeCurrentEvent;
}

@property(nonatomic) int selectedSegmentBeforeCurrentEvent; // @synthesize selectedSegmentBeforeCurrentEvent=_selectedSegmentBeforeCurrentEvent;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)setAppearance;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

