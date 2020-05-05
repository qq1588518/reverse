//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UILabel, UIScrollView, XMSearchSpecialModel;
@protocol XMSpecialAnchorListCellDelegate;

@interface XMSpecialAnchorListCell : UITableViewCell
{
    id <XMSpecialAnchorListCellDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    XMSearchSpecialModel *_model;
    UIScrollView *_scrollView;
    NSMutableArray *_anchorViews;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) NSMutableArray *anchorViews; // @synthesize anchorViews=_anchorViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) XMSearchSpecialModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <XMSpecialAnchorListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)moreDidClick;
- (void)anchorDidClick:(id)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

