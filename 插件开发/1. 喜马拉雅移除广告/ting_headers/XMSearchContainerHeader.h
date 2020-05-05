//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIColor, UIFont, UILabel, XMSearchHotWordModel;
@protocol XMSearchContainerHeaderDelegate;

@interface XMSearchContainerHeader : UIView
{
    _Bool _showAllHistory;
    id <XMSearchContainerHeaderDelegate> _delegate;
    double _bottomInsetSpace;
    UILabel *_historyTitleLabel;
    UILabel *_recTitleLabel;
    UIButton *_deleteButton;
    NSArray *_historyModels;
    NSArray *_recModels;
    UIFont *_titleFont;
    UIColor *_titleColor;
    UIFont *_buttonFont;
    UIColor *_buttonTextColor;
    UIColor *_buttonBgColor;
    double _buttonH;
    double _fitHeight;
    XMSearchHotWordModel *_liveModel;
}

@property(retain, nonatomic) XMSearchHotWordModel *liveModel; // @synthesize liveModel=_liveModel;
@property(nonatomic) double fitHeight; // @synthesize fitHeight=_fitHeight;
@property(nonatomic) _Bool showAllHistory; // @synthesize showAllHistory=_showAllHistory;
@property(nonatomic) double buttonH; // @synthesize buttonH=_buttonH;
@property(retain, nonatomic) UIColor *buttonBgColor; // @synthesize buttonBgColor=_buttonBgColor;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) UIFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSArray *recModels; // @synthesize recModels=_recModels;
@property(retain, nonatomic) NSArray *historyModels; // @synthesize historyModels=_historyModels;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *recTitleLabel; // @synthesize recTitleLabel=_recTitleLabel;
@property(retain, nonatomic) UILabel *historyTitleLabel; // @synthesize historyTitleLabel=_historyTitleLabel;
@property(nonatomic) double bottomInsetSpace; // @synthesize bottomInsetSpace=_bottomInsetSpace;
@property(nonatomic) __weak id <XMSearchContainerHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)historyButtonDidClick:(id)arg1;
- (void)unFoldButtonDidClick;
- (void)recButtonDidClick:(id)arg1;
- (void)liveButtonDidClick:(id)arg1;
- (void)deleteDidClick;
- (id)updateTagLabel;
- (id)liveButtonWithModel:(id)arg1;
- (void)rebuildRecSearch;
- (void)rebuildHistory;
- (void)reloadHistoryModels:(id)arg1 searchRecModels:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

