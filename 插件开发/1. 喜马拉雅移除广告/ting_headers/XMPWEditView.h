//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIImageView;

@interface XMPWEditView : UIView
{
    CDUnknownBlockType _photoTouchBlock;
    CDUnknownBlockType _addPhotoTouchBlock;
    NSArray *_URLArr;
    NSMutableArray *_photoMArr;
    UIImageView *_avatarLB;
}

+ (double)viewHeight:(id)arg1;
@property(retain, nonatomic) UIImageView *avatarLB; // @synthesize avatarLB=_avatarLB;
@property(retain, nonatomic) NSMutableArray *photoMArr; // @synthesize photoMArr=_photoMArr;
@property(retain, nonatomic) NSArray *URLArr; // @synthesize URLArr=_URLArr;
@property(copy, nonatomic) CDUnknownBlockType addPhotoTouchBlock; // @synthesize addPhotoTouchBlock=_addPhotoTouchBlock;
@property(copy, nonatomic) CDUnknownBlockType photoTouchBlock; // @synthesize photoTouchBlock=_photoTouchBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateAvatar:(id)arg1;
- (void)photoTouch:(id)arg1;
- (void)addPhotoTouch:(id)arg1;
- (void)addPhotoIV;
- (id)initWithFrame:(struct CGRect)arg1;

@end

