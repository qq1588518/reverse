//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

#import "WBVideoMyVideoListCarouselViewDelegate-Protocol.h"

@class NSString, UIControl, UIImageView, UILabel, UIView, WBVideoMyVideoListCarouselView, WBVideoMyVideoListSectionView, WBVideoMyVideoModel;
@protocol WBVideoMyVideoTableViewCellDelegate;

@interface WBVideoMyVideoTableViewCell : WBTableViewCell <WBVideoMyVideoListCarouselViewDelegate>
{
    _Bool _isMoreListItemClick;
    WBVideoMyVideoModel *_myVideoModel;
    id <WBVideoMyVideoTableViewCellDelegate> _delegaate;
    UIControl *_headerView;
    UILabel *_titleLabel;
    UIImageView *_tagImageView;
    UIImageView *_arrowImageView;
    WBVideoMyVideoListCarouselView *_myVideoListCarouselView;
    UIView *_lineView;
    WBVideoMyVideoListSectionView *_sectionView;
    UILabel *_redLabel;
}

@property(retain, nonatomic) UILabel *redLabel; // @synthesize redLabel=_redLabel;
@property(retain, nonatomic) WBVideoMyVideoListSectionView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) WBVideoMyVideoListCarouselView *myVideoListCarouselView; // @synthesize myVideoListCarouselView=_myVideoListCarouselView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIControl *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <WBVideoMyVideoTableViewCellDelegate> delegaate; // @synthesize delegaate=_delegaate;
@property(retain, nonatomic) WBVideoMyVideoModel *myVideoModel; // @synthesize myVideoModel=_myVideoModel;
@property(nonatomic) _Bool isMoreListItemClick; // @synthesize isMoreListItemClick=_isMoreListItemClick;
- (void).cxx_destruct;
- (void)videoMyVideoListCarouselView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)usesCustomSelectedBackgroundView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)headerViewAction;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

