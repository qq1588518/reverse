//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MMGroupBulletin, MMTimelineAttributedTextView, UIButton, UIImageView;
@protocol MMGroupBulletinViewDelegate;

@interface MMGroupBulletinView : UIControl
{
    id <MMGroupBulletinViewDelegate> _viewDelegate;
    double _minHeight;
    unsigned long long _type;
    MMGroupBulletin *_groupBulletin;
    MMTimelineAttributedTextView *_contentLabel;
    UIButton *_closeButton;
    UIImageView *_backgroundImageView;
    UIImageView *_iconImageView;
    UIButton *_bulletinButton;
}

+ (id)configAttributedText:(id)arg1;
+ (double)heightWithGroupBulletin:(id)arg1 superViewWith:(double)arg2 withType:(unsigned long long)arg3;
@property(retain, nonatomic) UIButton *bulletinButton; // @synthesize bulletinButton=_bulletinButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMTimelineAttributedTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMGroupBulletin *groupBulletin; // @synthesize groupBulletin=_groupBulletin;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) __weak id <MMGroupBulletinViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (void).cxx_destruct;
- (void)attributedTextView:(id)arg1 didPressActiveRange:(id)arg2;
- (void)bindContent:(id)arg1;
- (void)layoutSubviews;
- (void)onBulletin:(id)arg1;
- (void)closeButtonClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withType:(unsigned long long)arg2;
- (void)dealloc;

@end

