//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, YXGiftModel;

@interface YXGiftStyle3 : UIView
{
    _Bool _isShowing;
    YXGiftModel *_model;
    UIView *_parentView;
    CDUnknownBlockType _headTappedBlock;
    UIImageView *_giftIV;
}

@property(nonatomic) __weak UIImageView *giftIV; // @synthesize giftIV=_giftIV;
@property(copy, nonatomic) CDUnknownBlockType headTappedBlock; // @synthesize headTappedBlock=_headTappedBlock;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) YXGiftModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)showWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

