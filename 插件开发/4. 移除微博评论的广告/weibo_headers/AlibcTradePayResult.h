//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AlibcTradePayResult : NSObject
{
    NSArray *_paySuccessOrders;
    NSArray *_payFailedOrders;
}

@property(readonly, copy, nonatomic) NSArray *payFailedOrders; // @synthesize payFailedOrders=_payFailedOrders;
@property(readonly, copy, nonatomic) NSArray *paySuccessOrders; // @synthesize paySuccessOrders=_paySuccessOrders;
- (void).cxx_destruct;

@end

