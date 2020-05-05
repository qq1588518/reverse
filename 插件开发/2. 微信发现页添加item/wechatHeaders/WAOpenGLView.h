//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "EJFileSystemDelegate-Protocol.h"
#import "EJNativeLogViewDelegate-Protocol.h"

@class EJJavaScriptView, NSString;
@protocol WAOpenGLViewDelegate;

@interface WAOpenGLView : UIView <EJNativeLogViewDelegate, EJFileSystemDelegate>
{
    id <WAOpenGLViewDelegate> delegate;
    EJJavaScriptView *_glView;
}

@property(nonatomic) __weak id <WAOpenGLViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)setCaptureDelegate:(unsigned int)arg1 offScreenCanvasId:(unsigned int)arg2 delegate:(id)arg3;
- (id)getObjClass;
- (void)setBindingDelegate:(id)arg1;
- (void)setGestureDelegate:(id)arg1;
- (void)present;
- (void)setUseCommandBuffer:(_Bool)arg1;
- (id)getCanvasImageWithScaleFactor:(unsigned int)arg1 Factor:(float)arg2;
- (id)getCanvasImage:(unsigned int)arg1;
- (void)setConfig:(CDStruct_2d91167a)arg1;
- (void)setComponent:(_Bool)arg1;
- (void)setLandScape:(_Bool)arg1;
- (void)enableDebug:(_Bool)arg1;
- (CDStruct_96b882c6)getPerformance;
- (_Bool)isCanvasMode;
- (long long)getVarianceFps;
- (unsigned int)getRunDuration;
- (void)onFirstFrameRendered;
- (void)onFrameTimeout:(int)arg1;
- (void)logGLError:(int)arg1 name:(id)arg2;
- (void)logError:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)systemLog:(id)arg1;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)gameKVReport:(unsigned int)arg1 logstr:(id)arg2;
- (id)getFileData:(id)arg1;
- (_Bool)isFileExist:(id)arg1;
- (void)setReportVarianceFps:(_Bool)arg1;
- (void)setInterrupt:(_Bool)arg1;
- (void)stop;
- (void)resume;
- (void)pause;
- (struct OpaqueJSValue *)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (void)clearCaches;
- (void)loadScriptAtPath:(id)arg1;
- (void)layoutSubviews;
- (void)initSubContext:(struct OpaqueJSContext *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 context:(struct OpaqueJSContext *)arg2 appId:(id)arg3 name:(const char *)arg4 isComponent:(_Bool)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

