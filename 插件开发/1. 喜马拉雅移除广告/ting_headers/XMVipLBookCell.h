//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIButton, XMBaseLayout, XMVipChannelBookItem;
@protocol XMVipLBookCellDelegate;

@interface XMVipLBookCell : XMTableViewCell
{
    XMBaseLayout *_layout;
    id <XMVipLBookCellDelegate> _delegate;
    long long _status;
}

+ (id)placeholder;
+ (id)getShadowImage;
+ (id)layoutWithTrack:(id)arg1;
+ (id)cellObjectWithTrack:(id)arg1;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <XMVipLBookCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMBaseLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)buttonClick:(id)arg1;
- (void)endPlayLoading;
- (void)startPlayLoading;
- (void)setPlayButtonTitleWithStatus:(long long)arg1;
- (void)playerStatusChange:(long long)arg1 andCurrentTrack:(id)arg2;
- (id)bookItem;
- (void)loadData;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) UIButton *playIcon;
@property(readonly, nonatomic) XMVipChannelBookItem *track;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

