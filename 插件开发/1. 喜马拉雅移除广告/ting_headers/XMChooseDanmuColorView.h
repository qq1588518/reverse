//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMCommentPanelSource-Protocol.h"

@class NSArray, NSString;
@protocol XMChooseDanmuColorViewDelegate;

@interface XMChooseDanmuColorView : UIView <XMCommentPanelSource>
{
    id <XMChooseDanmuColorViewDelegate> _delegate;
    CDUnknownBlockType _viewDidShowBlock;
    NSArray *_btnTypes;
    long long _selectedIndex;
}

+ (id)danmuBkgColorWithType:(long long)arg1;
+ (id)danmuTextColorWithType:(long long)arg1;
+ (id)currentSelectedTextColor;
+ (id)currentSelectedImageColor;
+ (long long)currentDanmuColorType;
+ (void)saveColorType:(long long)arg1;
+ (id)danmuConfig;
+ (void)showTipForView:(id)arg1 andParams:(id)arg2;
+ (void)chooseDanmuColorWithIndex:(long long)arg1 andParams:(id)arg2 andComplete:(CDUnknownBlockType)arg3;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *btnTypes; // @synthesize btnTypes=_btnTypes;
@property(copy, nonatomic) CDUnknownBlockType viewDidShowBlock; // @synthesize viewDidShowBlock=_viewDidShowBlock;
@property(nonatomic) __weak id <XMChooseDanmuColorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didBeSelected;
- (id)panelView;
- (id)selectedIcon;
- (id)icon;
- (void)openVip:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)reloadView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

