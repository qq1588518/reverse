//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface WBVideoUploadListTableViewShowMoreCell : UITableViewCell
{
    UIView *_viewContent;
    UILabel *_titleLabel;
    UIImageView *_foldIconImageView;
    _Bool _isFold;
    long long _displayNum;
}

+ (double)getCellHeight;
@property(nonatomic) long long displayNum; // @synthesize displayNum=_displayNum;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

