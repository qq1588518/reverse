//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray;

@protocol RadioDelegate <NSObject>
- (void)bandChanged:(unsigned int)arg1;
- (void)channelChanged:(unsigned int)arg1;
- (void)radioStateChanged:(unsigned int)arg1;
- (void)radioListChanged:(NSMutableArray *)arg1;
- (void)managerReady:(unsigned int)arg1;
@end

