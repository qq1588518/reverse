//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMCommentCommonCellLayout.h"

#import "XMTableCellModelProtocol-Protocol.h"

@class NSString, XMSoundComment;

@interface XMHotSoundCommentCellLayout : XMCommentCommonCellLayout <XMTableCellModelProtocol>
{
}

+ (id)newLayout:(id)arg1;
- (struct CGSize)layout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) XMSoundComment *model; // @dynamic model;
@property(readonly) Class superclass;

@end

