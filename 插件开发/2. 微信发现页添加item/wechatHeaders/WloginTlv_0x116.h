//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@interface WloginTlv_0x116 : WloginTlv
{
    unsigned char cVer;
    unsigned int dwMiscBitmap;
    unsigned int dwGetAppSig;
    unsigned char cAppidNum;
    unsigned int adwAppidList[10];
}

@property(nonatomic) unsigned char cAppidNum; // @synthesize cAppidNum;
@property(nonatomic) unsigned char cVer; // @synthesize cVer;
@property(nonatomic) unsigned int dwMiscBitmap; // @synthesize dwMiscBitmap;
@property(nonatomic) unsigned int dwGetAppSig; // @synthesize dwGetAppSig;
- (int)encode:(id)arg1;
- (unsigned int)adwAppidWithIndex:(unsigned char)arg1;
- (void)setAdwAppidList:(unsigned int)arg1 withIndex:(unsigned char)arg2;

@end

