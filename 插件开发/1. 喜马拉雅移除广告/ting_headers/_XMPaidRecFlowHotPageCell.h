//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableArray, UIImageView, UILabel, XMVIPRankItemModel;
@protocol _XMPaidRecFlowHotSearchsPageCellDelegate;

@interface _XMPaidRecFlowHotPageCell : UICollectionViewCell
{
    NSMutableArray *_cellsArr;
    id <_XMPaidRecFlowHotSearchsPageCellDelegate> _delegate;
    UIImageView *_backImageView;
    UILabel *_moduleLabel;
    UILabel *_topLabel;
    UILabel *_updateTimeLabel;
    XMVIPRankItemModel *_model;
}

@property(retain, nonatomic) XMVIPRankItemModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *updateTimeLabel; // @synthesize updateTimeLabel=_updateTimeLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UILabel *moduleLabel; // @synthesize moduleLabel=_moduleLabel;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(nonatomic) __weak id <_XMPaidRecFlowHotSearchsPageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *cellsArr; // @synthesize cellsArr=_cellsArr;
- (void).cxx_destruct;
- (void)more:(id)arg1;
- (void)updateCellWithList:(id)arg1;
- (void)p_buttonAction:(id)arg1;
- (void)p_setUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

