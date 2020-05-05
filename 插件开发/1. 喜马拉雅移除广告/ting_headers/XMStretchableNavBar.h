//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UIFont, UILabel, UIScrollView;

@interface XMStretchableNavBar : UIView
{
    _Bool _canFollowing;
    _Bool _changeBackgroundAlpha;
    UIFont *_normalFont;
    UIFont *_maxFont;
    UIScrollView *_followingScroll;
    double _followingOffset;
    UIColor *_titleColor;
    NSString *_title;
    NSArray *_rightBarItems;
    UIView *_statusBar;
    UIView *_navigationBar;
    UIColor *_bgColor;
    UILabel *_titleLabel;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIView *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIView *statusBar; // @synthesize statusBar=_statusBar;
@property(retain, nonatomic) NSArray *rightBarItems; // @synthesize rightBarItems=_rightBarItems;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) _Bool changeBackgroundAlpha; // @synthesize changeBackgroundAlpha=_changeBackgroundAlpha;
@property(nonatomic) _Bool canFollowing; // @synthesize canFollowing=_canFollowing;
@property(nonatomic) double followingOffset; // @synthesize followingOffset=_followingOffset;
@property(retain, nonatomic) UIScrollView *followingScroll; // @synthesize followingScroll=_followingScroll;
@property(retain, nonatomic) UIFont *maxFont; // @synthesize maxFont=_maxFont;
@property(retain, nonatomic) UIFont *normalFont; // @synthesize normalFont=_normalFont;
- (void).cxx_destruct;
- (void)onScrollDidChangeOffset:(struct CGPoint)arg1;
- (void)updateScroll:(id)arg1;
- (void)removeRightBarItems;
- (void)addCustomeSubview;
- (void)addKVOObserver;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFollowingView:(id)arg1;
- (void)dealloc;

@end

