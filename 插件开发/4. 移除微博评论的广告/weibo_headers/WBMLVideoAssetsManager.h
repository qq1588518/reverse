//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBMLVideoAssetsManager : NSObject
{
    long long _coins;
}

+ (id)sharedManager;
@property(nonatomic) long long coins; // @synthesize coins=_coins;
- (void)updateCurrentUserCoinsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateCurrentUserCoins;

@end

