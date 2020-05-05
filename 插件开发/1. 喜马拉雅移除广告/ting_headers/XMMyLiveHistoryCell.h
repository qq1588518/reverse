//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveTableViewCell.h"

@class UIButton, UIImageView, UILabel, XMLiveRoomApproachInfo, XMWebImageView;
@protocol XMMyLiveHistoryCellDelegate;

@interface XMMyLiveHistoryCell : XMLiveTableViewCell
{
    XMWebImageView *_coverImgView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIButton *_menuBtn;
    UIImageView *_numberTagView;
    UILabel *_numberLabel;
    UIImageView *_dateTagView;
    UILabel *_dateLabel;
    id <XMMyLiveHistoryCellDelegate> _delegate;
    XMLiveRoomApproachInfo *_historyItem;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveRoomApproachInfo *historyItem; // @synthesize historyItem=_historyItem;
@property(nonatomic) __weak id <XMMyLiveHistoryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMenuButtonClicked;
- (void)layoutSubviews;
- (void)customInitView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

