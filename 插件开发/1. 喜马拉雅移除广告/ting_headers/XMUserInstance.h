//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSString, XMDUser, XMUser;
@protocol XMAConfigProtocol;

@interface XMUserInstance : NSObject
{
    _Bool _login;
    _Bool _deviceLogin;
    XMUser *_user;
    XMDUser *_dUser;
    NSLock *_myLock;
    NSString *_deviceAccount;
    id <XMAConfigProtocol> _config;
    long long _willDeleteUid;
    NSMutableArray *_exceptions;
}

+ (id)bindItem:(unsigned long long)arg1;
+ (id)lastLoginContent;
+ (id)lastLoginType;
+ (id)currentUserDirectory;
+ (id)userDirectoryForUid:(long long)arg1;
+ (id)userInfoFilePathForUid:(long long)arg1;
+ (id)usersDirectory;
+ (id)shareInstance;
+ (id)allUsers;
+ (void)switchTo:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteUserWithUid:(long long)arg1;
+ (void)hideCurrentUser;
@property(retain, nonatomic) NSMutableArray *exceptions; // @synthesize exceptions=_exceptions;
@property(nonatomic) long long willDeleteUid; // @synthesize willDeleteUid=_willDeleteUid;
@property(retain, nonatomic) id <XMAConfigProtocol> config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *deviceAccount; // @synthesize deviceAccount=_deviceAccount;
@property(retain, nonatomic) NSLock *myLock; // @synthesize myLock=_myLock;
@property(retain, nonatomic) XMDUser *dUser; // @synthesize dUser=_dUser;
@property(retain, nonatomic) XMUser *user; // @synthesize user=_user;
@property(nonatomic, getter=isDeviceLogin) _Bool deviceLogin; // @synthesize deviceLogin=_deviceLogin;
@property(nonatomic, getter=isLogin) _Bool login; // @synthesize login=_login;
- (void).cxx_destruct;
- (void)setNewUser:(id)arg1;
- (void)updateUserInfoWithDictionary:(id)arg1;
- (void)saveLoginInfo:(id)arg1;
- (void)saveLastLoginType:(id)arg1;
- (void)deleteDeviceUser;
- (id)uuidString;
- (void)saveDeviceUid:(unsigned long long)arg1 userDevice:(id)arg2;
- (id)p_userInfoWithUid:(long long)arg1;
- (void)deleteUserInfo;
- (void)saveUseInfo:(id)arg1;
- (void)saveUseInfoDict:(id)arg1;
- (void)saveUseInfo;
- (void)registerConfig:(Class)arg1;

@end

