//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "XMMTextNodeViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, XMAvatarView, XMMGradualCornerView, XMMShotVideoModel, XMMTextNodeView;
@protocol XMMShotVideoCellDelegate;

@interface XMMShotVideoCell : UICollectionViewCell <XMMTextNodeViewDelegate>
{
    double _width;
    XMMShotVideoModel *_model;
    id <XMMShotVideoCellDelegate> _delegate;
    UIButton *_coverImageBtn;
    UIImageView *_coverImageView;
    UIImageView *_playCountImage;
    UILabel *_playCountLabel;
    XMMTextNodeView *_titleLabel;
    XMAvatarView *_avatarImageView;
    UILabel *_userNameLabel;
    UIButton *_praiseBtn;
    XMMGradualCornerView *_gradualView;
    UIButton *_userBtn;
}

+ (id)identifier;
+ (double)heightWithWidth:(double)arg1 coverSize:(struct CGSize)arg2 textNodeViewLayout:(id)arg3;
+ (double)coverWidthWithWidth:(double)arg1;
+ (double)titleWidthWithWidth:(double)arg1;
@property(retain, nonatomic) UIButton *userBtn; // @synthesize userBtn=_userBtn;
@property(retain, nonatomic) XMMGradualCornerView *gradualView; // @synthesize gradualView=_gradualView;
@property(retain, nonatomic) UIButton *praiseBtn; // @synthesize praiseBtn=_praiseBtn;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) XMAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) XMMTextNodeView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UIImageView *playCountImage; // @synthesize playCountImage=_playCountImage;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIButton *coverImageBtn; // @synthesize coverImageBtn=_coverImageBtn;
@property(nonatomic) __weak id <XMMShotVideoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMMShotVideoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)updatePraiseBtnDisplay;
- (void)didSetModel;
- (void)praiseBtnAction:(id)arg1;
- (void)userBtnAction;
- (void)coverImageViewAction;
- (void)textNodeView:(id)arg1 didTapBookMark:(id)arg2 range:(struct _NSRange)arg3;
- (void)textNodeViewDidClickMoreText:(id)arg1;
- (void)textNodeView:(id)arg1 didTapTopic:(unsigned long long)arg2 linkUrl:(id)arg3;
- (void)remakeCoverImageWithHeight:(double)arg1;
- (void)remakeTitleLabelWithHeight:(double)arg1;
- (void)resetContentPriority;
- (void)custominit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

