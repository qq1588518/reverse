//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageAccessObject.h"

@interface MMUnfollowPrivateMessageAccessObject : MMMessageAccessObject
{
}

- (_Bool)updateChatInfo:(id)arg1;
- (id)queryChatsTabInfo;
- (_Bool)updateChats:(id)arg1 withTabId:(int)arg2 page:(int)arg3;
- (_Bool)deleteChat:(long long)arg1;
- (_Bool)moveChatToUserlistWithChatIdAndDeleteMessageBoxFolderChat:(long long)arg1;
- (void)moveChatToUserlistWithChatId:(long long)arg1;
- (int)queryOldImUnreadCountWithChatId:(long long)arg1;
- (_Bool)updateChatLatestMessageId:(long long)arg1;
- (void)updateMessageBoxConversationWithMessage:(id)arg1 isApi:(_Bool)arg2;
- (void)handleUnfollowMessageConversion:(id)arg1 isApi:(_Bool)arg2;
- (_Bool)saveOrUpdateChatWithMessage:(id)arg1 isApi:(_Bool)arg2;
- (id)queryChatsWithOffset:(int)arg1 limit:(int)arg2 tabId:(int)arg3;
- (long long)parentChatId;
- (int)chatType;

@end

