//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "WBMiniCardGroupContentViewDelegate-Protocol.h"

@class NSArray, NSString, WBMiniCardGroupContentView;
@protocol WBMiniCardGroupViewDelegate;

@interface WBMiniCardGroupView : UIScrollView <WBMiniCardGroupContentViewDelegate>
{
    _Bool isPosition;
    float _constraintWidth;
    NSArray *_tags;
    unsigned long long _frameConstraintType;
    WBMiniCardGroupContentView *_groupContentView;
}

+ (double)widthForTags:(id)arg1;
+ (double)widthForTags:(id)arg1 withFrameType:(unsigned long long)arg2 andConstraintWidth:(double)arg3;
+ (id)checkPositionTag:(id)arg1;
+ (double)HeightForTags:(id)arg1;
@property(retain, nonatomic) WBMiniCardGroupContentView *groupContentView; // @synthesize groupContentView=_groupContentView;
@property(nonatomic) float constraintWidth; // @synthesize constraintWidth=_constraintWidth;
@property(nonatomic) unsigned long long frameConstraintType; // @synthesize frameConstraintType=_frameConstraintType;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (id)accessibilityValue;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)miniCardGroupContentViewDidSelectTag:(id)arg1 fromButton:(id)arg2;
- (void)layoutSubviews;
- (void)reset;
- (void)dealloc;
- (void)configure;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WBMiniCardGroupViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

