//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, UIButton, UILabel, YXLiveUserView;

@interface YXRedPacketGrabTableViewCell : UITableViewCell
{
    NSDictionary *_model;
    YXLiveUserView *_userView;
    UILabel *_nickLabel;
    UILabel *_goldLabel;
    UIButton *_topView;
}

@property(retain, nonatomic) UIButton *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UILabel *goldLabel; // @synthesize goldLabel=_goldLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) YXLiveUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)viewUpdateConstraints;
- (void)viewInitConstraints;
- (void)initView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)setGoldLabelContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

