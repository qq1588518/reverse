//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class UIControl, UILabel, WBContentImageView, WBTimelineAttributedText, WBTimelineAttributedTextView, WBVideoHotVideoSubCard;

@interface WBVideoHotVideoSubCardView : WBPageCardViewBase
{
    WBVideoHotVideoSubCard *_hotVideoSubCard;
    WBContentImageView *_vieoImageView;
    WBTimelineAttributedTextView *_titleView;
    WBTimelineAttributedText *_titleText;
    UILabel *_timeLabel;
    UILabel *_playCoutLabel;
    UILabel *_reasonLabel;
    UILabel *_nameLabel;
    UIControl *_contentView;
}

+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (double)heightOfDataObject:(id)arg1;
+ (void)load;
@property(retain, nonatomic) UIControl *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(retain, nonatomic) UILabel *playCoutLabel; // @synthesize playCoutLabel=_playCoutLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) WBTimelineAttributedText *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) WBTimelineAttributedTextView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WBContentImageView *vieoImageView; // @synthesize vieoImageView=_vieoImageView;
@property(retain, nonatomic) WBVideoHotVideoSubCard *hotVideoSubCard; // @synthesize hotVideoSubCard=_hotVideoSubCard;
- (void).cxx_destruct;
- (void)goToOtherPage:(id)arg1;
- (id)title;
- (long long)selectionCellStyle;
- (void)setPageCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)workingAreaCustomHashID;
- (unsigned long long)wbvideo_sceneType;
- (id)mediaExposureExtraLogParameters;
- (id)mediaExposureStatus;
- (id)mediaExposureAnalysisPageInfo;
- (id)mediaExposureItem;
- (unsigned long long)observerOptions;

@end

