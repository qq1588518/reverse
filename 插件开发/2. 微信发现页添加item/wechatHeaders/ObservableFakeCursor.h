//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface ObservableFakeCursor : UIView
{
    id _observeTarget;
    id _observeObject;
    NSString *_keyPath;
}

@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) __weak id observeObject; // @synthesize observeObject=_observeObject;
@property(readonly, nonatomic) __weak id observeTarget; // @synthesize observeTarget=_observeTarget;
- (void).cxx_destruct;
- (void)registerObserverTarget:(id)arg1 object:(id)arg2 keyPath:(id)arg3;
- (void)dealloc;

@end

