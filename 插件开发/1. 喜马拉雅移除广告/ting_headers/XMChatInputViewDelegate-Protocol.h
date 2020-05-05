//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XMBQYEmoji, XMChatInputView;

@protocol XMChatInputViewDelegate <NSObject>

@optional
- (void)xmInputViewClickAtSync:(XMChatInputView *)arg1;
- (_Bool)xmInputView:(XMChatInputView *)arg1 shouldRemoveRegString:(NSString *)arg2;
- (NSString *)regularExpressionForXMInputView:(XMChatInputView *)arg1;
- (void)xmInputViewDidCancelRecording:(XMChatInputView *)arg1;
- (void)xmInputViewDidStopRecording:(XMChatInputView *)arg1;
- (void)xmInputViewDidStartRecording:(XMChatInputView *)arg1;
- (void)xmInputViewHitMaximumTextLength:(XMChatInputView *)arg1;
- (void)xmInputView:(XMChatInputView *)arg1 sendEmoji:(XMBQYEmoji *)arg2;
- (void)xmInputViewDidEnterAtSign:(XMChatInputView *)arg1;
- (void)xmInputView:(XMChatInputView *)arg1 willChangeHeight:(float)arg2 show:(_Bool)arg3;
- (void)xmInputViewDidEndEditing:(XMChatInputView *)arg1;
@end

