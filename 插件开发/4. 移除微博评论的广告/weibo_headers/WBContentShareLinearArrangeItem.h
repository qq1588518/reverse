//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBUIViewItem.h"

@interface WBContentShareLinearArrangeItem : WBUIViewItem
{
    unsigned long long arrangeDirection;
    _Bool _isRootItem;
}

@property(nonatomic) _Bool isRootItem; // @synthesize isRootItem=_isRootItem;
- (void)waitCompleteWithGroupContext:(id)arg1;
- (void)asyncPrepareDrawableInDispatchGroup:(id)arg1 withConstraintWidth:(double)arg2 completeBlock:(CDUnknownBlockType)arg3 interrupt:(CDUnknownBlockType)arg4;
- (void)layoutSubitems;
- (id)initWithArrageDirection:(unsigned long long)arg1;

@end

