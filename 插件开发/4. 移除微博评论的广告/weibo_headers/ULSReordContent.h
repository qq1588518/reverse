//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ULSReordContent : NSObject
{
    NSString *_pictureURL;
    NSString *_question;
    NSString *_answerHeadUrl;
    NSString *_questionHeadUrl;
    NSString *_answerNickname;
    NSString *_questionNickname;
    long long _questionId;
    long long _amount;
    NSDictionary *_shortVideoInfo;
    long long _micUid;
    NSString *_micViewerNickName;
    long long _recordChatT;
    long long _recordChatUid;
    NSString *_recordChatContent;
    NSString *_recordChatName;
}

+ (id)parseMic:(id)arg1 question:(id)arg2;
+ (id)parseMic:(id)arg1;
+ (id)parseQuestion:(id)arg1;
+ (id)parse:(id)arg1;
@property(retain, nonatomic) NSString *recordChatName; // @synthesize recordChatName=_recordChatName;
@property(retain, nonatomic) NSString *recordChatContent; // @synthesize recordChatContent=_recordChatContent;
@property(nonatomic) long long recordChatUid; // @synthesize recordChatUid=_recordChatUid;
@property(nonatomic) long long recordChatT; // @synthesize recordChatT=_recordChatT;
@property(copy, nonatomic) NSString *micViewerNickName; // @synthesize micViewerNickName=_micViewerNickName;
@property(nonatomic) long long micUid; // @synthesize micUid=_micUid;
@property(retain, nonatomic) NSDictionary *shortVideoInfo; // @synthesize shortVideoInfo=_shortVideoInfo;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(nonatomic) long long questionId; // @synthesize questionId=_questionId;
@property(copy, nonatomic) NSString *questionNickname; // @synthesize questionNickname=_questionNickname;
@property(copy, nonatomic) NSString *answerNickname; // @synthesize answerNickname=_answerNickname;
@property(copy, nonatomic) NSString *questionHeadUrl; // @synthesize questionHeadUrl=_questionHeadUrl;
@property(copy, nonatomic) NSString *answerHeadUrl; // @synthesize answerHeadUrl=_answerHeadUrl;
@property(copy, nonatomic) NSString *question; // @synthesize question=_question;
@property(readonly, copy, nonatomic) NSString *pictureURL; // @synthesize pictureURL=_pictureURL;
- (void).cxx_destruct;
- (id)micUser;
- (void)setupWithMic:(id)arg1;
- (void)setupWithContent:(id)arg1;
- (void)setupPicture:(id)arg1;
- (id)absolutePictureURL;
- (id)myQuestion;
- (id)stringWithType:(long long)arg1;
- (void)setupWithQuestion:(id)arg1;
- (id)subStringByImageURL;
- (id)jsonString;
- (id)toDictionary;

@end

