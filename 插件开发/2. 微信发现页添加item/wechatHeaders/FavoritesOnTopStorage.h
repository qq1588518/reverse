//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface FavoritesOnTopStorage : NSObject <PBCoding>
{
    _Bool bEditable;
    unsigned int mesLocalID;
    unsigned int favLocalId;
    unsigned int lastReportTime;
    NSString *chatUser;
    NSString *localDataId;
    NSString *timeLineId;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastReportTime;
+ (void)PBArrayAdd_bEditable;
+ (void)PBArrayAdd_timeLineId;
+ (void)PBArrayAdd_localDataId;
+ (void)PBArrayAdd_favLocalId;
+ (void)PBArrayAdd_mesLocalID;
+ (void)PBArrayAdd_chatUser;
@property(nonatomic) unsigned int lastReportTime; // @synthesize lastReportTime;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable;
@property(retain, nonatomic) NSString *timeLineId; // @synthesize timeLineId;
@property(retain, nonatomic) NSString *localDataId; // @synthesize localDataId;
@property(nonatomic) unsigned int favLocalId; // @synthesize favLocalId;
@property(nonatomic) unsigned int mesLocalID; // @synthesize mesLocalID;
@property(retain, nonatomic) NSString *chatUser; // @synthesize chatUser;
- (void).cxx_destruct;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

