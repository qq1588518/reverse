//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView, XMLiveRoomEntApproachInfo, XMWebImageView;

@interface XMLiveEntMyCell : UITableViewCell
{
    _Bool _showTag;
    UIView *_whiteBgView;
    XMWebImageView *_coverImageView;
    UILabel *_titleLabel;
    UIButton *_roomTag;
    XMLiveRoomEntApproachInfo *_approachInfo;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveRoomEntApproachInfo *approachInfo; // @synthesize approachInfo=_approachInfo;
@property(retain, nonatomic) UIButton *roomTag; // @synthesize roomTag=_roomTag;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *whiteBgView; // @synthesize whiteBgView=_whiteBgView;
@property(nonatomic) _Bool showTag; // @synthesize showTag=_showTag;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)addCustomedSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

