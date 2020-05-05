//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;
@protocol XMUBTAOPBindingManagerDelegate;

@interface XMUBTAOPBindingManager : NSObject
{
    id <XMUBTAOPBindingManagerDelegate> _delegate;
    NSMapTable *_objectToGestureDic;
    NSArray *_currentCandidatePaths;
    NSMapTable *_objectToTargetActionsDic;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMapTable *objectToTargetActionsDic; // @synthesize objectToTargetActionsDic=_objectToTargetActionsDic;
@property(retain, nonatomic) NSArray *currentCandidatePaths; // @synthesize currentCandidatePaths=_currentCandidatePaths;
@property(retain, nonatomic) NSMapTable *objectToGestureDic; // @synthesize objectToGestureDic=_objectToGestureDic;
@property(nonatomic) __weak id <XMUBTAOPBindingManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performOneViewTargetActions:(id)arg1;
- (void)enableAllActions;
- (void)disableAllActions;
- (void)addViewTargetAction:(id)arg1 gesture:(id)arg2;
- (_Bool)judgeConfirmToViewAndShouldGoOn:(id)arg1 gesture:(id)arg2;
- (_Bool)judgeConfirmToViewAndShouldGoOn:(id)arg1;
- (void)updateCandidatePaths:(id)arg1;

@end

