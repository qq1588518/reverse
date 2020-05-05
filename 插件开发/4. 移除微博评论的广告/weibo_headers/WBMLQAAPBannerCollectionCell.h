//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, UILabel, UIView, WBMLQAAPBannerThemeView, WBMLQAActivePageBannerItemModel, WBMLStrokeButton;

@interface WBMLQAAPBannerCollectionCell : UICollectionViewCell
{
    NSIndexPath *_indexPath;
    CDUnknownBlockType _clickBlock;
    WBMLQAActivePageBannerItemModel *_sceneModel;
    UIView *_bgView;
    WBMLQAAPBannerThemeView *_themeLabel;
    UILabel *_dateLabel;
    UILabel *_timeLabel;
    UILabel *_awardFrontLabel;
    UILabel *_awardLabel;
    UILabel *_awardAfterLabel;
    WBMLStrokeButton *_reserveBtn;
    UILabel *_noticeLabel;
}

@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) WBMLStrokeButton *reserveBtn; // @synthesize reserveBtn=_reserveBtn;
@property(retain, nonatomic) UILabel *awardAfterLabel; // @synthesize awardAfterLabel=_awardAfterLabel;
@property(retain, nonatomic) UILabel *awardLabel; // @synthesize awardLabel=_awardLabel;
@property(retain, nonatomic) UILabel *awardFrontLabel; // @synthesize awardFrontLabel=_awardFrontLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) WBMLQAAPBannerThemeView *themeLabel; // @synthesize themeLabel=_themeLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) WBMLQAActivePageBannerItemModel *sceneModel; // @synthesize sceneModel=_sceneModel;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)actionWithSender:(id)arg1;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

