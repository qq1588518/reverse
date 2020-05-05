//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UILabel, XMSingleSpecialModel, XMTableCellObject, XMWebImageView;
@protocol XMCategoryRecSpecialCellDelegate;

@interface XMCategoryRecSpecialCell : UITableViewCell
{
    id <XMCategoryRecSpecialCellDelegate> _delegate;
    XMWebImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_footnoteLabel;
    NSMutableArray *_arrayV;
    XMSingleSpecialModel *_specialModel;
    XMTableCellObject *_cellObject;
}

+ (double)itemW;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(retain, nonatomic) XMSingleSpecialModel *specialModel; // @synthesize specialModel=_specialModel;
@property(retain, nonatomic) NSMutableArray *arrayV; // @synthesize arrayV=_arrayV;
@property(retain, nonatomic) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak id <XMCategoryRecSpecialCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)specialCoverView;
- (id)cardsView;
- (void)setup;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)moreDidClick;
- (void)cardViewDidClick:(id)arg1;
- (void)setCardArray:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

