//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageEngine.h"

@class WBHTTPRequestOperationWrapper;

@interface WBDirectionalGroupEngine : WBPageEngine
{
    WBHTTPRequestOperationWrapper *_directionalGroupRemindUpdateRequest;
}

@property(retain, nonatomic) WBHTTPRequestOperationWrapper *directionalGroupRemindUpdateRequest; // @synthesize directionalGroupRemindUpdateRequest=_directionalGroupRemindUpdateRequest;
- (void).cxx_destruct;
- (id)updateDirectionalGroup:(id)arg1 toRemind:(_Bool)arg2 blockingView:(id)arg3 params:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)configCardWithGroupInfo:(id)arg1 viewController:(id)arg2;
- (void)loadGroupWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

