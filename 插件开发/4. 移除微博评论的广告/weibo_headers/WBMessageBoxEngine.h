//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, SNHTTPRequestOperationWrapper, WBHTTPRequestOperationWrapper;

@interface WBMessageBoxEngine : NSObject
{
    _Bool hasMore;
    WBHTTPRequestOperationWrapper *messagesWrapper;
    WBHTTPRequestOperationWrapper *blockWrapper;
    SNHTTPRequestOperationWrapper *unblockWrapper;
    SNHTTPRequestOperationWrapper *reportWrapper;
    SNHTTPRequestOperationWrapper *destroyWrapper;
    SNHTTPRequestOperationWrapper *clearWrapper;
    _Bool _messageBoxExists;
    NSDictionary *currentVCAnalysisParameters;
    NSMutableDictionary *_users;
    NSMutableArray *_groups;
}

@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(nonatomic) _Bool messageBoxExists; // @synthesize messageBoxExists=_messageBoxExists;
@property(retain, nonatomic) NSMutableDictionary *users; // @synthesize users=_users;
@property(retain, nonatomic) NSDictionary *currentVCAnalysisParameters; // @synthesize currentVCAnalysisParameters;
- (void).cxx_destruct;
- (void)blockAllUnfollowPrivateMessage:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)didUnblackUser:(id)arg1;
- (void)didBlackUser:(id)arg1;
- (void)emptyMessageBoxComple:(CDUnknownBlockType)arg1;
- (void)deleteMessage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)reportMessage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)unnlockUser:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)blockUser:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)conversationBlockStateChanged:(id)arg1;
- (void)updateUserBlockState:(id)arg1 blocked:(_Bool)arg2;
- (_Bool)hasMore;
@property(readonly, nonatomic) NSArray *messageGroups;
- (void)loadMessagesAfterNewMessageReceived:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)cancelWrapper:(id)arg1;

@end

