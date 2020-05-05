//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMFindFlowWhiteBackTableViewCell.h"

@class NSMutableArray, UIButton, UIImageView, UILabel, UIView, XMSingleSpecialModel, XMTableCellObject, XMWebImageView;
@protocol XMCategoryRecSpecialsCellDelegate, XMLongPressProtocol;

@interface XMCategoryRecSpecialsCell : XMFindFlowWhiteBackTableViewCell
{
    id <XMCategoryRecSpecialsCellDelegate> _delegate;
    UIView *_backView;
    XMWebImageView *_coverImageView;
    UIImageView *_tagImageView;
    UILabel *_tagLabel;
    UILabel *_titleLabel;
    UILabel *_moreLabel;
    UIImageView *_moreImageView;
    UIButton *_moreButton;
    UIView *_warpView;
    NSMutableArray *_arrayV;
    XMSingleSpecialModel *_specialModel;
    XMTableCellObject *_cellObject;
    double _scale;
    id <XMLongPressProtocol> _longPressDelegate;
}

+ (double)itemWidth;
+ (double)itemW;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
+ (id)cellObjectWithCellModel:(id)arg1 customDelegate:(id)arg2;
@property(nonatomic) __weak id <XMLongPressProtocol> longPressDelegate; // @synthesize longPressDelegate=_longPressDelegate;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(retain, nonatomic) XMSingleSpecialModel *specialModel; // @synthesize specialModel=_specialModel;
@property(retain, nonatomic) NSMutableArray *arrayV; // @synthesize arrayV=_arrayV;
@property(retain, nonatomic) UIView *warpView; // @synthesize warpView=_warpView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIImageView *moreImageView; // @synthesize moreImageView=_moreImageView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak id <XMCategoryRecSpecialsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)cardsView;
- (void)p_makeConstraints;
- (void)p_setUI;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)p_longPress:(id)arg1;
- (void)moreDidClick;
- (void)cardViewDidClick:(id)arg1;
- (void)setCardArray:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

