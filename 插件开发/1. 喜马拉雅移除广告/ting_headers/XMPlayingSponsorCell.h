//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class NSArray, NSMutableArray, UIButton, UIImageView, UILabel, UIView;
@protocol XMPlayingSponsorCellDelegate;

@interface XMPlayingSponsorCell : XMTableViewCell
{
    long long _totalCount;
    id <XMPlayingSponsorCellDelegate> _delegate;
    UIView *_topLine;
    UIButton *_sponsorListButton;
    UIImageView *_pushImageView;
    UILabel *_titleLabel;
    UIView *_lineView;
    UIButton *_sponsorPopButton;
    NSMutableArray *_buttonArr;
    NSArray *_itemsArr;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) NSArray *itemsArr; // @synthesize itemsArr=_itemsArr;
@property(retain, nonatomic) NSMutableArray *buttonArr; // @synthesize buttonArr=_buttonArr;
@property(retain, nonatomic) UIButton *sponsorPopButton; // @synthesize sponsorPopButton=_sponsorPopButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *pushImageView; // @synthesize pushImageView=_pushImageView;
@property(retain, nonatomic) UIButton *sponsorListButton; // @synthesize sponsorListButton=_sponsorListButton;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) __weak id <XMPlayingSponsorCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)__configTitleSponsors;
- (void)__configSponsors;
- (void)__showSponsorPopView;
- (void)__showSponsorList;
- (void)__setConstraints;
- (void)__setUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

