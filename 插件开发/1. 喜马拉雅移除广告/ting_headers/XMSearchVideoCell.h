//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CAGradientLayer, NSTextAttachment, UIImageView, UILabel, XMSearchVideoModel, XMWebImageView;
@protocol XMSearchVideoCellDelegate;

@interface XMSearchVideoCell : UITableViewCell
{
    id <XMSearchVideoCellDelegate> _delegate;
    XMWebImageView *_videoImageView;
    UILabel *_videoTitleLabel;
    UILabel *_albumLabel;
    UILabel *_playCountLabel;
    UILabel *_anchorLabel;
    UILabel *_durationLabel;
    NSTextAttachment *_playcountAttach;
    NSTextAttachment *_albumAttach;
    NSTextAttachment *_anchorAttach;
    CAGradientLayer *_durationGradientLayer;
    XMSearchVideoModel *_model;
    UIImageView *_playIcon;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) XMSearchVideoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) CAGradientLayer *durationGradientLayer; // @synthesize durationGradientLayer=_durationGradientLayer;
@property(retain, nonatomic) NSTextAttachment *anchorAttach; // @synthesize anchorAttach=_anchorAttach;
@property(retain, nonatomic) NSTextAttachment *albumAttach; // @synthesize albumAttach=_albumAttach;
@property(retain, nonatomic) NSTextAttachment *playcountAttach; // @synthesize playcountAttach=_playcountAttach;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *anchorLabel; // @synthesize anchorLabel=_anchorLabel;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UILabel *albumLabel; // @synthesize albumLabel=_albumLabel;
@property(retain, nonatomic) UILabel *videoTitleLabel; // @synthesize videoTitleLabel=_videoTitleLabel;
@property(retain, nonatomic) XMWebImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(nonatomic) __weak id <XMSearchVideoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)longPress:(id)arg1;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

