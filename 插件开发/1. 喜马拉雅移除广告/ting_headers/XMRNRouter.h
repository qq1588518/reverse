//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMRNRouter : NSObject
{
}

+ (id)presentRNViewControllerWithUrl:(id)arg1 props:(id)arg2 sourceViewController:(id)arg3;
+ (id)createRNViewControllerWithUrl:(id)arg1 props:(id)arg2 showTab:(_Bool)arg3 markInRNStack:(_Bool)arg4 backHandler:(CDUnknownBlockType)arg5 loadWhenAppear:(_Bool)arg6;
+ (id)createRNViewControllerWithUrl:(id)arg1 props:(id)arg2 backHandler:(CDUnknownBlockType)arg3 loadWhenAppear:(_Bool)arg4;
+ (id)createRNViewControllerWithUrl:(id)arg1 props:(id)arg2;
+ (id)router;

@end

