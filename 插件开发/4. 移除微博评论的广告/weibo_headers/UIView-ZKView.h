//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ZKViewProtocol-Protocol.h"

@class NSString;

@interface UIView (ZKView) <ZKViewProtocol>
+ (id)ZKViewCreateWithName:(id)arg1 configuration:(id)arg2;
- (id)ZKViewContentView;
- (void)ZKViewSetValue:(id)arg1 forKey:(id)arg2;
- (void)ZKViewSetContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)ZKViewSetPadding:(struct UIEdgeInsets)arg1;
- (void)ZKViewEvaluateJavaScript:(id)arg1;
- (void)ZKViewSetContent:(id)arg1 contentType:(id)arg2 baseURI:(id)arg3;
- (void)ZKViewSetViewId:(long long)arg1 isolate:(void *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

