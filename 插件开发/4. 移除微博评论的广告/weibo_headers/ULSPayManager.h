//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ULSWeiboPayManager;

@interface ULSPayManager : NSObject
{
    CDUnknownBlockType _iapCallback;
    ULSWeiboPayManager *_weiboPay;
    CDUnknownBlockType _block;
}

+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) ULSWeiboPayManager *weiboPay; // @synthesize weiboPay=_weiboPay;
@property(copy, nonatomic) CDUnknownBlockType iapCallback; // @synthesize iapCallback=_iapCallback;
- (void).cxx_destruct;
- (void)p_buyProductWithOrderString:(id)arg1 viewController:(id)arg2;
- (id)buyRoom:(long long)arg1 viewController:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)uls_paySuccess:(id)arg1;
- (void)dealloc;
- (id)init;

@end

