//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseCell.h"

@class UILabel, XMAvatarView, XMBBSIntimateQuestionCellLayout, YYLabel;

@interface XMBBSIntimateQuestionCell : XMMBaseCell
{
    XMAvatarView *_headerView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    YYLabel *_questionLabel;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) YYLabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMAvatarView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)clickHeadView:(id)arg1;
@property(retain, nonatomic) XMBBSIntimateQuestionCellLayout *layout; // @dynamic layout;
- (void)didInitialize;

@end

