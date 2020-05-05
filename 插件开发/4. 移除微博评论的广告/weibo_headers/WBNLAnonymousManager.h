//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YXLiveCommentView, YXTimeoutHandler;

@interface WBNLAnonymousManager : NSObject
{
    _Bool _isCanRequest;
    int _joinTime;
    int _requestCount;
    NSString *_scid;
    NSString *_memberId;
    YXLiveCommentView *_commentView;
    long long _transformGuideCDTime;
    YXTimeoutHandler *_timeoutHandler;
}

+ (id)formatNick:(id)arg1;
+ (void)destoryInstance;
+ (id)shareInstance;
@property(retain, nonatomic) YXTimeoutHandler *timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(nonatomic) int requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) _Bool isCanRequest; // @synthesize isCanRequest=_isCanRequest;
@property(nonatomic) long long transformGuideCDTime; // @synthesize transformGuideCDTime=_transformGuideCDTime;
@property(nonatomic) int joinTime; // @synthesize joinTime=_joinTime;
@property(nonatomic) __weak YXLiveCommentView *commentView; // @synthesize commentView=_commentView;
@property(copy, nonatomic) NSString *memberId; // @synthesize memberId=_memberId;
@property(copy, nonatomic) NSString *scid; // @synthesize scid=_scid;
- (void).cxx_destruct;
- (void)transformGuideTimeUpdate;
- (void)appendTransformInfo:(id)arg1;
- (void)stopTransformGuideTime;
- (void)startTransformGuideTime;
- (void)requestTransformGuideInComment;
- (id)init;
- (void)dealloc;

@end

