//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseAlert.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, XMEndOfAuditionItem, XMNewEndOfAudionItem;

@interface XMEndOfAuditionPopView : XMBaseAlert <UIScrollViewDelegate>
{
    XMEndOfAuditionItem *_item;
    XMNewEndOfAudionItem *_itemNew;
}

+ (_Bool)playPageIsVisable;
+ (id)topBaseVc;
+ (void)buyWithEndOfAuditon:(id)arg1 withParams:(id)arg2 andDidOpenBuyPage:(CDUnknownBlockType)arg3;
+ (void)showAlbumLimitedExpiredWithItemNew:(id)arg1 withParams:(id)arg2;
+ (void)showAlbumLimitedExpiredWithItem:(id)arg1 withParams:(id)arg2;
+ (_Bool)keyboardOnShow;
+ (_Bool)showViewIfNeeded;
@property(retain, nonatomic) XMNewEndOfAudionItem *itemNew; // @synthesize itemNew=_itemNew;
@property(retain, nonatomic) XMEndOfAuditionItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)vipClick;
- (void)reportEndOfAuditonForClickVipButton:(_Bool)arg1 andIsVipDiscount:(_Bool)arg2;
- (void)reportButtonClickedForTimeLimit:(_Bool)arg1;
- (void)buttonDidClick:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)initUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

