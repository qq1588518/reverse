//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface WBVideoPlaylistLandsFoldButton : UIButton
{
    _Bool _expanded;
}

@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
- (void)updateImageViewTransform:(_Bool)arg1;
- (struct CGSize)foldButtonSizeThatFits;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

