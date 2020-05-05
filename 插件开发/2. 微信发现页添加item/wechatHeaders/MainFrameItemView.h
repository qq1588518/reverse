//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMBadgeView, MMCPLabel, MMGroupView, MMHeadImageView, MainFrameCellData, UIImageView, UILabel;

@interface MainFrameItemView : UIView
{
    MainFrameCellData *m_cellData;
    MMHeadImageView *m_frameHeadView;
    MMBadgeView *m_unreadCountView;
    MMCPLabel *m_nameLabel;
    MMCPLabel *m_descPostfix;
    UIImageView *m_namePostIconView;
    UILabel *m_timeLabel;
    UILabel *m_greenLabel;
    UIImageView *m_statusView;
    MMCPLabel *m_messageLabel;
    UIImageView *m_chatNotPushView;
    UIImageView *m_trackRoomTipsView;
    UIImageView *m_multiTalkIconView;
    UIImageView *m_multiTalkingView;
    UIImageView *m_starView;
    UIImageView *m_strongNotifactionIconView;
    MMGroupView *m_groupView;
}

@property(retain, nonatomic) UIImageView *m_statusView; // @synthesize m_statusView;
@property(retain, nonatomic) MainFrameCellData *m_cellData; // @synthesize m_cellData;
@property(retain, nonatomic) MMCPLabel *m_messageLabel; // @synthesize m_messageLabel;
@property(retain, nonatomic) UILabel *m_timeLabel; // @synthesize m_timeLabel;
@property(retain, nonatomic) MMCPLabel *m_nameLabel; // @synthesize m_nameLabel;
@property(retain, nonatomic) MMHeadImageView *m_frameHeadView; // @synthesize m_frameHeadView;
- (void).cxx_destruct;
- (void)setLabelHighlighted:(_Bool)arg1;
- (void)updateWithCellData:(id)arg1;
- (void)updateBackgroundColor;
- (void)updateStatusView;
- (_Bool)isShowPluginStatus;
- (void)updateUnreadCountView;
- (void)updateHeadView;
- (void)quoteMessageLable:(id)arg1 prefixText:(id)arg2 hasStar:(_Bool)arg3;
- (void)updateStarView;
- (void)updateMessageForBrandHolder;
- (void)updateMessageForSingle;
- (void)updateMessageForChatRoom;
- (void)updateMessageLabel;
- (void)updateNoneVoiceGreenLabelAndMsgLabel;
- (void)removeQuoteMessageLabel;
- (void)quoteMessageLable:(id)arg1 prefixText:(id)arg2;
- (void)updateGroupView;
- (void)updateNameLabel;
- (id)getLabelNameColor;
- (void)updateTimeLabel;
- (void)updateTimeForTimer;
- (void)layoutSubviews;
- (void)initSubview;
- (void)initGroupView;
- (void)initNamePostIconView;
- (void)initDescLabel;
- (void)initNameLabel;
- (id)initWithCellData:(id)arg1 frame:(struct CGRect)arg2;

@end

