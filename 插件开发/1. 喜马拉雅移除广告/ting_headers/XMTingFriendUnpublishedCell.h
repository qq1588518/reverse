//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface XMTingFriendUnpublishedCell : UITableViewCell
{
    UIImageView *_failedImg;
    UILabel *_failedLabel;
    UIImageView *_more;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UIImageView *more; // @synthesize more=_more;
@property(retain, nonatomic) UILabel *failedLabel; // @synthesize failedLabel=_failedLabel;
@property(retain, nonatomic) UIImageView *failedImg; // @synthesize failedImg=_failedImg;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)layout;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

