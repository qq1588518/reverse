//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString, XMExecutorInfoItem;

@interface XMIssueExecutorModel : XMModel
{
    NSString *__id;
    NSString *__userId;
    NSString *__boundToObjectId;
    NSString *_boundToObjectType;
    NSString *__roleId;
    NSString *_joined;
    NSString *_name;
    NSString *_pinyin;
    NSString *_py;
    NSString *_avatarUrl;
    NSString *_email;
    NSString *__memberId;
    NSString *_role;
    NSString *_hasVisited;
    XMExecutorInfoItem *_profile;
}

+ (id)xmm_modelContainerPropertyGenericClass;
@property(retain, nonatomic) XMExecutorInfoItem *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSString *hasVisited; // @synthesize hasVisited=_hasVisited;
@property(retain, nonatomic) NSString *role; // @synthesize role=_role;
@property(retain, nonatomic) NSString *_memberId; // @synthesize _memberId=__memberId;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *py; // @synthesize py=_py;
@property(retain, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *joined; // @synthesize joined=_joined;
@property(retain, nonatomic) NSString *_roleId; // @synthesize _roleId=__roleId;
@property(retain, nonatomic) NSString *boundToObjectType; // @synthesize boundToObjectType=_boundToObjectType;
@property(retain, nonatomic) NSString *_boundToObjectId; // @synthesize _boundToObjectId=__boundToObjectId;
@property(retain, nonatomic) NSString *_userId; // @synthesize _userId=__userId;
@property(retain, nonatomic) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;

@end

