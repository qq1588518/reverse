//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol OS_dispatch_semaphore;

@interface XMIMPackManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMutableData *_recvData;
}

@property(retain, nonatomic) NSMutableData *recvData; // @synthesize recvData=_recvData;
- (void).cxx_destruct;
- (id)report;
- (id)pbMessage:(id)arg1 ofData:(id)arg2;
- (id)unpackData:(id)arg1;
- (id)packData:(id)arg1;
- (void)reset;
- (id)init;

@end

