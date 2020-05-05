//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveDraggablePopView.h"

@class UIButton, UILabel, UIScrollView, UIView, XMLiveNoNetworkView, XMWebImageView;

@interface XMLiveRoomPropIntroduceView : XMLiveDraggablePopView
{
    UIButton *_backBtn;
    UILabel *_titleLabel;
    UIView *_topView;
    UIScrollView *_mainScroll;
    XMWebImageView *_imageView;
    XMLiveNoNetworkView *_networkLostEmptyView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveNoNetworkView *networkLostEmptyView; // @synthesize networkLostEmptyView=_networkLostEmptyView;
@property(retain, nonatomic) XMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *mainScroll; // @synthesize mainScroll=_mainScroll;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
- (void)onBackClick:(id)arg1;
- (void)loadPropIntroduceData;
- (void)showWithAnimate:(_Bool)arg1;
- (void)initBase;
- (id)initPopFromView:(id)arg1;

@end

