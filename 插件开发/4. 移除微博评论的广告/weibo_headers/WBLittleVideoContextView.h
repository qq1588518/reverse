//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "WBLittleVideoStoryAttributedExpandableTextViewDelegate-Protocol.h"

@class NSString, WBLittleVideoStoryAttributedExpandableTextView;

@interface WBLittleVideoContextView : UIControl <WBLittleVideoStoryAttributedExpandableTextViewDelegate>
{
    WBLittleVideoStoryAttributedExpandableTextView *_textContentView;
    CDUnknownBlockType _fullTextblock;
}

@property(copy, nonatomic) CDUnknownBlockType fullTextblock; // @synthesize fullTextblock=_fullTextblock;
@property(retain, nonatomic) WBLittleVideoStoryAttributedExpandableTextView *textContentView; // @synthesize textContentView=_textContentView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)storyAttributedExpandableTextViewDidExpand:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

