//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WBUserListOverlayViewDelegate;

@interface WBUserListOverlayView : UIView
{
    id <WBUserListOverlayViewDelegate> _delegate;
}

@property(nonatomic) id <WBUserListOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

