//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITapGestureRecognizer, XMMMoment, XMMVideoGoods;

@interface XMMVideoGoodsControl : UIView
{
    UITapGestureRecognizer *_tapGesture;
    XMMVideoGoods *_goods;
    XMMMoment *_moment;
}

@property(retain, nonatomic) XMMMoment *moment; // @synthesize moment=_moment;
@property(retain, nonatomic) XMMVideoGoods *goods; // @synthesize goods=_goods;
- (void).cxx_destruct;
- (void)didSetGoods;
- (void)tapAction;
- (void)baseInit;
- (id)init;

@end

