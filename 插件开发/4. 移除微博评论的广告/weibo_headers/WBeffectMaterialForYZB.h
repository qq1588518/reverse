//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBEffectRenderMaterial-Protocol.h"

@class NSString;

@interface WBeffectMaterialForYZB : NSObject <WBEffectRenderMaterial>
{
    int _iMaterialType;
    NSString *_strID;
    NSString *_strName;
    NSString *_strThumbnailURL;
    NSString *_strMeterialURL;
    NSString *_md5;
}

@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *strMeterialURL; // @synthesize strMeterialURL=_strMeterialURL;
@property(copy, nonatomic) NSString *strThumbnailURL; // @synthesize strThumbnailURL=_strThumbnailURL;
@property(nonatomic) int iMaterialType; // @synthesize iMaterialType=_iMaterialType;
@property(copy, nonatomic) NSString *strName; // @synthesize strName=_strName;
@property(copy, nonatomic) NSString *strID; // @synthesize strID=_strID;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

