//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, UIView, XMDanmuLayerView;
@protocol OS_dispatch_queue, XMDanmuManagerDataSource;

@interface XMDanmuManager : NSObject
{
    id <XMDanmuManagerDataSource> _dataSource;
    unsigned long long _danmuManagerState;
    XMDanmuLayerView *_layerView;
    unsigned long long _durationTime;
    NSMutableArray *_arRollChannelInfo;
    unsigned long long _countChannel;
    NSObject<OS_dispatch_queue> *_danmuQueue;
    NSTimer *_danmuTimer;
    CDUnknownBlockType _sendBlock;
    NSMutableArray *_danmuPauseDatas;
    long long _bottomDanmuCount;
    NSMutableArray *_bottomDanmuChannel;
    NSMutableArray *_bottomDanmuArr;
    struct CGRect _frame;
}

@property(retain, nonatomic) NSMutableArray *bottomDanmuArr; // @synthesize bottomDanmuArr=_bottomDanmuArr;
@property(retain, nonatomic) NSMutableArray *bottomDanmuChannel; // @synthesize bottomDanmuChannel=_bottomDanmuChannel;
@property(nonatomic) long long bottomDanmuCount; // @synthesize bottomDanmuCount=_bottomDanmuCount;
@property(retain, nonatomic) NSMutableArray *danmuPauseDatas; // @synthesize danmuPauseDatas=_danmuPauseDatas;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(retain, nonatomic) NSTimer *danmuTimer; // @synthesize danmuTimer=_danmuTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *danmuQueue; // @synthesize danmuQueue=_danmuQueue;
@property(nonatomic) unsigned long long countChannel; // @synthesize countChannel=_countChannel;
@property(retain, nonatomic) NSMutableArray *arRollChannelInfo; // @synthesize arRollChannelInfo=_arRollChannelInfo;
@property(nonatomic) unsigned long long durationTime; // @synthesize durationTime=_durationTime;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) XMDanmuLayerView *layerView; // @synthesize layerView=_layerView;
@property(nonatomic) unsigned long long danmuManagerState; // @synthesize danmuManagerState=_danmuManagerState;
@property(nonatomic) __weak id <XMDanmuManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)p_removeLastBottomDanmuInfoWithChannel:(unsigned long long)arg1;
- (void)updateExistBottomDanmuTop:(unsigned long long)arg1;
- (unsigned long long)p_allChannelWithPosition:(id)arg1;
- (_Bool)_last:(id)arg1 new:(id)arg2;
- (void)_getRollBestChannel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_danmu:(double)arg1;
- (void)updateChannelCount;
- (void)_initInfo;
- (void)sendDanmu:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)rollDanmu:(unsigned long long)arg1;
- (void)startRoll;
- (void)start;
- (void)clear;
@property(readonly, nonatomic) UIView *danmuView;
- (id)initInView:(id)arg1;
- (void)dealloc;

@end

