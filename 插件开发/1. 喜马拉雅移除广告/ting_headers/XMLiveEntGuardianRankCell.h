//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, XMLiveGuardianRankInfo, XMWebImageView;

@interface XMLiveEntGuardianRankCell : UITableViewCell
{
    XMLiveGuardianRankInfo *_info;
    UILabel *_nicknameLabel;
    XMWebImageView *_guardianTagView;
    UILabel *_timeLabel;
    XMWebImageView *_avatarView;
    UILabel *_rankLabel;
    UIImageView *_rankImage;
    UILabel *_charmLabel;
    UILabel *_invisibleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *invisibleLabel; // @synthesize invisibleLabel=_invisibleLabel;
@property(retain, nonatomic) UILabel *charmLabel; // @synthesize charmLabel=_charmLabel;
@property(retain, nonatomic) UIImageView *rankImage; // @synthesize rankImage=_rankImage;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) XMWebImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) XMWebImageView *guardianTagView; // @synthesize guardianTagView=_guardianTagView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) XMLiveGuardianRankInfo *info; // @synthesize info=_info;
- (void)awakeFromNib;
- (id)remainMills:(unsigned long long)arg1;
- (void)_baseInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

