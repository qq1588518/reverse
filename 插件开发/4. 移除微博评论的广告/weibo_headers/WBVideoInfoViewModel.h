//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBComposeVideoInfoModel, WBHTTPRequestOperationWrapper;

@interface WBVideoInfoViewModel : NSObject
{
    WBComposeVideoInfoModel *_model;
    WBHTTPRequestOperationWrapper *_wrapper;
}

@property(retain, nonatomic) WBHTTPRequestOperationWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(retain, nonatomic) WBComposeVideoInfoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)requestVideoInfoWithOid:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

