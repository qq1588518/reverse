//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMLiveRoomMsgUpdateTopic : NSObject
{
    unsigned long long _chatId;
    NSString *_topic;
    NSString *_prefix;
}

+ (id)modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) unsigned long long chatId; // @synthesize chatId=_chatId;

@end

