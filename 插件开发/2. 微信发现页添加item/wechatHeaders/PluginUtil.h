//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PluginUtil : NSObject
{
}

+ (_Bool)isInMyContactList:(int)arg1;
+ (id)getWenxinAliasName;
+ (id)getOfficialLocalizedNickNameWithType:(int)arg1;
+ (id)getOfficialUserNameWithType:(int)arg1;
+ (_Bool)isOfficialExpectWeixinUserNmae:(id)arg1;
+ (_Bool)isOfficialExpectWeixinContact:(id)arg1;
+ (_Bool)isOfficialUserName:(id)arg1;
+ (void)closePlugin:(int)arg1 sync:(_Bool)arg2;
+ (void)openPlugin:(int)arg1 sync:(_Bool)arg2;
+ (unsigned int)getAlbumPrivacyOption;
+ (void)setAlbumPrivacyOption:(unsigned int)arg1;
+ (unsigned int)clearLBSPluginData;
+ (unsigned int)closePushMailPlugin;
+ (unsigned int)openPushMailPlugin:(id)arg1;
+ (unsigned int)opPushMailPlugin:(unsigned int)arg1 pwd:(id)arg2;
+ (_Bool)isPluginShow:(int)arg1;
+ (void)newGenericFunctionSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (void)genericFunctionSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (_Bool)isPluginOpened:(int)arg1;
+ (_Bool)isOfficialContact:(id)arg1;
+ (id)getPluginLocalizedNickName:(int)arg1;
+ (id)getPluginUserName:(int)arg1;
+ (int)getPluginUserNameType:(id)arg1;
+ (int)getPluginContactType:(id)arg1;
+ (id)getPluginContact:(int)arg1;
+ (void)refreshLocalizedName;
+ (_Bool)isPluginUserName:(id)arg1;
+ (void)clearPluginData:(int)arg1;
+ (void)unInstallPlugin:(int)arg1;
+ (void)installPlugin:(int)arg1;
+ (void)unInstallPlugin:(int)arg1 sync:(_Bool)arg2;
+ (void)installPlugin:(int)arg1 sync:(_Bool)arg2;
+ (_Bool)isPluginInstalled:(int)arg1;
+ (unsigned int)pluginTypeToUnInstallBit:(int)arg1;

@end

