//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMSSession : NSObject
{
    NSString *_sid;
    CDUnknownBlockType _sessionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType sessionBlock; // @synthesize sessionBlock=_sessionBlock;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (void).cxx_destruct;
- (void)callBackWithState:(unsigned long long)arg1;
- (void)end;
- (void)start;
- (id)initWithSessionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

