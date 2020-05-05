//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UILabel, WBContentImageView;

@interface WBSTHotSpotsBottomView : UIView
{
    _Bool _isHiddenBottom;
    CDUnknownBlockType _hotspotSelectedBlock;
    UIView *_contentView;
    UILabel *_hotspotLabel;
    UILabel *_hotspotBottomLabel;
    UILabel *_moreHotsLabel;
    WBContentImageView *_hotIconView;
    WBContentImageView *_arrowIconView;
    NSTimer *_timer;
    NSArray *_hotList;
    long long _hotIndex;
}

@property(nonatomic) _Bool isHiddenBottom; // @synthesize isHiddenBottom=_isHiddenBottom;
@property(nonatomic) long long hotIndex; // @synthesize hotIndex=_hotIndex;
@property(copy, nonatomic) NSArray *hotList; // @synthesize hotList=_hotList;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) WBContentImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) WBContentImageView *hotIconView; // @synthesize hotIconView=_hotIconView;
@property(retain, nonatomic) UILabel *moreHotsLabel; // @synthesize moreHotsLabel=_moreHotsLabel;
@property(retain, nonatomic) UILabel *hotspotBottomLabel; // @synthesize hotspotBottomLabel=_hotspotBottomLabel;
@property(retain, nonatomic) UILabel *hotspotLabel; // @synthesize hotspotLabel=_hotspotLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType hotspotSelectedBlock; // @synthesize hotspotSelectedBlock=_hotspotSelectedBlock;
- (void).cxx_destruct;
- (void)setLableTextValue:(id)arg1;
- (void)hotspotDidSelected;
- (void)startTextAnimation;
- (void)initConstrain;
- (void)updateWithHotWordsInfo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

