//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStatusSubViewModel.h"

@class NSArray, WBTimelineAttributedText;

@interface WBStatusFooterViewModel : WBStatusSubViewModel
{
    WBTimelineAttributedText *_likeSummaryAttributedText;
    WBTimelineAttributedText *_forwardSummaryAttributedText;
    NSArray *_forwardSummaryAttributedTextArray;
    NSArray *_forwardSummaryAttributedTextFrameArray;
    NSArray *_commentSummaryAttributedTextArray;
    NSArray *_commentSummaryAttributedTextFrameArray;
    WBTimelineAttributedText *_commentCountSummaryAttributedText;
    double _rollingUnionAreaTableViewInitialOffset;
    NSArray *_recentCommentTextFrames;
    NSArray *_recentCommentAttributedTexts;
    double _textY;
    double _recordEndH;
    struct CGRect _likeSummaryIconFrame;
    struct CGRect _likeSummaryAttributedTextFrame;
    struct CGRect _forwardSummaryIconFrame;
    struct CGRect _forwardSummaryAttributedTextFrame;
    struct CGRect _commmentSummaryIconFrame;
    struct CGRect _commentCountSummaryAttributedTextFrame;
    struct CGRect _likeSummaryFrame;
    struct CGRect _forwardSummaryFrame;
    struct CGRect _commentSummaryFrame;
    struct CGRect _rollingUnionAreaFrame;
    struct CGRect _recentCommentsFrame;
    struct CGRect _commentGuideFrame;
    struct CGRect _actionButtonsViewFrame;
    struct CGRect _actionButtonBottomLineFrame;
}

@property(nonatomic) struct CGRect actionButtonBottomLineFrame; // @synthesize actionButtonBottomLineFrame=_actionButtonBottomLineFrame;
@property(nonatomic) struct CGRect actionButtonsViewFrame; // @synthesize actionButtonsViewFrame=_actionButtonsViewFrame;
@property(nonatomic) struct CGRect commentGuideFrame; // @synthesize commentGuideFrame=_commentGuideFrame;
@property(nonatomic) double recordEndH; // @synthesize recordEndH=_recordEndH;
@property(nonatomic) double textY; // @synthesize textY=_textY;
@property(retain, nonatomic) NSArray *recentCommentAttributedTexts; // @synthesize recentCommentAttributedTexts=_recentCommentAttributedTexts;
@property(retain, nonatomic) NSArray *recentCommentTextFrames; // @synthesize recentCommentTextFrames=_recentCommentTextFrames;
@property(nonatomic) struct CGRect recentCommentsFrame; // @synthesize recentCommentsFrame=_recentCommentsFrame;
@property(nonatomic) double rollingUnionAreaTableViewInitialOffset; // @synthesize rollingUnionAreaTableViewInitialOffset=_rollingUnionAreaTableViewInitialOffset;
@property(nonatomic) struct CGRect rollingUnionAreaFrame; // @synthesize rollingUnionAreaFrame=_rollingUnionAreaFrame;
@property(nonatomic) struct CGRect commentSummaryFrame; // @synthesize commentSummaryFrame=_commentSummaryFrame;
@property(nonatomic) struct CGRect forwardSummaryFrame; // @synthesize forwardSummaryFrame=_forwardSummaryFrame;
@property(nonatomic) struct CGRect likeSummaryFrame; // @synthesize likeSummaryFrame=_likeSummaryFrame;
@property(retain, nonatomic) WBTimelineAttributedText *commentCountSummaryAttributedText; // @synthesize commentCountSummaryAttributedText=_commentCountSummaryAttributedText;
@property(nonatomic) struct CGRect commentCountSummaryAttributedTextFrame; // @synthesize commentCountSummaryAttributedTextFrame=_commentCountSummaryAttributedTextFrame;
@property(retain, nonatomic) NSArray *commentSummaryAttributedTextFrameArray; // @synthesize commentSummaryAttributedTextFrameArray=_commentSummaryAttributedTextFrameArray;
@property(retain, nonatomic) NSArray *commentSummaryAttributedTextArray; // @synthesize commentSummaryAttributedTextArray=_commentSummaryAttributedTextArray;
@property(nonatomic) struct CGRect commmentSummaryIconFrame; // @synthesize commmentSummaryIconFrame=_commmentSummaryIconFrame;
@property(nonatomic) struct CGRect forwardSummaryAttributedTextFrame; // @synthesize forwardSummaryAttributedTextFrame=_forwardSummaryAttributedTextFrame;
@property(retain, nonatomic) NSArray *forwardSummaryAttributedTextFrameArray; // @synthesize forwardSummaryAttributedTextFrameArray=_forwardSummaryAttributedTextFrameArray;
@property(retain, nonatomic) NSArray *forwardSummaryAttributedTextArray; // @synthesize forwardSummaryAttributedTextArray=_forwardSummaryAttributedTextArray;
@property(nonatomic) struct CGRect forwardSummaryIconFrame; // @synthesize forwardSummaryIconFrame=_forwardSummaryIconFrame;
@property(retain, nonatomic) WBTimelineAttributedText *forwardSummaryAttributedText; // @synthesize forwardSummaryAttributedText=_forwardSummaryAttributedText;
@property(nonatomic) struct CGRect likeSummaryAttributedTextFrame; // @synthesize likeSummaryAttributedTextFrame=_likeSummaryAttributedTextFrame;
@property(nonatomic) struct CGRect likeSummaryIconFrame; // @synthesize likeSummaryIconFrame=_likeSummaryIconFrame;
@property(retain, nonatomic) WBTimelineAttributedText *likeSummaryAttributedText; // @synthesize likeSummaryAttributedText=_likeSummaryAttributedText;
- (void).cxx_destruct;
- (Class)viewClass;
- (Class)tableViewCellClass;
- (double)contentHeight;
- (id)actionButtonTopLineFrameColor;
- (_Bool)shouldShowActionButtonTopLine;
- (struct CGRect)actionButtonTopLineFrame;
- (void)applyOffsetY:(double)arg1;
- (void)recoverOffsetY;
- (id)keyPathsThatAffectLayout;
- (id)recentCommentAttributedTextsWithStringArray:(id)arg1 commentNumberLimit:(long long)arg2;
- (id)forwardStatusAttributedTextsOfUnionAreaFrom:(id)arg1;
- (id)stringRepresentationForNumber:(long long)arg1;
- (void)updateViewModel;
- (double)updateViewModelWithNoSubViewModel;
- (double)internalUpdateViewModel;
- (double)updateViewModelForRecentComments;
- (double)updateViewModelForRollingUnionArea;
- (double)updateViewModelForUnionArea;
- (void)preLoadFootActonButtonsImages;
- (id)initWithStatus:(id)arg1 contentWidth:(double)arg2 superViewModel:(id)arg3 extraInfo:(id)arg4;

@end

