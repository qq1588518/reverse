//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBAPMMonitorDataReceiver-Protocol.h"
#import "WBAPMMonitorViewDelegate-Protocol.h"

@class NSString, WBAPMMonitorView;
@protocol WBAPMMonitorViewInterface;

@interface WBAPMMonitorViewModel : NSObject <WBAPMMonitorViewDelegate, WBAPMMonitorDataReceiver>
{
    CDStruct_1ed903a5 *glanceViewPositionRef;
    CDStruct_1ed903a5 *detailViewPositionRef;
    WBAPMMonitorView<WBAPMMonitorViewInterface> *_detailView;
    WBAPMMonitorView<WBAPMMonitorViewInterface> *_glanceView;
}

+ (Class)glanceViewClass;
+ (Class)detailViewClass;
@property(retain, nonatomic) WBAPMMonitorView<WBAPMMonitorViewInterface> *glanceView; // @synthesize glanceView=_glanceView;
@property(retain, nonatomic) WBAPMMonitorView<WBAPMMonitorViewInterface> *detailView; // @synthesize detailView=_detailView;
- (void).cxx_destruct;
- (CDStruct_1ed903a5 *)detailViewPosition;
- (CDStruct_1ed903a5 *)glanceViewPosition;
- (void)printDatas;
- (void)didClickMonitorView:(id)arg1 withActionType:(unsigned long long)arg2;
- (void)presentDetailViewController;
- (id)topViewControllerWithRootViewController:(id)arg1;
- (id)topMostViewController;
- (_Bool)_loadViewIfNeeded:(id *)arg1 withViewClass:(Class)arg2;
- (void)updateDetailView;
- (void)detailViewDidLoad;
- (void)glanceViewDidLoad;
- (void)didReceiveData:(id)arg1 fromMonitor:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

