//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStaticFilterModel.h"

@class NSArray;

@interface WBSpecialFilterModel : WBStaticFilterModel
{
    NSArray *_passArray;
}

@property(readonly, nonatomic) NSArray *passArray; // @synthesize passArray=_passArray;
- (void).cxx_destruct;
- (void)setPassArray:(id)arg1;
- (void)loadShaderData:(id)arg1 builtIn:(_Bool)arg2;
- (id)aesData:(id)arg1;
- (void)loadMarketData:(id)arg1;

@end

