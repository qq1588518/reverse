//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UITableView, WBFilterDropDownMenuController, WBFilterDropDownMenuManager;

@interface WBFilterDropDownMenu : UIView
{
    double menuWidth;
    _Bool _show;
    _Bool _hadSelected;
    WBFilterDropDownMenuManager *filterManager;
    WBFilterDropDownMenuController *filterController;
    UITableView *_leftTableView;
    UITableView *_rightTableView;
    UIColor *_indicatorColor;
    UIColor *_textColor;
    UIColor *_separatorColor;
    long long _currentSelectedMenudIndex;
    long long _numOfMenu;
    UIView *_backGroundView;
    UIView *_bottomShadow;
    NSArray *_array;
    NSArray *_titles;
    NSArray *_indicators;
    NSArray *_bgLayers;
    NSArray *_separators;
    long long _leftSelectedRow;
    struct CGPoint _origin;
}

@property(nonatomic) _Bool hadSelected; // @synthesize hadSelected=_hadSelected;
@property(nonatomic) long long leftSelectedRow; // @synthesize leftSelectedRow=_leftSelectedRow;
@property(copy, nonatomic) NSArray *separators; // @synthesize separators=_separators;
@property(copy, nonatomic) NSArray *bgLayers; // @synthesize bgLayers=_bgLayers;
@property(copy, nonatomic) NSArray *indicators; // @synthesize indicators=_indicators;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSArray *array; // @synthesize array=_array;
@property(retain, nonatomic) UIView *bottomShadow; // @synthesize bottomShadow=_bottomShadow;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) long long numOfMenu; // @synthesize numOfMenu=_numOfMenu;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(nonatomic) long long currentSelectedMenudIndex; // @synthesize currentSelectedMenudIndex=_currentSelectedMenudIndex;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(retain, nonatomic) UITableView *rightTableView; // @synthesize rightTableView=_rightTableView;
@property(retain, nonatomic) UITableView *leftTableView; // @synthesize leftTableView=_leftTableView;
@property(retain, nonatomic) WBFilterDropDownMenuController *filterController; // @synthesize filterController;
@property(retain, nonatomic) WBFilterDropDownMenuManager *filterManager; // @synthesize filterManager;
- (void)animateIdicator:(id)arg1 background:(id)arg2 leftTableView:(id)arg3 rightTableView:(id)arg4 title:(id)arg5 forward:(_Bool)arg6 complecte:(CDUnknownBlockType)arg7;
- (void)animateTitle:(id)arg1 showSelected:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)animateLeftTableView:(id)arg1 rightTableView:(id)arg2 show:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)animateBackGroundView:(id)arg1 show:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)animateIndicator:(id)arg1 Forward:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)saveLastTabContentOffsetValue;
- (void)backgroundTapped:(id)arg1;
- (void)menuTapped:(id)arg1;
- (struct CGSize)calculateTitleSizeWithString:(id)arg1;
- (id)createTextLayerWithNSString:(id)arg1 withColor:(id)arg2 andPosition:(struct CGPoint)arg3;
- (id)createSeparatorLineWithColor:(id)arg1 andPosition:(struct CGPoint)arg2;
- (void)setIndicatorLayer:(id)arg1 selectedStatus:(_Bool)arg2;
- (id)createIndicatorWithColor:(id)arg1 andPosition:(struct CGPoint)arg2;
- (id)createBgLayerWithColor:(id)arg1 andPosition:(struct CGPoint)arg2;
- (id)titleForRowAtIndexPath:(id)arg1;
- (void)adapterFilterMenu:(double)arg1 isReload:(_Bool)arg2;
- (void)adapterFilterMenu:(double)arg1;
- (void)loadFilterMenu;
- (id)initWithOrigin:(struct CGPoint)arg1 andHeight:(double)arg2;
- (void)dealloc;

@end

