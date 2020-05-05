//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseView.h"

@class UIImageView, UILabel, UITapGestureRecognizer, UIView, XMMCommunityTheme, XMMVoteItem;

@interface XMMVoteItemView : XMMBaseView
{
    _Bool _needsUpdateView;
    _Bool _selected;
    _Bool _canSelcted;
    _Bool _canTap;
    id _delegate;
    XMMVoteItem *_voteItem;
    long long _maximumVoteCount;
    XMMCommunityTheme *_theme;
    UIView *_underlayView;
    UIView *_highlightedMaskView;
    UIImageView *_selectedIcon;
    UIView *_processImageView;
    UILabel *_nameLabel;
    UILabel *_countLabel;
    UIImageView *_highlightedProcessImageView;
    UILabel *_highlightedNameLabel;
    UILabel *_highlightedCountLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (id)processImage;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UILabel *highlightedCountLabel; // @synthesize highlightedCountLabel=_highlightedCountLabel;
@property(retain, nonatomic) UILabel *highlightedNameLabel; // @synthesize highlightedNameLabel=_highlightedNameLabel;
@property(retain, nonatomic) UIImageView *highlightedProcessImageView; // @synthesize highlightedProcessImageView=_highlightedProcessImageView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *processImageView; // @synthesize processImageView=_processImageView;
@property(retain, nonatomic) UIImageView *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) UIView *highlightedMaskView; // @synthesize highlightedMaskView=_highlightedMaskView;
@property(retain, nonatomic) UIView *underlayView; // @synthesize underlayView=_underlayView;
@property(retain, nonatomic) XMMCommunityTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool canTap; // @synthesize canTap=_canTap;
@property(nonatomic) _Bool canSelcted; // @synthesize canSelcted=_canSelcted;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) long long maximumVoteCount; // @synthesize maximumVoteCount=_maximumVoteCount;
@property(retain, nonatomic) XMMVoteItem *voteItem; // @synthesize voteItem=_voteItem;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tapGesCall:(id)arg1;
- (void)layoutSubviewsWithSize:(struct CGSize)arg1;
- (void)setNeedsUpdateView;
- (void)updateView;
- (void)didInitialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

