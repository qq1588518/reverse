//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBImageTagViewGestureProtocol-Protocol.h"

@class LOTAnimationView, NSString;

@interface WBPhotoEditorTagOverlayView : UIView <WBImageTagViewGestureProtocol>
{
    LOTAnimationView *_trashAnimationView;
    _Bool _transhAnimation;
    double _trashScale;
    UIView *_moveTagView;
    struct CGRect _originalFrame;
    struct CGRect _imageRect;
    struct CGRect _validMoveRect;
}

@property(nonatomic) struct CGRect validMoveRect; // @synthesize validMoveRect=_validMoveRect;
@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
- (void).cxx_destruct;
- (void)recoverOriginalLocation;
- (void)gestureRecognizerStateFailAndCancel:(id)arg1;
- (void)gestureRecognizerStateEnded:(id)arg1;
- (_Bool)gestureRecognizerStateChanged:(id)arg1;
- (void)gestureRecognizerStateBegan:(id)arg1;
- (void)unlock;
- (void)lock;
- (void)trashViewLocation:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)resetTrash;
- (double)trashScaleFactor:(struct CGSize)arg1;
- (_Bool)checkInTrash:(struct CGPoint)arg1;
- (void)trashViewLocation:(struct CGPoint)arg1 targetView:(id)arg2;
- (void)layoutTrash;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

