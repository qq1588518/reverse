//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPayResp.h"

@class XMAccountCount;

@interface XMPayAccountResp : XMPayResp
{
    double _xibiCount;
    double _xibeanCount;
    double _nobleXibeanCount;
    XMAccountCount *_iOSAccount;
    XMAccountCount *_androidAccount;
}

@property(retain, nonatomic) XMAccountCount *androidAccount; // @synthesize androidAccount=_androidAccount;
@property(retain, nonatomic) XMAccountCount *iOSAccount; // @synthesize iOSAccount=_iOSAccount;
@property(nonatomic) double nobleXibeanCount; // @synthesize nobleXibeanCount=_nobleXibeanCount;
@property(nonatomic) double xibeanCount; // @synthesize xibeanCount=_xibeanCount;
@property(nonatomic) double xibiCount; // @synthesize xibiCount=_xibiCount;
- (void).cxx_destruct;

@end

