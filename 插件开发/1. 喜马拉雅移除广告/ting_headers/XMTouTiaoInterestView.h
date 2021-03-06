//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIScrollView;
@protocol XMTouTiaoInterestViewDelegate;

@interface XMTouTiaoInterestView : UIView
{
    id <XMTouTiaoInterestViewDelegate> _delegate;
    UIButton *_confirmButton;
    UIScrollView *_scrollView;
    NSArray *_array;
    NSArray *_customArray;
}

@property(retain, nonatomic) NSArray *customArray; // @synthesize customArray=_customArray;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak id <XMTouTiaoInterestViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)saveCustomInterest;
- (void)checkConfirmButtonState;
- (void)selectInetrest:(id)arg1;
- (void)setContentWithArray:(id)arg1;
- (void)requestGroup;
- (id)init;

@end

