//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

#import "FreshNewsKeywordSetViewDelegate-Protocol.h"

@class FreshNewsKeywordSetView, NSMutableArray, NSString;
@protocol FreshNewsKeywordSetTableViewCellDelegate;

@interface FreshNewsKeywordSetTableViewCell : WBTableViewCell <FreshNewsKeywordSetViewDelegate>
{
    NSMutableArray *_currentChannels;
    long long _type;
    id <FreshNewsKeywordSetTableViewCellDelegate> _delegate;
    FreshNewsKeywordSetView *_keywordView;
}

+ (double)cellHeightWithArray:(id)arg1;
@property(retain, nonatomic) FreshNewsKeywordSetView *keywordView; // @synthesize keywordView=_keywordView;
@property(nonatomic) id <FreshNewsKeywordSetTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *currentChannels; // @synthesize currentChannels=_currentChannels;
- (void).cxx_destruct;
- (void)didClickDeleteButton:(id)arg1;
- (void)didClickAddButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

