//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WXSDKInstance;

@interface WXRootView : UIView
{
    _Bool _mHasEvent;
    WXSDKInstance *_instance;
}

@property(nonatomic) _Bool mHasEvent; // @synthesize mHasEvent=_mHasEvent;
@property(nonatomic) __weak WXSDKInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (_Bool)isHasEvent;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;

@end

