//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCheckPayPwdVerifyTelCodeByTokenRequest : NSObject
{
    NSString *m_nsPayPwd;
    NSString *m_nsToken;
    NSString *m_nsVerifyCode;
    NSString *m_nsRelationKey;
}

@property(retain, nonatomic) NSString *m_nsVerifyCode; // @synthesize m_nsVerifyCode;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) NSString *m_nsPayPwd; // @synthesize m_nsPayPwd;
@property(retain, nonatomic) NSString *m_nsRelationKey; // @synthesize m_nsRelationKey;
- (void).cxx_destruct;

@end

