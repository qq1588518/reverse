//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSoundCommentReplay.h"

@interface XMHearListCommentReplay : XMSoundCommentReplay
{
    unsigned long long _recordUid;
    unsigned long long _recordId;
    unsigned long long _business;
}

+ (id)replyFromDictionary:(id)arg1 rootComment:(id)arg2;
@property(nonatomic) unsigned long long business; // @synthesize business=_business;
@property(nonatomic) unsigned long long recordId; // @synthesize recordId=_recordId;
@property(nonatomic) unsigned long long recordUid; // @synthesize recordUid=_recordUid;

@end

