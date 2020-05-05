//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol XMMyCenterPayAlbumCommentListHeaderViewDelegate;

@interface XMMyCenterPayAlbumCommentListHeaderView : UIView
{
    id <XMMyCenterPayAlbumCommentListHeaderViewDelegate> _delegate;
    UILabel *_commentCountLB;
    UIButton *_sortBtn;
    UIImageView *_sortIV;
}

@property(retain, nonatomic) UIImageView *sortIV; // @synthesize sortIV=_sortIV;
@property(retain, nonatomic) UIButton *sortBtn; // @synthesize sortBtn=_sortBtn;
@property(retain, nonatomic) UILabel *commentCountLB; // @synthesize commentCountLB=_commentCountLB;
@property(nonatomic) __weak id <XMMyCenterPayAlbumCommentListHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCommentCount:(long long)arg1;
- (void)updateSortTitle:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)sortBtnTouch:(id)arg1;
- (id)initWithCommentCounts:(long long)arg1;
- (void)dealloc;

@end

