//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, XMAVPlayer;

@interface XMAVPlayerNetToastView : UIView
{
    XMAVPlayer *_player;
    unsigned long long _netStatus;
    unsigned long long _action;
    UILabel *_titleLB;
    UIButton *_actionBtn;
    UIButton *_sdBtn;
    UIButton *_hdBtn;
}

+ (id)sizeForLLD:(unsigned long long)arg1;
@property(retain, nonatomic) UIButton *hdBtn; // @synthesize hdBtn=_hdBtn;
@property(retain, nonatomic) UIButton *sdBtn; // @synthesize sdBtn=_sdBtn;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) unsigned long long netStatus; // @synthesize netStatus=_netStatus;
@property(nonatomic) __weak XMAVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)p_onHDAction;
- (void)p_onSDAction;
- (void)p_onAction;
- (void)p_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

