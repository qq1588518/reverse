//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, XMMVoteItem, XMMVoteNodeView;

@protocol XMMVoteNodeViewDelegate <NSObject>

@optional
- (void)voteNodeViewDidTapFoldButton:(XMMVoteNodeView *)arg1;
- (void)voteNodeViewDidTapExpandButton:(XMMVoteNodeView *)arg1;
- (_Bool)voteNodeViewIsFolded:(XMMVoteNodeView *)arg1;
- (void)voteNodeViewClickEditButton:(XMMVoteNodeView *)arg1;
- (void)voteNodeView:(XMMVoteNodeView *)arg1 voteItemArray:(NSArray *)arg2;
- (void)voteNodeView:(XMMVoteNodeView *)arg1 voteItem:(XMMVoteItem *)arg2;
@end

