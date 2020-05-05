//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UILabel, UIView, XMFindRecFlowModel, XMTableCellObject;
@protocol XMRecFlowNewUserCardCellDelegate;

@interface XMRecFlowNewUserCardCell : UITableViewCell
{
    id <XMRecFlowNewUserCardCellDelegate> _delegate;
    UILabel *_titleLabel;
    NSMutableArray *_allCardViews;
    UIView *_rightLine;
    UIView *_leftLine;
    XMTableCellObject *_cellObject;
    XMFindRecFlowModel *_model;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMFindRecFlowModel *model; // @synthesize model=_model;
@property(nonatomic) __weak XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) NSMutableArray *allCardViews; // @synthesize allCardViews=_allCardViews;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <XMRecFlowNewUserCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)cardDidClick:(id)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

