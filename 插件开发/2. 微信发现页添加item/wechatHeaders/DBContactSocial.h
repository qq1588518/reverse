//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface DBContactSocial : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int wcFlag;
    NSString *mobileHash;
    NSString *mobileFullHash;
    unsigned long long qqUin;
    NSString *linkedInID;
    NSString *linkedInName;
    NSString *linkedInPublicUrl;
    NSString *wcBGImgObjectID;
    NSString *wcBGImgID;
    NSString *cardUrl;
    NSMutableArray *phoneList;
    NSString *weiDianInfo;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(struct NSObject *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_weiDianInfo;
+ (void)PBArrayAdd_phoneList;
+ (void)PBArrayAdd_cardUrl;
+ (void)PBArrayAdd_wcBGImgID;
+ (void)PBArrayAdd_wcBGImgObjectID;
+ (void)PBArrayAdd_wcFlag;
+ (void)PBArrayAdd_linkedInPublicUrl;
+ (void)PBArrayAdd_linkedInName;
+ (void)PBArrayAdd_linkedInID;
+ (void)PBArrayAdd_qqUin;
+ (void)PBArrayAdd_mobileFullHash;
+ (void)PBArrayAdd_mobileHash;
@property(retain, nonatomic) NSString *weiDianInfo; // @synthesize weiDianInfo;
@property(retain, nonatomic) NSMutableArray *phoneList; // @synthesize phoneList;
@property(retain, nonatomic) NSString *cardUrl; // @synthesize cardUrl;
@property(retain, nonatomic) NSString *wcBGImgID; // @synthesize wcBGImgID;
@property(retain, nonatomic) NSString *wcBGImgObjectID; // @synthesize wcBGImgObjectID;
@property(nonatomic) unsigned int wcFlag; // @synthesize wcFlag;
@property(retain, nonatomic) NSString *linkedInPublicUrl; // @synthesize linkedInPublicUrl;
@property(retain, nonatomic) NSString *linkedInName; // @synthesize linkedInName;
@property(retain, nonatomic) NSString *linkedInID; // @synthesize linkedInID;
@property(nonatomic) unsigned long long qqUin; // @synthesize qqUin;
@property(retain, nonatomic) NSString *mobileFullHash; // @synthesize mobileFullHash;
@property(retain, nonatomic) NSString *mobileHash; // @synthesize mobileHash;
- (void).cxx_destruct;
- (struct NSObject *)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

