//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

#import "AlbumItemDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel;

@interface WBPageCardAlbumItemsView : WBPageCardViewBase <AlbumItemDelegate>
{
    NSMutableArray *itemViews;
    long long _showType;
    long long _topPaddingType;
    long long _bottomPaddingType;
    UILabel *_monthLabel;
    UILabel *_yearLabel;
    long long _layoutStyle;
}

+ (_Bool)allowCustomBubbleLayout;
+ (struct UIEdgeInsets)edgeInsetsViewOutside:(id)arg1;
+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (_Bool)allowBubble;
+ (double)heightOfDataObject:(id)arg1;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) UILabel *yearLabel; // @synthesize yearLabel=_yearLabel;
@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(nonatomic) long long bottomPaddingType; // @synthesize bottomPaddingType=_bottomPaddingType;
@property(nonatomic) long long topPaddingType; // @synthesize topPaddingType=_topPaddingType;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
- (void).cxx_destruct;
- (void)pressedAlbumItem:(id)arg1;
- (void)layoutSubviews;
- (void)setPageCard:(id)arg1;
- (void)reloadUIElements;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

