//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, PKBasePkReport, PKBasePropEggCollect, PKBasePropEggCollectHint, PKBasePropEggResult, PKBasePropKill, PKBasePropKillFail, PKBasePropKillHint, PKBasePropTaskCollect, PKBasePropTaskCollectHint, PKBasePropTaskResult, PKBaseTimeCalibration;

@interface PKXChatPropPanel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *buffListArray; // @dynamic buffListArray;
@property(readonly, nonatomic) unsigned long long buffListArray_Count; // @dynamic buffListArray_Count;
@property(retain, nonatomic) PKBasePropEggCollect *eggCollect; // @dynamic eggCollect;
@property(retain, nonatomic) PKBasePropEggCollectHint *eggCollectHint; // @dynamic eggCollectHint;
@property(retain, nonatomic) PKBasePropEggResult *eggResult; // @dynamic eggResult;
@property(nonatomic) _Bool hasEggCollect; // @dynamic hasEggCollect;
@property(nonatomic) _Bool hasEggCollectHint; // @dynamic hasEggCollectHint;
@property(nonatomic) _Bool hasEggResult; // @dynamic hasEggResult;
@property(nonatomic) _Bool hasKill; // @dynamic hasKill;
@property(nonatomic) _Bool hasKillFail; // @dynamic hasKillFail;
@property(nonatomic) _Bool hasKillHint; // @dynamic hasKillHint;
@property(nonatomic) _Bool hasPkReport; // @dynamic hasPkReport;
@property(nonatomic) _Bool hasPropStatus; // @dynamic hasPropStatus;
@property(nonatomic) _Bool hasTaskCollect; // @dynamic hasTaskCollect;
@property(nonatomic) _Bool hasTaskCollectHint; // @dynamic hasTaskCollectHint;
@property(nonatomic) _Bool hasTaskResult; // @dynamic hasTaskResult;
@property(nonatomic) _Bool hasTimeCalibration; // @dynamic hasTimeCalibration;
@property(nonatomic) _Bool hasVersionInfo; // @dynamic hasVersionInfo;
@property(retain, nonatomic) PKBasePropKill *kill; // @dynamic kill;
@property(retain, nonatomic) PKBasePropKillFail *killFail; // @dynamic killFail;
@property(retain, nonatomic) PKBasePropKillHint *killHint; // @dynamic killHint;
@property(retain, nonatomic) PKBasePkReport *pkReport; // @dynamic pkReport;
@property(nonatomic) int propStatus; // @dynamic propStatus;
@property(retain, nonatomic) NSMutableArray *propUsedListArray; // @dynamic propUsedListArray;
@property(readonly, nonatomic) unsigned long long propUsedListArray_Count; // @dynamic propUsedListArray_Count;
@property(retain, nonatomic) PKBasePropTaskCollect *taskCollect; // @dynamic taskCollect;
@property(retain, nonatomic) PKBasePropTaskCollectHint *taskCollectHint; // @dynamic taskCollectHint;
@property(retain, nonatomic) PKBasePropTaskResult *taskResult; // @dynamic taskResult;
@property(retain, nonatomic) PKBaseTimeCalibration *timeCalibration; // @dynamic timeCalibration;
@property(nonatomic) int versionInfo; // @dynamic versionInfo;

@end

