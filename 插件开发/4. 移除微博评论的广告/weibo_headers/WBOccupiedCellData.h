//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFCLBaseCellData.h"

@class WBButtonObject, WBControlObject, WBLableObject, WBLineObject;

@interface WBOccupiedCellData : WBFCLBaseCellData
{
    WBControlObject *_backgroundObj;
    WBLineObject *_leftLineObj;
    WBButtonObject *_middleObj;
    WBLineObject *_rightLineObj;
    WBLineObject *_bottomLineObj;
    WBLableObject *_contentObj;
    WBControlObject *_arrowObj;
    WBControlObject *_loadingObj;
}

@property(retain, nonatomic) WBControlObject *loadingObj; // @synthesize loadingObj=_loadingObj;
@property(retain, nonatomic) WBControlObject *arrowObj; // @synthesize arrowObj=_arrowObj;
@property(retain, nonatomic) WBLableObject *contentObj; // @synthesize contentObj=_contentObj;
@property(retain, nonatomic) WBLineObject *bottomLineObj; // @synthesize bottomLineObj=_bottomLineObj;
@property(retain, nonatomic) WBLineObject *rightLineObj; // @synthesize rightLineObj=_rightLineObj;
@property(retain, nonatomic) WBButtonObject *middleObj; // @synthesize middleObj=_middleObj;
@property(retain, nonatomic) WBLineObject *leftLineObj; // @synthesize leftLineObj=_leftLineObj;
@property(retain, nonatomic) WBControlObject *backgroundObj; // @synthesize backgroundObj=_backgroundObj;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)init;

@end

