//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, TBLiveVideoEngine, TBLiveWeexInstance;

@interface TBLiveWeexBaseView : UIView
{
    _Bool _isNeedReload;
    TBLiveVideoEngine *_videoEngine;
    TBLiveWeexInstance *_instance;
    CDUnknownBlockType _onCreated;
    CDUnknownBlockType _onSucceed;
    CDUnknownBlockType _onFailed;
    CDUnknownBlockType _onReload;
    CDUnknownBlockType _onJSRuntimeError;
    NSString *_weexInstanceMouduleName;
    double _modalThreshold;
    UIView *_weexView;
    NSDictionary *_dataDict;
}

@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(nonatomic) double modalThreshold; // @synthesize modalThreshold=_modalThreshold;
@property(nonatomic) _Bool isNeedReload; // @synthesize isNeedReload=_isNeedReload;
@property(copy, nonatomic) NSString *weexInstanceMouduleName; // @synthesize weexInstanceMouduleName=_weexInstanceMouduleName;
@property(copy, nonatomic) CDUnknownBlockType onJSRuntimeError; // @synthesize onJSRuntimeError=_onJSRuntimeError;
@property(copy, nonatomic) CDUnknownBlockType onReload; // @synthesize onReload=_onReload;
@property(copy, nonatomic) CDUnknownBlockType onFailed; // @synthesize onFailed=_onFailed;
@property(copy, nonatomic) CDUnknownBlockType onSucceed; // @synthesize onSucceed=_onSucceed;
@property(copy, nonatomic) CDUnknownBlockType onCreated; // @synthesize onCreated=_onCreated;
@property(retain, nonatomic) TBLiveWeexInstance *instance; // @synthesize instance=_instance;
@property(nonatomic) __weak TBLiveVideoEngine *videoEngine; // @synthesize videoEngine=_videoEngine;
- (void).cxx_destruct;
- (double)alphaOfPointFromLayer:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleGesture:(id)arg1;
- (id)getStreamInfoView;
- (id)getLiveStatusInfo;
- (void)willMoveToSuperview:(id)arg1;
- (id)weexInstance;
- (void)setHidden:(_Bool)arg1;
- (void)reloadPage:(id)arg1;
- (void)renderFailedWithRetryButton;
- (void)renderFailed;
- (void)destroy;
- (id)getView;
- (void)addPushMessageListData:(id)arg1;
- (void)addPush:(id)arg1 data:(id)arg2;
- (void)renderViewWithCache;
- (void)renderView;
- (id)getCachePath;
- (id)getJSFileData;
- (void)cacheJSFileData:(id)arg1;
- (void)dealloc;
- (void)renderWeexView;
@property(readonly, copy, nonatomic) NSString *url;
- (void)setupInit;
- (id)initWithReloadStatus:(struct CGRect)arg1 data:(id)arg2 created:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5 jsRuntimeError:(CDUnknownBlockType)arg6 reload:(CDUnknownBlockType)arg7 weexModuleName:(id)arg8 isNeedReload:(_Bool)arg9;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2 created:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 loadFailed:(CDUnknownBlockType)arg5 jsRuntimeError:(CDUnknownBlockType)arg6 weexModuleName:(id)arg7;

@end

