//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BURewardedVideoPreloaderManager : NSObject
{
}

+ (id)defaultPersistence;
+ (id)sharedInstance;
- (void)loadPreMaterialMetaWithSlot:(id)arg1;
- (void)getMaterialMetaFromNetworkWithSlot:(id)arg1 sucess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 successLoadVideo:(CDUnknownBlockType)arg4 failureLoadVideo:(CDUnknownBlockType)arg5 IsPre:(_Bool)arg6;
- (id)materialMetaFromCacheWithSlotId:(id)arg1;
- (void)callSuccessBlock:(CDUnknownBlockType)arg1 withMaterial:(id)arg2;
- (void)materialMetaForRewardedVideoSlot:(id)arg1 sucess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 successLoadVideo:(CDUnknownBlockType)arg4;
- (id)init;
- (id)defaulMaterialMetaDict;
- (id)getLocalPlayableMaterialMetaWithSlot:(id)arg1;
- (void)handelPlayableToolWithSlot:(id)arg1 sucess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 successLoadVideo:(CDUnknownBlockType)arg4;
- (_Bool)needHandelPlayableTool;

@end

