//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBImmersiveHeaderView.h"

@class NSDictionary, UIView, WBExtPageCardNoveltyTextView, WBExtPageCardNoveltyTitleView;

@interface WBFreshImmersiveHeaderView : WBImmersiveHeaderView
{
    NSDictionary *_object;
    UIView *_bgView;
    UIView *_sepView;
    WBExtPageCardNoveltyTitleView *_titleView;
    WBExtPageCardNoveltyTextView *_summaryView;
    UIView *_bottomView;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) WBExtPageCardNoveltyTextView *summaryView; // @synthesize summaryView=_summaryView;
@property(retain, nonatomic) WBExtPageCardNoveltyTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *sepView; // @synthesize sepView=_sepView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSDictionary *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)configHeadObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

