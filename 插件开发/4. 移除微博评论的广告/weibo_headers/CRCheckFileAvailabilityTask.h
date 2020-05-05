//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CRCheckFileAvailabilityListener;

@interface CRCheckFileAvailabilityTask : NSObject
{
    _Bool _isCancel;
    id <CRCheckFileAvailabilityListener> _listener;
}

@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) __weak id <CRCheckFileAvailabilityListener> listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)_complete:(id)arg1;
- (_Bool)_compareKeepTime:(id)arg1 keepTime:(long long)arg2;
- (_Bool)_compareExtensionName:(id)arg1 path:(id)arg2;
- (void)cancel;
- (void)_checkCacheTempFileTask:(id)arg1 keepTime:(long long)arg2 cachePath:(id)arg3;
- (void)execute:(id)arg1;
- (id)init:(id)arg1;

@end

