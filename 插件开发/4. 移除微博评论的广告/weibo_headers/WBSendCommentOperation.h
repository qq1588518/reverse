//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBQueueOperation.h"

@class WBSendCommentJob;

@interface WBSendCommentOperation : WBQueueOperation
{
}

+ (_Bool)logEnabled;
+ (long long)operationType;
- (void)logWithRequestParams:(id)arg1 responseObject:(id)arg2;
- (void)executeRequestWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithJob:(id)arg1;
@property(readonly, nonatomic) WBSendCommentJob *job;
- (id)operationTypeString;

@end

