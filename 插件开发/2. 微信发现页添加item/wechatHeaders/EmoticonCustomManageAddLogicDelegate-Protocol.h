//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AddEmoticonWrap;

@protocol EmoticonCustomManageAddLogicDelegate

@optional
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(AddEmoticonWrap *)arg1 isSuccessed:(_Bool)arg2;
- (void)onAddEmoticonPendingUploadWithWrap:(AddEmoticonWrap *)arg1;
- (void)AddEmoticonFinishedWithWrap:(AddEmoticonWrap *)arg1 IsSuccessed:(_Bool)arg2;
@end

